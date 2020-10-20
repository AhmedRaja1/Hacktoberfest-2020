#ifndef LINK_LIST_FUNCTIONS_H_INCLUDED
#define LINK_LIST_FUNCTIONS_H_INCLUDED

#include <iostream>
#include <conio.h>
#include <windows.h>
#include <fstream>
#include <string.h>
#include <ctime>
#include <cstdlib>

using namespace std;

/*****************************************************************************/
bool check(string) ;
bool check_alphabet(string) ;
void gotoxy(int,int) ;
/*****************************************************************************/

/*****************************************************************************/
struct node_student
{

 string registeration ;
 string name ;
 string Father_name;
 string semester ;
 string cgpa ;
 string phone_Number ;

 node_student * next ;
};
/********************************************************************************/

/*****************************************************************************/
 node_student * START = NULL ;
 node_student * current = NULL ;

/*******************************************************************************/



/*****************************************************************************/
/** Functions definition start from here **/
/*****************************************************************************/
/** 4th Function for getting the length of linked list **/

int length()
{
    int length = 0;

    struct node_student *current;

    for(current = START; current != NULL; current = current->next)
    {

        length++ ;

    }

    return length ;
}
/**********************************************************************************************/

/** 5th for sorting the list of student via registration **/
void Sort ()
{
    int k ;
    string temperary_name , temperary_Father_name , temperary_cgpa ,temperary_registration , temperary_semester ;

    struct node_student *current;
    struct node_student *next;

    int size = length() ;
    k = size ;


    for (int i = 0 ; i < size - 1 ; i++, k-- )
    {
        current = START ;
        next = START->next ;

        for (int j = 1 ; j < k ; j++ )
        {
            if ( current -> registeration > next -> registeration )
            {
                //for name
                temperary_name = current->name ;
                current-> name = next -> name;
                next -> name = temperary_name ;


                //father name
                temperary_Father_name  = current -> Father_name ;
                current-> Father_name = next -> Father_name ;
                next -> Father_name = temperary_Father_name ;

                //for registration
                temperary_registration = current -> registeration ;
                current-> registeration = next -> registeration;
                next -> registeration = temperary_registration ;

                //for cgpa
                temperary_cgpa = current->cgpa ;
                current-> cgpa = next -> cgpa;
                next -> cgpa = temperary_cgpa ;

                //For semester
                temperary_semester = current->semester ;
                current-> semester = next -> semester;
                next -> semester = temperary_semester ;
                }


                current = current->next;
                next = next->next;

            }

        }
    }
/**********************************************************************************************/

/** 6th Function for creating a node **/
node_student * create_node ()
{
    struct node_student * temp ;

   temp = new node_student [sizeof(node_student)] ;

    return (temp) ;
}
/**********************************************************************************************/

