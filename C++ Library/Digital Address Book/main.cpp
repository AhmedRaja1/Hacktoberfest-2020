#include <iostream>
#include <string.h>
#include<stdio.h>
#include<stdlib.h>
#include<fstream>

using namespace std;

typedef struct Node
{
   char name[20],email[30],address[50];
   int ncode, number;
   Node *next;

}Contact;

class AddressBook
{
private:
    Contact *head=NULL;
public:
    void Add(Contact *c)
    {
        Contact *temp;
        temp= new Contact;
        strcpy(temp->name,c->name);
        strcpy(temp->email,c->email);
        strcpy(temp->address,c->address);
        temp->ncode=c->ncode;
        temp->number= c->number;
        if(head==NULL)
        {
            head=temp;
            head->next=NULL;
        }
        else
        {
            Contact *i;
            i=head;
            while(i->next!=NULL)
                i=i->next;
            i->next=temp;
            i=i->next;
            i->next=NULL;
        }
    }
    void Delete(char *name)
    {
       if(head==NULL)
       {
           cout<<"Contact does not exist.\n";
           return ;
       }
       Contact *temp,*i;
       i=head;
       int Count=0;
       if(!strcmp(i->name,name))
       {
           head=i->next;
           delete i;
       }
       else
       {
       while(i!=NULL)
       {
           if(!strcmp(i->next->name,name))
           {
               temp=i->next;
               i->next=i->next->next;
               delete temp;
               i=i->next;
               Count++;
               continue;
           }
           i=i->next;
       }
       if(!Count)
            cout<<"Contact does not exist.\n";
       else
            cout<<"Contact deleted.\n";
       }

    }
    void Search(char *name)
    {

       if(head==NULL)
       {
           cout<<"Contact does not exist.\n";
           return ;
       }
       Contact *i;
       i=head;
       int Count=0;
       while(i!=NULL)
       {
           if(!strcmp(i->name,name))
           {
               cout<<"\t\t\t===================================================================\n";
               cout<<"\t\t\tName: "<<i->name<<endl;
               cout<<"\t\t\tNumber: 0"<<i->ncode<<"-"<<i->number<<endl;
               cout<<"\t\t\tEmail: "<<i->email<<endl;
               cout<<"\t\t\tAddress: "<<i->address<<endl;
               cout<<"\t\t\t===================================================================\n";
               Count++;
           }
           i=i->next;
       }
       if(!Count)
            cout<<"Contact does not exist.\n";
    }
    void Display()
    {
        if(head==NULL)
        {
            cout<<"No Contacts Available.\n";
            return ;
        }
        Contact *temp;
        temp=head;

        while(temp!=NULL)
        {
            cout<<"\t\t\t===================================================================\n";
            cout<<"\t\t\tName: "<<temp->name<<endl;
            cout<<"\t\t\tNumber: 0"<<temp->ncode<<"-"<<temp->number<<endl;
            cout<<"\t\t\tEmail: "<<temp->email<<endl;
            cout<<"\t\t\tAddress: "<<temp->address<<endl;
            cout<<"\t\t\t===================================================================\n\n";
            temp=temp->next;
        }
    }
    void TextFile(ofstream &myfile)
    {
        if(head==NULL)
        {
            myfile<<"No Contacts Available.\n";
            return ;
        }
        Contact *temp;
        temp=head;

        while(temp!=NULL)
        {
            myfile<<"\t\t\t===================================================================\n";
            myfile<<"\t\t\tName: "<<temp->name<<endl;
            myfile<<"\t\t\tNumber: 0"<<temp->ncode<<"-"<<temp->number<<endl;
            myfile<<"\t\t\tEmail: "<<temp->email<<endl;
            myfile<<"\t\t\tAddress: "<<temp->address<<endl;
            myfile<<"\t\t\t===================================================================\n\n";
            temp=temp->next;
        }
    }
    bool IsEmpty()
    {
        if(head==NULL)
            return 1;
        return 0;
    }

};

