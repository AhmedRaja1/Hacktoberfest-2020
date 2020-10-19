#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    ofstream myfile;

    char name[20];

    char reg[15];

    string grade;

    float pts;

    float gpa=0;

    string res[20];

    int sub[10]={0};

    int num,hrs,t_hrs=0;

    char ask;

    cout<<"Enter the Student's Details\n\n";

    cout<<"Enter the Name\n";
    gets(name);

    cout<<"Enter Registration Number\n";
    gets(reg);

    cout<<"Enter Number of Subjects \n";
    cin>>num;

    for(int i=0; i<num; i++)
    {
        pts=0;
        hrs=0;
        cout<<"Enter Subject: "<<i+1<<" grade\n";
        cin>>grade;

        cout<<"Enter Credit Hours of Subject "<<i+1<<endl;
        cin>>hrs;

        if(grade=="A"){
            pts=4.0;
        }
        else if(grade=="A-")
            {
            pts=3.67;
            }
        else if(grade=="B+")
            {
            pts=3.33;
            }
        else if(grade=="B")
            {
            pts=3.0;
            }
         else if(grade=="B-")
            {
            pts=2.67;
            }
        else if(grade=="C+")
            {
            pts=2.33;
            }
        else if(grade=="C")
            {
            pts=2.0;
            }
        else if(grade=="C-")
            {
            pts=1.67;
            }
        else if(grade=="D")
            {
            pts=1.0;
            }
        else if(grade=="F")
            {
            pts=0.0;
            }
        sub[i]=hrs;

        pts=pts*hrs;

        gpa+=pts;

        res[i]=grade;

        t_hrs+=hrs;;
    }
    myfile.open("transcript.txt");

    myfile<<"\t\t\t UNIVERSITY OF ENGINEERING and TECHNOLOGY PESHAWAR    \n\n";

    myfile<<"\t\t\t    Department of Computer Systems Engineering            \n\n";

    myfile<<"\t\t\t        Online Transcript Generating System            \n\n";

    myfile<<"Name \t\t\t\t\t\t "<<name<<"\n\n";

    myfile<<"Reg No \t\t\t\t\t\t "<<reg<<"\n\n";

    cout<<"Name \t\t\t\t\t\t "<<name<<"\n\n";

    cout<<"Reg No \t\t\t\t\t\t "<<reg<<"\n\n";

    for(int i=0; i<num; i++)
    {
    cout<<"Subject "<<i+1<<": \t|\t\t"<<"Credit Hours: \t\t\t"<<sub[i]<<"\t|\t\tGrade:\t\t"<<res[i]<<"\n\n";

    myfile<<"Subject "<<i+1<<": \t|\t\t"<<"Credit Hours: \t\t\t"<<sub[i]<<"\t|\t\tGrade:\t\t"<<res[i]<<"\n\n";
    }
    cout<<"GPA:-------------------------------------------- "<< gpa/t_hrs;

    myfile<<"\n\nGPA:------------------------------------------------------------------------------------------------    "<< gpa/t_hrs;

    cout<<"\n\nDo you want to print your transcript?\n\n if Yes! press Y or y and if No! press N or n \n\n";

    cin>>ask;

    if(ask=='Y' || ask=='y')
    ShellExecute(NULL, "open", "transcript.txt", NULL, NULL, SW_SHOWNORMAL);

    else if(ask=='N' || ask=='n')
        cout<<"Thanks! Have a Good Day";
}