/** 7th Function for inserting a student to a node and to store into a file**/
void insert_students ()
{
        struct node_student *temp ,*temp2;
        temp = create_node() ;

        if(temp==NULL)
        {

            cout<<"UFFFSSS!!!!\nNode did not created"<<endl;

        }
        else
        {
           /*********************************************************************/
            ofstream store;
            store.open("Student.txt",ios::out|ios::app);

           //for name
            cout<<"Enter Student name "<<endl;
            cout<<"Name = ";
            cin.ignore();
            getline(cin,temp->name);

            while(check(temp->name)==false)
            {
                gotoxy(7,3);
                cout<<"                                             " ;
                gotoxy(7,3);
                getline(cin,temp->name);
            }

            store<<endl<<"STUDENT NAME :: "<<endl;
            store<<temp->name<<endl;
            cout<<endl;

            //for registration
            cout<<"Enter "<<temp->name<<" Registration Number "<<endl;
            cout<<"Reg# number = ";
            getline(cin,temp->registeration);
            cout<<endl;

            store<<endl<<temp->name<<" Registration Number :: "<<endl;
            store<<temp->registeration<<endl;


            //for father name
            cout<<"Enter "<<temp->name<<" Father name "<<endl;
            cout<<"Father name = " ;
            getline(cin,temp->Father_name);

            while(check(temp->Father_name)==false)
            {

                gotoxy(14,9);
                cout<<"                                             " ;
                gotoxy(14,9);
                getline(cin,temp->Father_name);

            }
            cout<<endl;

            store<<endl<<temp->name<<" Father name :: "<<endl;
            store<<temp->Father_name<<endl;


            //for semester
            cout<<"in which Semester the "<<temp->name<<" is currently Enrolled in !! "<<endl;
            cout<<"Semester number = ";
            getline(cin,temp->semester) ;

            while(check_alphabet(temp->semester) == false)
            {
                gotoxy(18,12);
                cout<<"                                             " ;
                gotoxy(18,12);
                getline(cin,temp->semester) ;
            }
            cout<<endl;

            store<<endl<<"The semester in which"<<temp->name<<" is currently Enrolled in :: "<<endl;
            store<<temp->semester<<endl;

            //for cgpa
            cout<<"Enter "<<temp->name<<" CGPA !! "<<endl;
            cout<<"CGPA = ";
            getline(cin,temp->cgpa) ;

            while(check_alphabet(temp->cgpa) == false)
            {
                gotoxy(7,15);
                cout<<"                                             " ;
                gotoxy(7,15);
                getline(cin,temp->cgpa) ;
            }
            cout<<endl;

            store<<endl<<"Cgpa of "<<temp->name<<" is :: "<<endl;
            store<<temp->cgpa<<endl;


            //for phone number
            cout<<"Enter  "<<temp->name<<" Phone Number !! "<<endl;
            cout<<"Phone Number =  03";
            getline(cin,temp->phone_Number) ;

            while(check_alphabet(temp->phone_Number) == false)
            {
                gotoxy(18,18);
                cout<<"                                             " ;
                gotoxy(18,18);
                getline(cin,temp->phone_Number) ;

            }
            cout<<endl;

            store<<endl<<temp->name<<"phone number is :: "<<endl<<"03";
            store<<temp->phone_Number<<endl;
            store<<"==================================================================="<<endl;
            store<<"==================================================================="<<endl;

           /*********************************************************************************/

           store.close() ;

            temp->next = NULL ;

            if (START == NULL)
            {
                START = temp ;
            }

            else
            {
                temp2 = START ;

                while (temp2->next!=NULL)
                    {
                        temp2 = temp2->next ;

                    }
                temp2->next = temp ;
            }

        }

        Sort() ;

}
/**********************************************************************************************/

/** 8th Function for displaying all nodes data in sort**/
void view_students ()
{
     struct node_student *temp ;
     if(START == NULL)
        {
            system("CLS");
            cout<<"UFFSSSS!!!\nList is Empty "<<endl;
     }
     else
        {

            temp = START ;
            int l;
            l=length() ;
            cout<<"\n\t\t\tThere are total "<<l<<" Student registered right now "<<endl;

            for(int i=1;i<=length();i++)

            //while(temp!=NULL)
            {
                cout<< "Student number "<<i<<" as registered is "<<endl;
                cout<<"Registration number : "<< temp->registeration<<endl;
                cout<<"Name : "<< temp->name<<endl;
                cout<<"Father Name : "<< temp->Father_name<<endl;
                cout<<"Semester : "<< temp->semester<<endl;
                cout<<"CGPA : "<< temp->cgpa<<endl;
                cout<<"phone Number : 03"<< temp->phone_Number<<endl;
                cout<<"=============================================================="<<endl;
               // i++ ;
                temp = temp->next;
             }
                }

}
/**********************************************************************************************/
/**********************************************************************************************/

#endif // LINK_LIST_FUNCTIONS_H_INCLUDED

/**********************************************************************************************/
/**********************************************************************************************/
