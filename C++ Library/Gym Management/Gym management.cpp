#include<iostream>
using namespace std;
int main()
{
	while(true)
	{
	int choice ;
	int month ;
	int bill ;
		
	cout<<"*************************************"<<endl;
	cout<<"\t\tGym Management System"<<endl;
	cout<<"Press 1 for students."<<endl;
	cout<<"Press 2 for Businessman."<<endl;
	cout<<"Press 3 for Emloyee."<<endl;
	cout<<"Press 4 to exit the program."<<endl;
	cout<<"*************************************"<<endl;
	
	cin>>choice;
	
	if(choice == 1 || choice == 2 || choice == 3)
	{
		switch(choice)
		{
			case 1:
				cout<<"*************************************"<<endl;
				cout<<"Enter no. of month:"<<endl;
				cin>>month;
				bill = month*300;
				cout<<"Your bill is :"<<bill<<endl;
				cout<<"Thanks for Joining"<<endl;
				cout<<"*************************************"<<endl;
			break;
			case 2:
				cout<<"*************************************"<<endl;
				cout<<"Enter no. of month:"<<endl;
				cin>>month;
				bill = month*700;
				cout<<"Your bill is :"<<bill<<endl;
				cout<<"Thanks for Joining"<<endl;
				cout<<"*************************************"<<endl;
			break;
			case 3:
				cout<<"*************************************"<<endl;
				cout<<"Enter no. of month:"<<endl;
				cin>>month;
				bill = month*500;
				cout<<"Your bill is :"<<bill<<endl;
				cout<<"Thanks for Joining"<<endl;
				cout<<"*************************************"<<endl;
			break;
		}
	}
	else if(choice == 4)
	{
		exit(0);
	}
	else
	{
		cout<<"You Entered a wrong Value."<<endl;
	} 
}

}
