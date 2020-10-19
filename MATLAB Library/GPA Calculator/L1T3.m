clc
clear all
close all
CP=input('Enter CP grade points: ');
CPCH=input('Enter CP Credit Hours: ');
CS=input('Enter CS grade points: ');
CSCH=input('Enter CS Credit Hours: ');
DE=input('Enter DE grade points: ');
DECH=input('Enter DE Credit Hours: ');
EDG=input('Enter EDG grade points: ');
EDGCH=input('Enter EDG Credit Hours: ');
CPS=input('Enter CPS grade points: ');
CPSCH=input('Enter CPS Credit Hours: ');
a=(CP*CPCH)+(CS*CSCH)+(DE*DECH)+(EDG*EDGCH)+(CPS*CPSCH);
b=CPCH+CSCH+DECH+EDGCH+CPSCH;
z=a/b;
disp('Your GPA is ');
z