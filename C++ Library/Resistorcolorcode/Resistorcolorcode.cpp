#include<iostream>
#include<string>
using namespace std;

struct color_coding{
	string first_band;
	string second_band;
	string third_band;
	string fourth_band;
};
float calculator(color_coding y);
char x; //global variable for again running the program
int main()
{
do{

	color_coding object;                                     //struct object 
	cout<<"PROGRAM FOR CALCULATING RESISTANCE OF RESISTOR USING COLOR CODING"<<endl<<endl;
	cout<<"Enter only small case letters without any space for colors."<<endl<<endl;
	cout<<"Enter the first band color : ";
	getline(cin,object.first_band);
	cout<<"\nEnter the second band color : ";
	getline(cin,object.second_band);
	cout<<"\nEnter the third band color : ";
	getline(cin,object.third_band);
	cout<<"\nEnter the fourth or tolerance band color : ";
	getline(cin,object.fourth_band);
	cin.ignore();
	cout<<"The resistance of resistor = "<<calculator(object)<<" ohms.";     //function calling
	cout<<"Do you want to decode another resistor?\n Press Y for yes or N for no:";
	cin>>x;
	cin.ignore();                                           //for memory buffering
    }
    while(x=='Y');
   
	return 0;
}
float calculator(color_coding y)
{
	if(y.first_band=="red"&&y.second_band=="red"&&y.third_band=="black"&&y.fourth_band=="golden")
	{
		cout<<"Red band = 2"<<endl;
		cout<<"Red band = 2"<<endl;
		cout<<"Black band = 1"<<endl;
		cout<<"Golden band = 5"<<endl;
		cout<<"Calculations = 22*10^1+-0.5%"<<endl;
		cout<<"the resistance of resistor ranges from 22800 to 25200"<<endl;
	return(1.1);
	}else
	if(y.first_band=="brown"&&y.second_band=="orange"&&y.third_band=="black"&&y.fourth_band=="golden")
	{
		cout<<"Brown band = 1"<<endl;
		cout<<"orange band = 3"<<endl;
		cout<<"black band = 0"<<endl;
		cout<<"Golden band = 5"<<endl;
		cout<<"Calculations = 13*10^0+-0.5%"<<endl;
		cout<<"the resistance of resistor ranges from 12.35 to 13.65"<<endl;
	return(13.0);
	}else
	if(y.first_band=="orange"&&y.second_band=="yellow"&&y.third_band=="blue"&&y.fourth_band=="golden")
	{
		cout<<"orange band = 3"<<endl;
		cout<<"yellow band = 4"<<endl;
		cout<<"blue band = 6"<<endl;
		cout<<"Golden band = 5"<<endl;
		cout<<"Calculations = 34*10^6+-0.5%"<<endl;
		cout<<"the resistance of resistor ranges from 32.3M to 35.7M"<<endl;
	return(34000000.0);
	}else
	if(y.first_band=="red"&&y.second_band=="yellow"&&y.third_band=="orange"&&y.fourth_band=="golden")
	{
		cout<<"Red band = 2"<<endl;
		cout<<"yellow band = 4"<<endl;
		cout<<"orange band = 3"<<endl;
		cout<<"Golden band = 0.5"<<endl;
		cout<<"Calculations = 24*10^3+-0.5%"<<endl;
		cout<<"the resistance of resistor ranges from 22800 to 25200"<<endl;
	return(24000.0);
	}else
	if(y.first_band=="green"&&y.second_band=="blue"&&y.third_band=="red"&&y.fourth_band=="silver")
	{
		cout<<"green band = 5"<<endl;
		cout<<"blue band = 6"<<endl;
		cout<<"red band = 2"<<endl;
		cout<<"silver band = 10"<<endl;
		cout<<"Calculations = 56*10^2+-10%"<<endl;
		cout<<"the resistance of resistor ranges from 5040 to 6100"<<endl;
	return(5600.0);
	}else
	if(y.first_band=="violet"&&y.second_band=="yellow"&&y.third_band=="blue"&&y.fourth_band=="silver")
	{
		cout<<"violet band = 7"<<endl;
		cout<<"yellow band = 4"<<endl;
		cout<<"blue band = 6"<<endl;
		cout<<"silver = 10"<<endl;
		cout<<"Calculations = 74*10^6+-10%"<<endl;
		cout<<"the resistance of resistor ranges from  to 5.64M ohms "<<endl;
	return(4700000.0);
	}else
	if(y.first_band=="brown"&&y.second_band=="violet"&&y.third_band=="orange"&&y.fourth_band=="silver")
	{
		cout<<"brown band = 1"<<endl;
		cout<<"violet band = 7"<<endl;
		cout<<"orange band = 3"<<endl;
		cout<<"silver = 10"<<endl;
		cout<<"Calculations = 17*10^3+-10%"<<endl;
		cout<<"the resistance of resistor ranges from 15.3k to 18.7k ohms "<<endl;
	return(17000.0);
	}else
	if(y.first_band=="brown"&&y.second_band=="brown"&&y.third_band=="violet"&&y.fourth_band=="golden")
	{
		cout<<"brown band = 1"<<endl;
		cout<<"brown band = 1"<<endl;
		cout<<"violet band = 7"<<endl;
		cout<<"golden = 5"<<endl;
		cout<<"Calculations = 11*10^7+-5%"<<endl;
		cout<<"the resistance of resistor ranges from 104.5M to 115.5M ohms "<<endl;
	return(110000000.0);
	}else
	if(y.first_band=="green"&&y.second_band=="brown"&&y.third_band=="violet"&&y.fourth_band=="silver")
	{
		cout<<"green band = 5"<<endl;
		cout<<"brown band = 1"<<endl;
		cout<<"violet band = 7"<<endl;
		cout<<"silver = 10"<<endl;
		cout<<"Calculations = 51*10^7+-10%"<<endl;
		cout<<"the resistance of resistor ranges from 459M to 561M ohms "<<endl;
	return(510000000.0);
	}else
	if(y.first_band=="green"&&y.second_band=="red"&&y.third_band=="brown"&&y.fourth_band=="silver")
	{
		cout<<"green band = 5"<<endl;
		cout<<"red band = 2"<<endl;
		cout<<"brown band = 1"<<endl;
		cout<<"silver = 10"<<endl;
		cout<<"Calculations = 52*10^1+-10%"<<endl;
		cout<<"the resistance of resistor ranges from 495 to 545 ohms "<<endl;
	return(520.0);
	}else
	if(y.first_band=="red"&&y.second_band=="green"&&y.third_band=="black"&&y.fourth_band=="silver")
	{
		cout<<"red band = 2"<<endl;
		cout<<"green band = 5"<<endl;
		cout<<"black band = 0"<<endl;
		cout<<"silver = 10"<<endl;
		cout<<"Calculations = 25*10^0+-10%"<<endl;
		cout<<"the resistance of resistor ranges from 22.5 to 27.5 ohms "<<endl;
	return(25.0);
	}else
	if(y.first_band=="black"&&y.second_band=="yellow"&&y.third_band=="red"&&y.fourth_band=="golden")
	{
		cout<<"black band = 0"<<endl;
		cout<<"yellow band = 4"<<endl;
		cout<<"red band = 2"<<endl;
		cout<<"golden = 5"<<endl;
		cout<<"Calculations = 4*10^2+-5%"<<endl;
		cout<<"the resistance of resistor ranges from 3895 to 4305 ohms "<<endl;
	return(4100.0);
	}else
	{
	cout<<"COLORS NOT FOUND TRY AGAIN WITH OTHER COLORS"<<endl;	
	}	
}
