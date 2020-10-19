#include <iostream>
#include <fstream>
#include <stdlib.h>
#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<bits/stdc++.h>

using namespace std;
//File Stream Object
fstream riderData;
//To be used to retrieve data from file exported using file stream
string s[1000];
//Structure Definition
typedef struct Rider{
    //Attributes
    string name;
    string cnic;
    string number;
    string fName;
    string email;
    string address;
    //Using Double Linked List
    //Next Pointer
    Rider *fLinked;
    //Previous Pointer
    Rider *pLinked;
    //Default Constructor to Initialize Next and Previous Pointer to NULL
    rider(){
        fLinked = NULL;
        pLinked= NULL;
    }
}rider;
//Class Declaration to perform Different Operations
class riderRecords{
// Head Node, and Temp Nodes Declaration
    rider *startList, *current, *temp;
public:
    //Constructor for initializing the Head Node to NULL
    riderRecords(){
        startList = NULL;
    }
    //Function to create a node/Rider Data
    void create_file(string name,string cnic,string number,string fName,string email,string address){
            //Storing the name given by user on run time and transforming it to lowercase in order to make it suitable for Searching
            string newData = name;
            transform(newData.begin(), newData.end(), newData.begin(), ::tolower);
            //To check if the head node is null
            if(startList==NULL){
                    //Dynamic Memory Allocation
                startList = new rider;
            //Assigning Values to the attributes
                startList->fLinked = NULL;
                startList->pLinked = NULL;
                startList->name = newData;
                startList->cnic = cnic;
                startList->number = number;
                startList->fName = fName;
                startList->email = email;
                startList->address = address;
                //Exporting to txt file
                riderData.open ("ridersData.txt",ios::out | ios::app);
                riderData<<"Name: "<<startList->name<<" CNIC: "<<startList->cnic<<" Number: "<<startList->number<<" FatherName: "<<startList->fName<<" Email: "<<startList->email<<" Address: "<<startList->address<<endl;
                riderData.close();
                //Exporting to CSV File
                riderData.open ("ridersData.csv",ios::out | ios::app);
                //riderData<<"Name,CNIC,Number,Father Name,Email,Address"<<endl;
                riderData<<startList->name<<","<<startList->cnic<<","<<startList->number<<","<<startList->fName<<","<<startList->email<<","<<startList->address<<endl;
                riderData.close();
            }
        //Creating new node
        else{
            current=startList;
             temp = new rider;
            //Traversing through entire list un-till the next pointer is null
            while(current->fLinked!=NULL){
                //Moving on to the next Node
                current=current->fLinked;
            //Storing the current node in the temp previous one
                temp->pLinked=current;
            }
            //Assigning values
                temp->name = newData;
                temp->cnic = cnic;
                temp->number = number;
                temp->fName = fName;
                temp->email = email;
                temp->address = address;
                //Keeping the temp next node NULL
                temp->fLinked = NULL;
                //Storing the last node address in the current one
                current->fLinked = temp;
                //Exporting to txt file
                riderData.open ("ridersData.txt",ios::out | ios::app);
                riderData<<"Name: "<<temp->name<<" CNIC: "<<temp->cnic<<" Number: "<<temp->number<<" FatherName: "<<temp->fName<<" Email: "<<temp->email<<" Address: "<<temp->address<<endl;
                riderData.close();
                //Exporting to CSV File
                riderData.open ("ridersData.csv",ios::out | ios::app);
                riderData<<temp->name<<","<<temp->cnic<<","<<temp->number<<","<<temp->fName<<","<<temp->email<<","<<temp->address<<endl;
                riderData.close();
        }
    }
    void print_Records(){
        //A function to show recent elements added to the list
        //Storing the head node in the current pointer
        current = startList;
        //A variable to store the number of riders
        int rNo;
        //Traversing through the untill the last node next pointer is null
        for(rNo=1;current->fLinked!=NULL;rNo++){
            //Displaying the data
            cout<<"Rider: "<<rNo<<" ->" <<"Name: "<<current->name<<" CNIC: "<<current->cnic<<" Number: "<<current->number<<" FatherName: "<<current->fName<<" Email: "<<current->email<<" Address: "<<current->address<<endl;
            current=current->fLinked;
        }
        //Displaying the Last Node Data
        cout<<"Rider: "<<rNo<<" ->" <<"Name: "<<current->name<<" CNIC: "<<current->cnic<<" Number: "<<current->number<<" FatherName: "<<current->fName<<" Email: "<<current->email<<" Address: "<<current->address<<endl;

    }
void showRecords(){
//A function to show the data from the file to display
riderData.open("ridersData.txt",ios::in);
int i=0;
//Showing data till the end of the file
while(!(riderData.eof()))
{
    riderData>>s[i];
    cout<<s[i]<<"\t";
    i++;
    cout<<"\n";
}
    riderData.close();
}
bool searchName(string userName){
    // A function to search the rider records by name, which returns boolean to specify whether name is found or not
    // Storing the name from user on runtime in a separate variable to be transform to lowercase to smoothen the searching procedure
    string newData = userName;
    // Storing the head node in the current ptr
    current = startList;
    // Transforming the inputted string from user to lowercase to smoothen the search process
    transform(newData.begin(), newData.end(), newData.begin(), ::tolower);
// Moving till the last node
    while(current!=NULL){
            // If the name entered by the user matches the rider
        if(newData==current->name)
        {

            cout<<"Name Found\n";
            cout<<"Rider Details are Below\n";
            cout<<"\n\nName: \t"<<current->name;
            cout<<"\nCNIC: \t"<<current->cnic;
            cout<<"\nNumber: \t"<<current->number;
            cout<<"\nFather Name: \t"<<current->fName;
            cout<<"\nEmail: \t"<<current->email;
            cout<<"\nAddress: \t"<<current->address;
            return true;
        }
        // If not found return false
        else
            return false;
            // Move to the next node
        current=current->fLinked;
    }
}
bool searchCNIC(string userCNIC){
// A function to search by CNIC
    current = startList;
    // Moving node by node
     while(current!=NULL){
        if(userCNIC==current->cnic)
        {
            cout<<"Name Found using CNIC\n";
            cout<<"Rider Details are Below\n";
            cout<<"\n\nName: \t"<<current->name;
            cout<<"\nCNIC: \t"<<current->cnic;
            cout<<"\nNumber: \t"<<current->number;
            cout<<"\nFather Name: \t"<<current->fName;
            cout<<"\nEmail: \t"<<current->email;
            cout<<"\nAddress: \t"<<current->address;
            return true;
        }
        else
            return false;
        current=current->fLinked;
    }


    }
    void deleteRider(string riderName){
// Function to delete a rider info from the list
        int r = 0;
   string newData = riderName;
    // Storing the head node in the current ptr
    current = startList;
    // Transforming the inputted string from user to lowercase to smoothen the search process
    transform(newData.begin(), newData.end(), newData.begin(), ::tolower);
        // Moving node by node
        while(current!=NULL)
    {
        if(newData==current->name){
            r=1;
            break;
        }
        else
           {
            r=2;
           }

        current=current->fLinked;
    }
    // Checking if the user name is found, and the current node is not the head node plus the next node to which current node is pointing not null
    if(r==1 && current!= startList && current->fLinked!=NULL){
        // Setting the previous node next pointer to the current next pointer
        current->pLinked->fLinked=current->fLinked;
        // Setting the next nodes previous pointer to the current previous pointer
        current->fLinked->pLinked=current->pLinked;
        delete(current);
        cout<<"Rider Info Deleted Successfully\n\n";
    }
    if(current==startList){
            // If the node to be deleted is head node
        // Then store the next node in the current node
        startList=startList->fLinked;
        // and set the previous of the new head node to null
        startList->pLinked=NULL;
        // free the memory
        delete(current);
        cout<<"Rider Info Deleted Successfully\n\n";
    }
    if(current->fLinked==NULL){
            // if the node to be deleted is last node
            // Then set the previous node next ptr to null
        current->pLinked->fLinked=NULL;
    // Set the current nodes previous ptr to Null
        current->pLinked=NULL;
        // free the memory
        delete(current);
        cout<<"Rider Info Deleted Successfully\n\n";
    }
      // if rider name is not in the list
      if(r==2){
        cout<<"YOUR ENTERED NAME IS NOT IN THE LIST...\n";
      }
}
void updateProfile(string userName){

    string nam,cni,num,fNam,eAdd,Add;
    int c;
    // Function to update the profiles of recent added riders
    current=startList;
    while(current!=NULL){
            // using simple combo of Do While and switch case to create a menu
        if(current->name==userName){
            do{
                cout<<"Menu\n1.Name Update\n2.CNIC Update\n3.Number Update\nFather Name Update\nEmail Address Update\nAddress Update\n";
                cout<<"What do you want to update?\n";
                cin>>c;

                switch(c){

                    case 1:
                    cout<<"Enter the new name\n";
                    cin>>current->name;
                    break;
                    case 2:
                    cout<<"Enter the new cnic\n";
                    cin>>current->cnic;
                    break;
                    case 3:
                    cout<<"Enter the new number\n";
                    cin>>current->number;
                    break;
                    case 4:
                    cout<<"Enter the new Father Name\n";
                    cin>>current->fName;
                    break;
                    case 5:
                    cout<<"Enter the new email address\n";
                    cin>>current->email;
                    break;
                    case 6:
                    cout<<"Enter the new address\n";
                    cin>>current->address;
                    break;
                }

            }
             while(c>0&&c<7);

        }
        current=current->fLinked;
    }



}

};

