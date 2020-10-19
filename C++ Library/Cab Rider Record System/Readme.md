# Cab Rider Record System
## 4th Semester DSA Lab Project

## Data Structure:
### Double Link List

## Extras:
### File Handling
### Super Fast Speed of Double Linked List

## Features:
### 1. Creation of a new rider profile
### 2. Print the recent the records
### 3. Show all records previous + current (Reading data from .txt file)
### 4. Searching the records by name
### 5. Searching the records by CNIC
### 6. Delete rider by name
### 7. Update the Rider Profile

## Basic Attributes of Rider Data Structure:
### 1. Rider’s Name
### 2. Rider’s CNIC
### 3. Rider’s Mobile Number
### 4. Rider’s Father Name
### 5. Rider’s Residential Address
### 6. Rider’s Email Address
### 7. Previous Pointer to the Previous Rider Profile
### 8. Next Pointer to the Next Rider Profile

## Abstract:
Cab Rider Record System is a Ms-DOS style console Application designed for maintaining the records of the riders
who are active and providing their services to the ride booking company. The admin has all the controls, it can add,
remove, view and edit the data of the riders. This system also exports data in form of .csv and .txt files. Thus, data
can further be used for Data Analysis Stage. The admin is the controller of the system. The idea was to design such a
system in which Riders information could be stored in an effective and efficient way, thus a new profile can be
created and maintained and queries could be handled in an effective way.
## Description:
As the projects idea and its background is described earlier, now towards its technical details. The project mainly
uses Doubly Linked List as its backend data structure. As Doubly Linked list is one of the fastest and dynamic data
structures in terms of data queries, insertion, and its most important use making deletion easier. Single Linked List
could also be used but as it becomes difficult to delete and insert, in terms of Deletion and Insertion Double Linked
List is more efficient as compared to Single Linked List, due to the fact that it employs a next and previous pointer
to nodes. Some of the general Time Complexity Statistics of Double Linked List:
1. Access O(n)
2. Insertion O(1)
3. Deletion O(1)
4. Search O(n)
So, to perform different operations it uses while loop to reach to the desired node position. Main Menu is designed
using the combination of Do While and Switch Case Statements.
Another exclusive feature is that when a rider data is added it is being exported to .txt and .csv files using File
Handling technique using the fstream.h library. The data collected in .csv file is then used to perform different data
analysis, which could be beneficial. As .csv format is cross platform and can be used anywhere.
