#include<iostream>
#include<process.h>
#include<fstream> //This data type represents the file stream generally, and has the capabilities
 //of both ofstream and ifstream which means it can create files, write information to files, and read information from files
#include <stdlib.h>    //this library of C++ includes functions involving memory allocation
using namespace std;


	char Iname[50][50];
	int totalitems;
	float Qty[3];     //array for total quantity of item
	float price[3];
	int tprice[3];   //array to sum all the elements to get total price

void input()
{
	system("CLS");    // Used to start a new page in cmd.
	cout<<"\n\tTotal number of items= ";
	cin>>totalitems;

	for(int i=0; i<totalitems; i++)
	{
		cout<<"\nEnter name of item "<<i+1<<": ";
		cin>>Iname[i];
		cout<<"Enter quantity: ";
		cin>>Qty[i];
		cout<<"Enter price of item "<<i+1<<": ";
		cin>>price[i];
		tprice[i]=Qty[i]*price[i];
	}
}



void output()
{
	int a;

	ifstream infile("BILL.TXT");    // ifstream data type represents the input file stream and is used to read information from files
	infile>>a;             //infile is used to open a file
    infile.close();
	ofstream outfile("BILL.TXT");     //ofstream data type represents the output file stream and is used to create files and to write information to files.
	a+=1;
	outfile<<a;
	outfile.close();               //outfile is used to close the file

	{ofstream outfile("RECORD.TXT", ios::app);
	outfile<<endl<<"Bill No.: "<<a<<endl;
	outfile<<"------------------------------------------------------------------------"<<endl;
    cout<<"\n";
	cout<<"Name of Item\tQuantity   Price  Total Price\n";
	for(int i=0;i<totalitems;i++)
	{
		outfile<<"Name: "<<Iname[i]<<" Qty: "<<Qty[i]<<" Price: "<<tprice[i]<<endl;
		cout<<Iname[i]<<"\t\t"<<Qty[i]<<"\t   "<<price[i]<<"\t   "<<tprice[i]<<'\n';
	}

	outfile<<"------------------------------------------------------------------------"<<endl;
	outfile.close();
	}
}


//******************************************************************
//	   calculations
//******************************************************************

void outputs()
{
	input();
	output();      //output function is called to store the record in file.

	float cash=0,sum=0,qty=0,sumt=0;

	for(int i=0;i<totalitems;i++)
	{
	       sumt+=tprice[i];
		   qty+=Qty[i];
	}
	cout<<"\nTotal:";
	cout<<"\n------------------------------------------------------------------------------";
	cout<<"\n\tQuantity= "<<qty<<"\t\t Total Price= "<<sumt;
	cout<<"\n------------------------------------------------------------------------------";

pay:

	cout<<"\n\n\t\t\t****   PAYMENT SUMMARY   ****\n";
	cout<<"\n\t\t\tTotal cash given: ";
	cin>>cash;

	if(cash>=sum)
	{
	cout<<"\n\t\t\tTotal cash repaid: "<<cash-sumt<<'\n';
	cout<<"\n\t\t\t   Thank You !\n";
    }
	else
	{	cout<<"\n\t\t\tCash given is less than total amount!!!";

	goto pay;
	}
}




//****************************************************************
//    	THE MAIN FUNCTION OF PROGRAM
//****************************************************************
int main()
{
	
	char opt, ch;    //opt is declared for switch  and ch is declared for
	int a=1;           //declared for pasword
	ifstream record;     //ifstream is used to open a file

	 do{
start:
	system("PAUSE");   //To take a pause for a while.
	system("CLS");    //to start a new page in "CMD"
	cout<<"\n\t\t00     00      00         00      000000000000    ";
	cout<<"\n\t\t00     00      00 00  00  00           00         ";
	cout<<"\n\t\t00     00      00   00    00           00         ";
	cout<<"\n\t\t00     00      00         00           00         ";
	cout<<"\n\t\t 0000000       00         00           00         ";
	cout<<"\n\n\n\t\t\t------------------------------";
	cout<<"\n\t\t\tCAFE Billing Management System";
	cout<<"\n\t\t\t------------------------------";
	 cout<<"\n\n\t\t\tWhat you want to do?";
	 cout<<"\n\t\t\t1.\tTo enter new entry\n\t\t\t2.\tTo view previous entries\n\t\t\t3.\tExit\n";
	 cout<<"\n\n\tEnter your option: ";
	 cin>>opt;
	 switch(opt)              //switch
	 {
	 case'1': 
         outputs();                  //function called from vat class
		 goto start;                     //to again start the process as a lopp.
	 case'2':

		 record.open("RECORD.TXT", ios::in);   //to open the file saved        ios::in means open for input operations
		 while(record.get(ch))    //to load all the record in ch.
		 {
			 cout<<ch;
		 }
		 record.close();

		 goto start;             //to again start the process as a lopp.
	 case'3':
		 exit(0);
	 default:                  //when no option is mathched the default is used.
		 cout<<"\a";    
	 }

	 }while(opt!=3);    //do while loop and it will run until we enter "3" to exist by ownself.
	
	return 0;
}
