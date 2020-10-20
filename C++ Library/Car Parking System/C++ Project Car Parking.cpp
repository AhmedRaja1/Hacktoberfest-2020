#include<iostream>
using namespace std;
int main()
{
    int u_input ; //Input 
	int amount = 0 ; //Total ammount of rupees is initially zero
	int count = 0 ; //Total ammount of vehicles is initially zero
	int r = 0 ; //initially no. of rickshaws is zero
	int c = 0 ; //initially no. of cars is zero
	int b = 0 ; //initially no. of buses is zero
	int m = 0 ; //initially no. of motorbics is zero
	int hours = 0 ; //hours of stay
	
	cout<<"  ***************************   "<<endl;
	cout<<"      CAR PARKING SYSTEM     "<<endl;
	cout<<"   DEVELOPED BY : LAIBA SAEED   "<<endl;
	cout<<"  ***************************   "<<endl;
	
	while(true)
	{
	
	cout<<"Please Enter no. of hours of stay :"<<endl;
	cin>>hours;
	
	cout<<"Press 1 for Rickshaw. "<<endl;
	cout<<"Press 2 for Car. "<<endl;
	cout<<"Press 3 for Bus. "<<endl;
	cout<<"Press 4 for motorbics. "<<endl;
	cout<<"Press 5 to show the record. "<<endl;
	cout<<"Press 6 to delete the record. "<<endl;
	
	cin>>u_input;
	
	switch(u_input)
	{
	case 1:
	{
		if(count<=50) //total 50 vehicles can parked at a time
		{
			r++; //add one in total no of rickshaws
			amount = amount + (hours*100) ; //100 for one rickshaw, total amount multiply by no. of hours
			count = count + 1;  //add 1 in total no of vehicles
		}
		else
		{
			cout<<"Parking is full."<<endl;
		}
    }
    break;
	case 2:
	{
		if(count<=50)
		{
			c++; //add one in total no of cars
			amount = amount + (hours*200) ; //200 for one car , total amount multiply by no. of hours
			count = count + 1;  //add 1 in total no of vehicles
		}
		else
		{
			cout<<"Parking is full."<<endl;
		}
	}
	break;
	case 3:
	{
		if(count<=50)
		{
			b++; //add one in total no of buses
			amount = amount + (hours*300) ;//300 for one bus, total amount multiply by no. of hours
			count = count + 1;  //add 1 in total no of vehicles
		}
		else
		{
			cout<<"Parking is full."<<endl;
		}
	}
	break;
	case 4:
	{
		if(count<=50)
		{
			m++; //add one in total no of motorbics
			amount = amount + (hours*50) ; //50 for one motorbic, total amount multiply by no. of hours
			count = count + 1;  //add 1 in total no of vehicles
		}
		else
		{
			cout<<"Parking is full."<<endl;
		}
	}
	break;
	case 5:
	{
		//Show details
		cout<<"*************************************"<<endl;
		cout<<"Total Amount = "<<amount<<endl;
		cout<<"Total numberc of vehicles = "<<count<<endl;
		cout<<"Total number of rikshaws parked = "<<r<<endl;
		cout<<"Total number of cars parked = "<<c<<endl;
		cout<<"Total number of parked Buses = "<<b<<endl;
		cout<<"Total number of parked motorbics = "<<m<<endl;
		cout<<"*************************************"<<endl;
	}
	break;
	case 6:
	{
        //Delete record
		amount = 0 ;
		count = 0 ;
		r = 0 ;
		c= 0 ;
		b = 0 ;
		m = 0 ;
		cout<<"*************************************"<<endl;
		cout<<"Record Deleted."<<endl;
		cout<<"*************************************"<<endl;
	}
	break;
	default:
	{
		cout<<"*************************************"<<endl;
		cout<<"Invalid number."<<endl;
		cout<<"*************************************"<<endl;
	}
    }
}
	return 0 ; 
}
