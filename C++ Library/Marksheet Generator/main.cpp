//This is a marks sheet program.
#include <iostream>
using namespace std;
int main()
{
    //a,b,c,d,e are the integers used.
   int a,b,c,d,e;
   cout<<"Mathematics: ";
   cin>>a;
   cout<<"English: ";
   cin>>b;
   cout<<"Urdu: ";
   cin>>c;
   cout<<"Islamiat: ";
   cin>>d;
   cout<<"Science: ";
   cin>>e;
   //This is the sum of all subjects.
   int x=a+b+c+d+e;
   //This is the percentage of all subjects.
   float y=x*100/500;
   //This is the average of all subjects.
   int z=x/5;
   cout<<"Mathematic: "<<a<<endl;
   cout<<"English: "<<b<<endl;
   cout<<"Urdu: "<<c<<endl;
   cout<<"Islamiat: "<<d<<endl;
   cout<<"Science: "<<e<<endl;
   cout<<"Percentage: "<<y<<endl;
   cout<<"Average: "<<z<<endl;
   //This is the grading system.
   /*Grades are given according to the following pattern
    A+(90-100%), A(80-89%), B(70-79%), C(60-69%),
    D(50-59%), F(0-49%). */
     if (y>=90)
   {
       cout<<"Grade: A+";
   }else if (y>=80)
   {
       cout<<"Grade: A";
   }else if (y>=70)
   {
       cout<<"Grade: B";
   }else if (y>=60)
   {
       cout<<"Grade: C";
   }else if (y>=50)
   {
       cout<<"Grade: D";
   }else
   {
       cout<<"Grade: F";
   }
    return 0;
}
