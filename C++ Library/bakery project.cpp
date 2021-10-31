#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<fstream>
#include<string.h>
#include<stdlib.h>
using namespace std;

class Bakery
{
	//Declaration of member variables.
	private:
		char itemname[30];
		int itemprice;
		int mfgday;
		int mfgmonth;
		int mfgyear;
		int expday;
		int expmonth;
		int expyear;
		int itemquantity;

	public:
	
	//Default Constructor.
	Bakery()
	{
		strcpy(itemname, "No Name");
		itemprice=0;
		mfgday=00;
		mfgmonth=00;
		mfgyear=0000;
		expday=00;
		expday=00;
		expday=0000;
		itemquantity=0;
	}
	
	//Function to get data from user.
	void getdata()
	{
		cout<<endl;
		cout<<"Enter Item Name :";
		fflush(stdin);
		cin.getline(itemname, 29);
		cout<<"Enter Item Price :";
		cin>>itemprice;

		cout<<"Manufacture Date :"<<endl;
		cout<<"Enter Mfg Day(1-31) :";
		cin>>mfgday;
		cout<<"Enter Mfg Month(1-12) :";
		cin>>mfgmonth;
		cout<<"Enter Mfg Year :";
		cin>>mfgyear;

		cout<<"Expiry Date :"<<endl;
		cout<<"Enter Exp Day(1-31) :";
		cin>>expday;
		cout<<"Enter Exp Month(1-12) :";
		cin>>expmonth;
		cout<<"Enter Exp Year :";
		cin>>expyear;

		cout<<"Enter Item Quantity :";
		cin>>itemquantity;
	}
	
	//Function to show data on screen.
	void showdata()
	{
		cout<<endl;
		cout<<"Item Name :"<<itemname<<endl;

		cout<<"Item Price :"<<itemprice<<endl;
		cout<<"Mfg Date :"<<mfgday<<"-"<<mfgmonth<<"-"<<mfgyear<<endl;

		cout<<"Exp Date :"<<expday<<"-"<<expmonth<<"-"<<expyear<<endl;

		cout<<"Item Quantity :"<<itemquantity<<endl;
	}
	
	//Declaration of other member functions.
	int storedata();
	void viewalldata();
	void searchdata(char *);
	void deletedata(char *);
	void updatedata(char *);
	void sellitems(char *);
	void purchaseitems(char *);
};


//Function to purchase items.
void Bakery::purchaseitems(char *t)
{

    int q;
	long position;
	fstream file;
	file.open("Items.dat", ios::in | ios::out | ios::ate | ios::binary);
	file.seekg(0);
	file.read((char*)this, sizeof(*this));
	while(!file.eof())
	{
	    
	    //if user entered item name and saved item name is same, then enter the if block.
	    if(!strcmp(t, itemname))

        {
//enter quantity that you want to purchase.
            cout<<"Enter Quantity :";

            cin>>q;
            //tellp and seekp functions is used to specify the position.
            position=file.tellp();
            file.seekp(position-sizeof(*this));

            itemquantity=itemquantity+q;
            //write function is used to write data in file.
            file.write((char*)this, sizeof(*this));
        }
//read function is used to read data from file.
        file.read((char*)this, sizeof(*this));
	}

//close function is used to close the file.
	file.close();
	  if(strcmp(t, itemname))
	{
		getdata();
		storedata();
	}
}