int main()
{
    // Main Rider Record Function
    riderRecords controller;
    //Temporary Values Added
    controller.create_file("Raja_Ahmed","1730152486","0300567432","Raja","ahmedrajay@gmail.com","Abottabad");
    controller.create_file("Ashley_Alex","1730158786","0310567432","Jacob","alexjacob@gmail.com","GulbergPeshawar");
    controller.create_file("Abdul_Mohiz","3151252486","0336567432","Khalid_Jadoon","abdulMohiz@gmail.com","Naway_Shahar_Abottabad");
    controller.create_file("Ali_Khan","1730152123","0320567432","Qayyum_Khan","alikhan245@gmail.com","Chitral");

    int ch; // Variable to store the check users decision
    // Variable that stores the result of search
    bool res;
    string nam,cni,num,fNam,eAdd,Add,del,sc,sn,up; // String variables to store the input by user on runtime
    cout<<"\n\t===================================================================\n\n";
    cout<<"\t\t\t Cab Rider Record System\n";
    cout<<"\n\t===================================================================\n\n";
    cout<<"\n\Op-1 Make a new rider profile\n";
    cout<<"\n\Op-2 Update rider profile\n";
    cout<<"\n\Op-3 Delete rider profile\n";
    cout<<"\n\Op-4 Search a rider by Name\n";
    cout<<"\n\Op-5 Search a rider by CNIC\n";
    cout<<"\n\Op-6 Display Full Records\n";
    cout<<"\n\Op-7 Display Recent Added Records\n";

// Do While to repeat the menu
   do{
    cout<<"\n\nWelcome To The System\n";
    cout<<"\n1: Add a new profile\n";
    cout<<"\n2: Update profile\n";
    cout<<"\n3: Delete profile\n";
    cout<<"\n4: Search by Name\n";
    cout<<"\n5: Search by CNIC\n";
    cout<<"\n6: Show full Records\n";
    cout<<"\n7: Show Recent Added List\n";
    cout<<"\n8: Exit\n";

    cin>>ch;
    system("CLS");
    switch(ch){
    case 1:

     cout<<"\n\t============================Add New Profile============================\n\n";
    cout<<"Enter Book Data to insert in the profile"<<endl;

    cout<<"\nEnter Name \t";
    cin>>nam;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout<<"\nEnter CNIC \t";
    cin>>cni;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout<<"Enter Number \t";
    cin>>num;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout<<"Enter Father Name \t";
    cin>>fNam;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout<<"Enter Email Address \t";
    cin>>eAdd;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout<<"Enter Residential Address \t";
    cin>>Add;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    controller.create_file(nam,cni,num,fNam,eAdd,Add);
    cout<<"Rider "<<nam<<" has been Saved in the Records "<<endl;
    break;
    system("CLS");
    case 2:
        cout<<"\n\t===============Update Rider Data=====================\n\n";
        cout<<"Enter the Name of the Rider whose info you want to update\n";
        cin>>up;
        controller.updateProfile(up);
        break;
    system("CLS");
    case 3:
        cout<<"\n\t===============Delete Rider=====================\n\n";
        cout<<"Enter the name of the rider you wish to delete\n";
        cin>>del;
        controller.deleteRider(del);
        break;
    system("CLS");
    case 4:
        cout<<"\n\t===============Search Rider by Name=====================\n\n";
        cout<<"Enter the name of the rider you want to look for\n";
        cin>>sn;
        res=controller.searchName(sn);
        if (res==true)
        cout<<"Rider Successfully Deleted\n";
        else
        cout<<"System Error-Operation Not Possible at the moment\n";
        break;
    system("CLS");
        case 5:
        cout<<"\n\t===============Search Rider by CNIC=====================\n\n";
        cout<<"Enter the CNIC of the rider you want to look fot\n";
        cin>>sc;
        res=controller.searchCNIC(sc);
        if (res==true)
        cout<<"Rider Successfully Deleted\n";
        else
        cout<<"System Error-Operation Not Possible at the moment\n";
        break;
    system("CLS");
        case 6:
            cout<<"\n\t===============Full Records=====================\n\n";
            controller.showRecords();
            break;
    system("CLS");
        case 7:
            cout<<"\n\t===============Recent Records=====================\n\n";
            controller.print_Records();
            break;
        system("CLS");
    }


   }

while(ch>0 && ch<8);
 cout<<"\nEnd of Program"<<endl;

      return 0;
}
