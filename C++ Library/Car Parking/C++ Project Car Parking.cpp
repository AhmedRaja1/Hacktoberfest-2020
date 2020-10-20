#include<iostream>
using namespace std;
int main()
{
	int u_input ;
	int amount = 0 ;
	int count = 0 ;
	int r = 0 ;
	int c = 0 ;
	int b = 0 ;
	
	while(true)
	{
	cout<<"Press 1 for Rickshaw. "<<endl;
	cout<<"Press 2 for Car. "<<endl;
	cout<<"Press 3 for Bus. "<<endl;
	cout<<"Press 4 to show the record. "<<endl;
	cout<<"Press 5 to delete the record. "<<endl;
	
	cin>>u_input;
	
	if(u_input == 1)
	{
		if(count<=50)
		{
			r++;
			amount = amount + 100 ;
			count = count + 1;  
		}
		else
		{
			cout<<"Parking is full."<<endl;
		}
    }
	else if(u_input == 2)
	{
		if(count<=50)
		{
			c++;
			amount = amount + 200 ;
			count = count + 1;  
		}
		else
		{
			cout<<"Parking is full."<<endl;
		}
	}
	else if(u_input == 3)
	{
		if(count<=50)
		{
			b++;
			amount = amount + 300 ;
			count = count + 1;  
		}
		else
		{
			cout<<"Parking is full."<<endl;
		}
	}
	else if(u_input == 4)
	{
		cout<<"*************************************"<<endl;
		cout<<"Total Amount = "<<amount<<endl;
		cout<<"Total numberc of vehicles = "<<count<<endl;
		cout<<"Total number of rikshaws parked = "<<r<<endl;
		cout<<"Total number of cars parked = "<<c<<endl;
		cout<<"Total number of parked Buses = "<<b<<endl;
		cout<<"*************************************"<<endl;
	}
	else if(u_input == 5)
	{
		amount = 0 ;
		count = 0 ;
		r = 0 ;
		c= 0 ;
		b = 0 ;
		cout<<"*************************************"<<endl;
		cout<<"Record Deleted."<<endl;
		cout<<"*************************************"<<endl;
	}
	else
	{
		cout<<"*************************************"<<endl;
		cout<<"Invalid number."<<endl;
		cout<<"*************************************"<<endl;
	}
	}
	return 0 ;
    
}
