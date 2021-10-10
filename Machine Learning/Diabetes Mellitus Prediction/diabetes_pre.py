# -*- coding: utf-8 -*-
"""
Created on Sat Apr 11 13:31:14 2020

@author: NainaSaid
"""

import pandas as pd
from sklearn.linear_model import LogisticRegression
from sklearn.model_selection import train_test_split
from sklearn import svm
from sklearn.metrics import accuracy_score


data=pd.read_csv("diabetes.csv")

features=data.drop(['Outcome'],axis=1)

labels=data['Outcome']




X_train, X_test, y_train, y_test = train_test_split(features, labels, test_size=0.33)

clf=svm.SVC() #Support Vector Machine




predictions=clf.predict(X_test)

accuracy=accuracy_score(y_test,predictions)
print(accuracy)


## check online how to implement linear regression.