//member function to sell items.
void Bakery::sellitems(char *t)
{

    int q;
	long position;
	fstream file;
	file.open("Items.dat", ios::in | ios::out | ios::ate | ios::binary);
	file.seekg(0);
	//read functions is used to read data from file.
	file.read((char*)this, sizeof(*this));
	while(!file.eof())
	{
		//if user entered title and saved title is same, then enter the if block, otherwise read next record from file until loop reached end of file.
		if(!strcmp(t, itemname))
		{

		    cout<<"Enter Quantity :";

            cin>>q;
			position=file.tellp();
			file.seekp(position-sizeof(*this));

			itemquantity=itemquantity-q;
			//write function is used to write data in file.
			file.write((char*)this, sizeof(*this));
		}
		file.read((char*)this, sizeof(*this));
	}


	file.close();
}
//member function to update specific record in file.
void Bakery::updatedata(char *t)
{
	long position;
	fstream file;
	file.open("Items.dat", ios::in | ios::out | ios::ate | ios::binary);
	file.seekg(0);
	file.read((char*)this, sizeof(*this));
	while(!file.eof())
	{
		if(!strcmp(t, itemname))
		{
			getdata();
			position=file.tellp();
			file.seekp(position-sizeof(*this));
			file.write((char*)this, sizeof(*this));
		}
		file.read((char*)this, sizeof(*this));
	}
	file.close();
}
//member function to delete specific record from file.
void Bakery::deletedata(char *t)
{
	ifstream fin;
	ofstream fout;

	fin.open("Items.dat", ios::in | ios::binary);
	if(!fin)
		cout<<"File not Found.";
	else
	{
		fout.open("tempfile.dat", ios::out | ios::binary);
		fin.read((char*)this, sizeof(*this));
		while(!fin.eof())
		{
			if(strcmp(itemname, t))
				fout.write((char*)this, sizeof(*this));
			fin.read((char*)this, sizeof(*this));
		}
		fin.close();
		fout.close();
//remove function is used to delete the file from storage.
		remove("Items.dat");
		//rename function is used to rename the file with new name. In this function two arguments are passed, one is old name of file and second is new name of file.
		rename("tempfile.dat", "Items.dat");
	}
}
//member function to search specific record from file.
void Bakery::searchdata(char *t)
{
	int counter=0;
	ifstream fin;
	fin.open("Items.dat", ios::in | ios::binary);
	if(!fin)
		cout<<"File not Found.";
	else
	{
		fin.read((char*)this, sizeof(*this));
		while(!fin.eof())
		{
			if(!strcmp(t, itemname))
			{
				showdata();
				counter++;
			}
			fin.read((char*)this, sizeof(*this));
		}
		if(counter==0)
			cout<<"Item not Found.";
		fin.close();
	}
}
//member function to store data in file.
int Bakery::storedata()
{
	if(itemquantity==0 && itemprice==0)
	{
		cout<<"Item Data not Initialized.";
		return(0);
	}
	else
	{
		ofstream fout;
		fout.open("Items.dat", ios::app | ios::binary);
		fout.write((char*)this, sizeof(*this));
		fout.close();
		return(1);
	}
}
//member function to view all data of file.
void Bakery::viewalldata()
{
	ifstream fin;
	fin.open("Items.dat", ios::in | ios::binary);
	if(!fin)
		cout<<"File not Found.";
	else
	{
		fin.read((char*)this, sizeof(*this));
		while(!fin.eof())
		{
			//calling the show data function.
			showdata();
//if item quantity is less than 10, an alarm will be produce and warning will be display on screen.
			if(itemquantity<10)

                cout<<"\a"<<"\nWarning! "<<itemname<<" Quantity is less than 10."<<endl;
			fin.read((char*)this, sizeof(*this));
		}
		fin.close();
	}
}

//function to display menu on screen.
int menu()
{
	int choice;
	cout<<"-------------------------------------------------------------------\n";
	cout<<"			Bakery Management	";
	cout<<"\n\n		Developed By: Zainab Khalid and Atiqa Azeem";
	cout<<"\n-------------------------------------------------------------------\n";
	cout<<"\n1) Insert Data";
	cout<<"\n2) View Data";
	cout<<"\n3) Search Data";
	cout<<"\n4) Delete Data";
	cout<<"\n5) Update Data";

	cout<<"\n6) Sell Item";

	cout<<"\n7) Purchase Item";
	cout<<"\n8) Exit";

	cout<<"\n\nEnter Your Choice :";
	cin>>choice;

	return (choice);
}
//main function.
int main()
{
	//declaration of object.
	Bakery B1;
	char itemname[30];

	int qty;

	while(1)
	{

	    system("cls");
		switch(menu())
		{
			case 1:
				B1.getdata();
				B1.storedata();
				cout<<"\nRecord Inserted.";
				break;

			case 2:
				B1.viewalldata();
				break;

			case 3:
				cout<<"\nEnter Item Name to Search :";
				cin.ignore();
				cin.getline(itemname, 29);
				B1.searchdata(itemname);
				break;

			case 4:
				cout<<"\nEnter Item Name to Delete :";
				cin.ignore();
				cin.getline(itemname, 29);
				B1.deletedata(itemname);
				break;

			case 5:
				cout<<"\nEnter Item Name to Update :";
				cin.ignore();
				cin.getline(itemname, 29);
				B1.updatedata(itemname);
				break;



            case 6:
				cout<<"\nEnter Item Name to Sell :";
				cin.ignore();
				cin.getline(itemname, 29);
				B1.sellitems(itemname);
				break;



            case 7:
				cout<<"\nEnter Item Name to Purchase :";
				cin.ignore();
				cin.getline(itemname, 29);
				B1.purchaseitems(itemname);
				break;

			case 8:
				cout<<"\nThank You for using this Application.";
				cout<<"\nPress any key to Exit.";
				getch();
				exit(0);

			default:
				cout<<"\nInvalid Choice.";
		}
		getch();
	}

	getch();
	return 0;
}

