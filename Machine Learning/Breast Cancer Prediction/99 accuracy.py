from sklearn.metrics import accuracy_score, confusion_matrix, classification_report
from sklearn.linear_model import LogisticRegression
from sklearn.preprocessing import StandardScaler
from sklearn.model_selection import train_test_split
from statsmodels.stats.outliers_influence import variance_inflation_factor
import numpy as np
import pandas as pd
import matplotlib.pyplot as plt
import seaborn as sns
# Importing All Necessary Libraries


data = pd.read_csv("cancer_data.csv")
data.head()


data.columns

data.info()

data.isnull().sum()

#data =data.drop(labels=["Unnamed: 32"],axis=1)

data["diagnosis"] = data["diagnosis"].replace("M", 1)
data["diagnosis"] = data["diagnosis"].replace("B", 0)

data.describe()


data.info()

plt.figure(figsize=(20, 15))
sns.set(style="darkgrid")
plotnumber = 1

for column in data:
    if plotnumber <= 30:
        ax = plt.subplot(5, 6, plotnumber)
        sns.histplot(data[column], kde=True)
        plt.xlabel(column)

    plotnumber += 1
plt.show()

plt.figure(figsize=(20, 15))
plotnumber = 1

for column in data:
    if plotnumber <= 30:
        ax = plt.subplot(5, 6, plotnumber)
        sns.boxplot(x=data[column])
        plt.xlabel(column)

    plotnumber += 1
plt.title("Distribution")
plt.show()


plt.figure(figsize=(30, 15))
sns.heatmap(data.corr(), annot=True)


sns.pairplot(data,
             x_vars=[
                 'area_worst',
                 'smoothness_worst',
                 'compactness_worst',
                 'concavity_worst',
                 'concave points_worst',
                 'symmetry_worst',
                 'fractal_dimension_worst'],
             y_vars=["diagnosis"])


sns.pairplot(data,
             x_vars=['concavity_se',
                     'concave points_se',
                     'symmetry_se',
                     'fractal_dimension_se',
                     'radius_worst',
                     'texture_worst',
                     'perimeter_worst'],
             y_vars=["diagnosis"])


sns.pairplot(data,
             x_vars=[
                 'fractal_dimension_mean',
                 'radius_se',
                 'texture_se',
                 'perimeter_se',
                 'area_se',
                 'smoothness_se',
                 'compactness_se'],
             y_vars=["diagnosis"])


sns.pairplot(data,
             x_vars=['radius_mean',
                     'texture_mean',
                     'area_mean',
                     'smoothness_mean',
                     'compactness_mean',
                     'concavity_mean',
                     'concave points_mean',
                     'symmetry_mean'],
             y_vars=["diagnosis"])

c = {"Agg_of_all": (data["radius_mean"]+data["texture_mean"]+data["perimeter_mean"]+data["area_mean"]+data["smoothness_mean"]+data["compactness_mean"] +
                    data["concavity_mean"]+data["concave points_mean"]+data["symmetry_mean"]+data["fractal_dimension_mean"]+data["radius_se"]+data["texture_se"] +
                    data["perimeter_se"]+data["area_se"]+data["smoothness_se"]+data["compactness_se"]+data["concavity_se"]+data["concave points_se"] +
                    data["fractal_dimension_se"]+data["symmetry_se"]+data["radius_worst"]+data["texture_worst"]+data["perimeter_worst"]+data["area_worst"] +
                    data["smoothness_worst"]+data["compactness_worst"]+data["concavity_worst"]+data["concave points_worst"]+data["symmetry_worst"]+data["fractal_dimension_worst"]), "diagnosis": data["diagnosis"]}
data_1 = pd.DataFrame(data=c)

data_1.head()

data_1["Agg_of_all"] = (data_1["Agg_of_all"]-data_1["Agg_of_all"].min()) / \
    (data_1["Agg_of_all"].max()-data_1["Agg_of_all"].min())


data_1.head()

sns.scatterplot(data=data_1, x="Agg_of_all", y="diagnosis", legend='auto')


def claculate_vif(dataset):
    vif = pd.DataFrame()
    vif_features = dataset.columns
    vif["vif_values"] = [variance_inflation_factor(
        dataset.values, i) for i in range(dataset.shape[1])]
    return vif


features = data[['radius_mean', 'texture_mean',
                 'area_mean', 'smoothness_mean', 'compactness_mean', 'concavity_mean',
                 'concave points_mean', 'symmetry_mean', 'fractal_dimension_mean',
                 'radius_se', 'texture_se', 'perimeter_se', 'area_se', 'smoothness_se',
                 'compactness_se', 'concavity_se', 'concave points_se', 'symmetry_se',
                 'fractal_dimension_se', 'radius_worst', 'texture_worst',
                 'perimeter_worst', 'area_worst', 'smoothness_worst',
                 'compactness_worst', 'concavity_worst', 'concave points_worst',
                 'symmetry_worst', 'fractal_dimension_worst']]
claculate_vif(features)


X = data[['radius_mean', 'perimeter_mean',
          'area_mean', 'smoothness_mean', 'compactness_mean', 'concavity_mean',
          'concave points_mean', 'symmetry_mean', 'fractal_dimension_mean',
          'radius_se', 'texture_se', 'perimeter_se', 'area_se', 'smoothness_se',
          'compactness_se', 'concavity_se', 'concave points_se', 'symmetry_se',
          'fractal_dimension_se', 'radius_worst', 'texture_worst',
          'perimeter_worst', 'area_worst', 'smoothness_worst',
          'compactness_worst', 'concavity_worst', 'concave points_worst',
          'symmetry_worst', 'fractal_dimension_worst']]
Y = data["diagnosis"]

X_train, X_test, Y_train, Y_test = train_test_split(
    X, Y, test_size=0.3, random_state=500)


# scaling data

scaler = StandardScaler()
X_train = scaler.fit_transform(X_train)
X_test = scaler.transform(X_test)

# Logistic Regression
classifier = LogisticRegression()
classifier.fit(X_train, Y_train)

y_pred = classifier.predict(X_test)

print(accuracy_score(Y_test, classifier.predict(X_test)))

   


final = pd.read_csv('Test_Set.csv')
p = classifier.predict(final)
print(p)
df = pd.DataFrame(p)
df.to_csv('file.csv',index=False)






























