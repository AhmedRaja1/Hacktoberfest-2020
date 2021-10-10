from sklearn.metrics import accuracy_score
from sklearn.linear_model import LogisticRegression
from sklearn.neighbors import KNeighborsClassifier
from sklearn.ensemble import RandomForestClassifier
from sklearn.tree import DecisionTreeClassifier
from sklearn.naive_bayes import GaussianNB
from sklearn.model_selection import cross_val_score
from sklearn.svm import SVC
from sklearn.preprocessing import RobustScaler
from sklearn.preprocessing import Normalizer
from sklearn.preprocessing import MinMaxScaler
from sklearn.preprocessing import StandardScaler
from sklearn.model_selection import train_test_split
import seaborn as sb
from matplotlib import pyplot as plt
from sklearn.preprocessing import LabelEncoder
import pandas as pd

# Ignore warnings
import warnings
warnings.filterwarnings("ignore")
warnings.simplefilter(action='ignore', category=FutureWarning)

# Reading dataset
train_datas = pd.read_csv('Test_Set (1).csv')
train_datas.head()

train_datas.info()

# Removing Unnamed:32 column from datas
#train_datas.drop(columns={'Unnamed: 32'},inplace=True)

# Converting diagnosis datas to numeric version
lbl = LabelEncoder()
train_datas['diagnosis'] = lbl.fit_transform(train_datas['diagnosis'])
train_datas.head()

# ID Column ko Drop karwaa deya aur saved as a backup agar baad mein need paray tou
train_datas_id = pd.DataFrame()
train_datas_id = train_datas['id']
train_datas.drop(columns={'id'}, inplace=True)

# Check if any imbalanced class labels problem exists.
plt.figure(figsize=(5, 10))
plt.pie([len(train_datas['diagnosis'][train_datas['diagnosis'] == 0]), len(train_datas['diagnosis'][train_datas['diagnosis'] == 1])],
        autopct='%1.1f%%',
        labels=['Healthy', 'Breast Cancer'])
plt.title('Class Label Rates')
plt.show()

# HeatMap
corr = train_datas.corr()
plt.figure(figsize=(40, 30))
sb.heatmap(corr, annot=True)

# As you see, there are many features which has high correlation with each other.
# It means that some of them are redundant. So we have to find and drop them
corr.head()

# list1 keeps high correlated feature pairs
list1 = []
for i in range(len(corr)):
    for j in range(i):
        if corr.iloc[i, j] > 0.9:
            list1.append([i, j])
list1

# Reduntant features are dropped in here
for i in list1:
    if len(train_datas.iloc[:, i[1]]) != 0:
        train_datas.iloc[:, i[1]] = 0
for j in train_datas.columns:
    if train_datas[j].sum() == 0:
        train_datas.drop(columns={j}, inplace=True)
train_datas

# After the preproccessing part, train and test subsets must be seperated.
x_train, x_test, y_train, y_test = train_test_split(train_datas.drop(
    columns={'diagnosis'}), train_datas['diagnosis'], test_size=0.2, random_state=32)
x_train.shape, x_test.shape, y_train.shape, y_test.shape

# Scaling process
# Scale train datas
# 1-Standart Scaler
scaler = StandardScaler()
x_train_st = scaler.fit_transform(x_train)
x_test_st = scaler.fit_transform(x_test)
# 2-Standart MinMaxScaler
scaler = MinMaxScaler()
x_train_mm = scaler.fit_transform(x_train)
x_test_mm = scaler.fit_transform(x_test)
# 3-Standart Normalizer
scaler = Normalizer()
x_train_n = scaler.fit_transform(x_train)
x_test_n = scaler.fit_transform(x_test)
# 4-Standart RobustScaler
scaler = RobustScaler()
x_train_rb = scaler.fit_transform(x_train)
x_test_rb = scaler.fit_transform(x_test)


# it is determined that RobustScaler is the best way to scaling.
# (%96 cross-validation accuracy)
# Support Vector Machines model is used for select the best scale technique as cross-validation score of fit-svm classifier.
#1- SVM
model_svm = SVC()
scores = cross_val_score(model_svm, x_train_rb, y_train, cv=10)
scores, scores.mean()

# 2-Naive Bayes
model_naive = GaussianNB()
scores = cross_val_score(model_naive, x_train_rb, y_train, cv=10)
scores, scores.mean()

# 3-Decision Tree
model_tree = DecisionTreeClassifier()
scores = cross_val_score(model_tree, x_train_rb, y_train, cv=10)
scores, scores.mean()

# 4-Random Forest
model_rf = RandomForestClassifier()
scores = cross_val_score(model_rf, x_train_rb, y_train, cv=10)
scores, scores.mean()

# 5-KNeighbor
model_knn = KNeighborsClassifier(n_neighbors=10)
scores = cross_val_score(model_knn, x_train_rb, y_train, cv=10)
scores, scores.mean()

# 6-Logistic Regression (Best)
model_lr = LogisticRegression()
scores = cross_val_score(model_lr, x_train_rb, y_train, cv=10)
scores, scores.mean()


# As results, best-performance models are:
#1- XGBClassifier
#2- SVM
# 3- Logistic Regression

model_xgb = LogisticRegression()
model_xgb.fit(x_train_rb, y_train)
pred_test = model_xgb.predict(x_test_rb)
acc = accuracy_score(y_test.values, pred_test)
# 3 model is trained and getting accuracy of them.
# As a result, Number3(Logistic Regression) has best accuracy point at test datas.


print('Last Accuracy of selected model is: %', round(acc * 100, 3))