class HashTable
{
    int Max=10;
    AddressBook *table= new AddressBook[Max];
public:
    int HashFunction(char *name)
    {
        int len= strlen(name);
        int Prime=3,sum=0;
        for(int i=0;i<len;i++)
            sum=(sum*Prime)+name[i];
        return sum%Max;
    }
    void InsertContact()
    {
        Contact c1;
        cout<<"\t\t\tEnter Name: ";
        scanf(" %[^\n]s",c1.name);
        cout<<"\t\t\tEnter Network Code: (0)";
        cin>>c1.ncode;
        cout<<"\t\t\tEnter Number: ";
        cin>>c1.number;
        cout<<"\t\t\tEnter Email: ";
        scanf(" %[^\n]s",c1.email);
        cout<<"\t\t\tEnter Address: ";
        scanf(" %[^\n]s",c1.address);
        int index=HashFunction(c1.name);
        table[index].Add(&c1);
    }
    void DeleteContact()
    {
        Contact c;
        cout<<"\t\t\tEnter the name of the Contact you want to Delete: ";
        scanf(" %[^\n]s",c.name);
        int index=HashFunction(c.name);
        table[index].Delete(c.name);
    }
    void SearchContact()
    {
        Contact c;
        cout<<"\t\t\tEnter the name of the Contact you want to Search: ";
        scanf(" %[^\n]s",c.name);
        int index=HashFunction(c.name);
        table[index].Search(c.name);
    }
    void DisplayContacts()
    {
        for(int i=0;i<Max;i++)
        {
            if(table[i].IsEmpty())
                continue;
            table[i].Display();
        }
    }
    void GenerateTextFile()
    {
        ofstream myfile("Contacts.txt");
        for(int i=0;i<Max;i++)
        {
            if(table[i].IsEmpty())
                continue;
            table[i].TextFile(myfile);
        }
        myfile.close();
        cout<<"\t\t\tFile Generated.";
    }
};



int main()
{
    HashTable AB;
    int Choice;
    do
    {
        cout<<endl<<endl;
        cout<<"\t\t\t\t\tMain Menu\n";
        cout<<"\t\t\t===================================================================\n";
        cout<<"\t\t\t#  1) Add a New Contact.                                          #\n";
        cout<<"\t\t\t#  2) Search a Contact.                                           #\n";
        cout<<"\t\t\t#  3) Delete a Contact.                                           #\n";
        cout<<"\t\t\t#  4) Display all Contacts.                                       #\n";
        cout<<"\t\t\t#  5) Generate a text file of Contacts.                           #\n";
        cout<<"\t\t\t#  6) Exit.                                                       #\n";
        cout<<"\t\t\t===================================================================\n";
        cout<<"\t\t\tEnter Choice: ";
        cin>>Choice;

        switch(Choice)
        {
        case 1:
            AB.InsertContact();
            cout<<"\t\t\tContact Added.\n";
            cout<<"\t\t\t";
            system("PAUSE");
            system("CLS");
            break;
        case 2:
            AB.SearchContact();
            cout<<"\t\t\t";
            system("PAUSE");
            system("CLS");
            break;
        case 3:
            AB.DeleteContact();
            cout<<"\t\t\t";
            system("PAUSE");
            system("CLS");
            break;
        case 4:
            AB.DisplayContacts();
            cout<<"\t\t\t";
            system("PAUSE");
            system("CLS");
            break;
        case 5:
            AB.GenerateTextFile();
            cout<<"\t\t\t";
            system("PAUSE");
            system("CLS");
            break;
        case 6:
            return 0;
            break;
        default:
            cout<<"\t\t\tInvalid Choice Entered.\n";
            cout<<"\t\t\t";
            system("PAUSE");
            system("CLS");
        }
    }while(1);
    return 0;
}
