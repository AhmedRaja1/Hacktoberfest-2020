# Pratice Diabetes

# Libraries Import Kar waa rhay!
import pandas as pd
import numpy as np
import seaborn as sns
import matplotlib.pyplot as plt


from sklearn.linear_model import LogisticRegression

#Making it suitable
diabetesDF = pd.read_csv('diabetes.csv')
print(diabetesDF.head())

#Data Checking
diabetesDF.info()

#finding corelation
#corr = diabetesDF.corr()
#print(corr)
#sns.heatmap(corr, 
  #       xticklabels=corr.columns, 
   #      yticklabels=corr.columns)




#Data Splitting
dfTrain = diabetesDF[:650]
dfTest = diabetesDF[650:750]
dfCheck = diabetesDF[750:]

#Separation of Labels
trainLabel = np.asarray(dfTrain['Outcome'])
trainData = np.asarray(dfTrain.drop('Outcome',1))
testLabel = np.asarray(dfTest['Outcome'])
testData = np.asarray(dfTest.drop('Outcome',1))

#Normalization
means = np.mean(trainData, axis=0)
stds = np.std(trainData, axis=0)
trainData = (trainData - means)/stds
testData = (testData - means)/stds
# np.mean(trainData, axis=0) => check that new means equal 0
# np.std(trainData, axis=0) => check that new stds equal 1

#Model Training
diabetesCheck = LogisticRegression()
diabetesCheck.fit(trainData, trainLabel)

#Accuracy Prediction
accuracy = diabetesCheck.score(testData, testLabel)
print("accuracy = ", accuracy * 100, "%")


# Barplot chart taakay konsa factor depend karta hai
orig_train_data = dfTrain.drop('Outcome',1)
coeff = list(diabetesCheck.coef_[0])
labels = list(orig_train_data.columns)
features = pd.DataFrame()
features['Features'] = labels
features['importance'] = coeff
features.sort_values(by=['importance'], ascending=True, inplace=True)
features['positive'] = features['importance'] > 0
features.set_index('Features', inplace=True)
features.importance.plot(kind='barh', figsize=(11, 6),color = features.positive.map({True: 'blue', False: 'red'}))
plt.xlabel('Importance')













