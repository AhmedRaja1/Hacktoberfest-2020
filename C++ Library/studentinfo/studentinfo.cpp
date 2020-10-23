#include <iostream>
using namespace std;
struct student_t{
	string name;
	string reg_num;
	int sem_num;
};
int main()
{
  string reg;
  student_t x[10];
  for(int a=0;a<=10;a++)
  {
  	cout<<"Enter the name of student : ";
  	cin>>x[a].name;
  	cout<<"\nenter registration number of student : ";
  	cin>>x[a].reg_num;
  	cout<<"\nEnter semester number of student : ";
  	cin>>x[a].sem_num;
  	cout<<endl;
  }
    cout<<"Write the registration number of student you whant to know about : ";
     cin>>reg;
     for(int a=0;a<=10;a++)
  {
  	if(reg==x[a].reg_num)
  	{
  		cout<<"Name = "<<x[a].name<<endl;
  		cout<<"Regestration number = "<<x[a].reg_num<<endl;
  		cout<<"Semester = "<<x[a].sem_num<<endl;
	}
  }
return 0;
}
