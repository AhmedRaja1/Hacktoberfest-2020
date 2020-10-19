
#include <iostream>
#include <conio.h>
#include <string.h>
#include <ctime>
#include <cstdlib>

#include "Link_list_Functions.h" /** Link list header file included **/

using namespace std;


/**************************************************************************/
/**All Functions **/
bool check(string) ; /** for string to do not take numeric value **/
bool check_alphabet(string) ; /** for string to do not take alphabets **/
void gotoxy(int,int) ; /** for cursor position to go to x y coordinates **/
int length() ; /** for length of link list **/
void Sort () ; /** for sorting link list via registration numbers **/
struct node_student * create_node () ; /** for creating a node **/
void insert_students () ; /** for inserting into node **/
void view_students () ; /** for displaying the data of nodes **/
/**********************************************************************************/


int main()
{
/*******************************************************************************/
    /** Welcome screen **/
 Main:
    system("CLS"); /** for clearing the screen **/
    system("COLOR 2F"); /** for giving color to the current screen **/
    cout <<"\n\t\t\t\t\t \"DCSE BATCH 20 DATABASE\"\n\t\t\t\t       ****************************\n\n";
    cout<<"\t     ||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||| "<<endl;
    cout<<"\t     ||\t\t\t\t\t\t\t\t\t\t    || "<<endl;
    cout<<"\t     ||\t\t\t\t\t\t\t\t\t\t    || "<<endl;
    cout<<"\t     ||\t\t\t\t\t\t\t\t\t\t    || "<<endl;
    cout<<"\t     ||  \t\t\tChoose from the following...  \t\t\t    || "<<endl;
    cout<<"\t     ||\t\t\t\t\t\t\t\t\t\t    || "<<endl;
    cout<<"\t     ||  \t\t\t1: ADD A NEW STUDENT   \t\t\t\t    || "<<endl;
    cout<<"\t     ||  \t\t\t2: DELETE A STUDENT RECORD    \t\t\t    || "<<endl;
    cout<<"\t     ||  \t\t\t3: VIEW ALL STUDENT INFORMATION         \t    || "<<endl;
    cout<<"\t     ||  \t\t\t4: SEARCH A PARTICULAR STUDENT  \t\t    || "<<endl;
    cout<<"\t     ||  \t\t\t5: ABOUT                        \t\t    || "<<endl;
    cout<<"\t     ||  \t\t\t6: END OF PROGRAM               \t\t    || "<<endl;
    cout<<"\t     ||\t\t\t\t\t\t\t\t\t\t    || "<<endl;
    cout<<"\t     ||\t\t\t\t\t\t\t\t\t\t    || "<<endl;
    cout<<"\t     ||\t\t\t\t\t\t\t\t\t\t    || "<<endl;
    cout<<"\t     ||\t\t\t\t\t\t\t\t\t\t    || "<<endl;
    cout<<"\t     ||\t\t\t\t\t\t\t\t\t\t    || "<<endl;
    cout<<"\t     ||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||| "<<endl;
    cout <<" \n\n";
/*******************************************************************************************************************/

 int choice,choice2;

khayam:
  cout<<"\t     CHOICE NUMBER = ";
  cin >> choice;
  if(choice <0 || choice >6)
    {
        cout<<"\t     Choose from the menu given "<<endl;
        goto khayam;

        }

        system("CLS");
        if(choice == 1 || choice == 2 || choice == 3 || choice == 4 || choice == 5)
        {
            cout<<"wait for a moment\nRedirecting you to the page "<<endl;
            for (int i=0;i<4;i++)
                {
                    cout<<". ";
                    Sleep(500) ;
                    }
        }
        system("CLS");

/*************************************************************************************************/
/*************************************************************************************************/
/**Start choice 1 **/
if(choice==1)
    {
        system("COLOR 3E");
        cout<<"\t\t\tYou choose for new Registration"<<endl<<endl;

        insert_students() ; /** insert function call here **/

        system("CLS");
        cout<<"Wait for a moment\nThe student is being registering"<<endl;
        for (int i=0;i<4;i++)
        {
            cout<<". ";
            Sleep(500) ;
        }

        system("CLS");
        system("COLOR 4E");
////////////////////////////////////////////////////////////////////////////////////////////////////////////
       cout<<"\t\t\tCONGRATES!!!! \n\t\t\tSTUDENT HAS BEEN REGISTERED SUCCESSFULLY "<<endl<<endl;
       cout<<"\t     ||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||| "<<endl;
       cout<<"\t     ||\t\t\t\t\t\t\t\t\t\t    || "<<endl;
       cout<<"\t     ||\t\t\t\t\t\t\t\t\t\t    || "<<endl;
       cout<<"\t     ||\t\t\t\t\t\t\t\t\t\t    || "<<endl;
       cout<<"\t     ||  \t\t\tChoose from the following...  \t\t\t    || "<<endl;
       cout<<"\t     ||\t\t\t\t\t\t\t\t\t\t    || "<<endl;
       cout<<"\t     ||  \t\t\t1: RETURN TO MAIN MENU   \t\t\t    || "<<endl;
       cout<<"\t     ||  \t\t\t2: EXIT A PROGRAM   \t\t\t\t    || "<<endl;
       cout<<"\t     ||\t\t\t\t\t\t\t\t\t\t    || "<<endl;
       cout<<"\t     ||\t\t\t\t\t\t\t\t\t\t    || "<<endl;
       cout<<"\t     ||\t\t\t\t\t\t\t\t\t\t    || "<<endl;
       cout<<"\t     ||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||| "<<endl;
       cout <<" \n\n";

       student1:
           cout<<"\t     CHOICE NUMBER = ";
           cin >> choice2;
           if(choice2 <0 || choice2 >2)
            {
                cout<<"\t     Choose from the menu given "<<endl;
                goto student1;
                }

            if (choice2 == 1)
            {
                system("CLS");
                cout<<"Wait for a moment\nWe are redirecting you to main page"<<endl;
                for (int i=0;i<4;i++)
                {

                    cout<<". ";
                Sleep(500) ;

                }
                goto Main;
            }

                else
                {
                    goto stop ;
                }
    }
//End of choice 1
/*************************************************************************************************/
/*************************************************************************************************/
/** Delete a student Record **/
/*** delete a link with given registration of the student***/

    if(choice == 2)
        {
            system("COLOR 5B");
            //start from the first link

            struct node_student * current = START;
            struct node_student * previous = NULL;


            string reg;
            cout<<"Enter Student Registration Number you want to delete "<<endl;
            cout<<"Reg# number = ";
            cin.ignore();
            getline(cin,reg);
            cout<<endl;


            //if list is empty

            if(START == NULL)
                {
                    system("CLS");
                    cout<<"UFFFFSSSSSS!!!\nList is Empty returning to main menu"<<endl;
                    goto Main;
                }
                else
                {
                     //navigate through list

                      while(current->registeration != reg)
                      {
                          //if it is last node

                          if(current->next == NULL)
                          {
                               cout<<"UFFFFSSSSSS!!!\nMatch does not found returning to main menu"<<endl;
                               goto Main;

                          }
                          else
                          {
                              //store reference to current link
                              previous = current;
                              //move to next link
                              current = current->next;

                          }
                      }
                 //found a match, update the link

                 if(current == START)
                    {
                        //change first to point to next link
                        START = START->next;
                 }
                 else
                 {
                     //Bypass the  current link

                      previous->next = current->next;

                 }


                }

         system("CLS");
         system("COLOR 4E");

////////////////////////////////////////////////////////////////////////////////////////////////////////////
       cout<<"\t\t\tCONGRATES!!!! \n\t\t\tSTUDENT HAS BEEN deleted SUCCESSFULLY "<<endl<<endl;
       cout<<"\t     ||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||| "<<endl;
       cout<<"\t     ||\t\t\t\t\t\t\t\t\t\t    || "<<endl;
       cout<<"\t     ||\t\t\t\t\t\t\t\t\t\t    || "<<endl;
       cout<<"\t     ||\t\t\t\t\t\t\t\t\t\t    || "<<endl;
       cout<<"\t     ||  \t\t\tChoose from the following...  \t\t\t    || "<<endl;
       cout<<"\t     ||\t\t\t\t\t\t\t\t\t\t    || "<<endl;
       cout<<"\t     ||  \t\t\t1: RETURN TO MAIN MENU   \t\t\t    || "<<endl;
       cout<<"\t     ||  \t\t\t2: EXIT A PROGRAM   \t\t\t\t    || "<<endl;
       cout<<"\t     ||\t\t\t\t\t\t\t\t\t\t    || "<<endl;
       cout<<"\t     ||\t\t\t\t\t\t\t\t\t\t    || "<<endl;
       cout<<"\t     ||\t\t\t\t\t\t\t\t\t\t    || "<<endl;
       cout<<"\t     ||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||| "<<endl;
       cout <<" \n\n";

       student2:
           cout<<"\t     CHOICE NUMBER = ";
           cin >> choice2;
           if(choice2 <0 || choice2 >2)
            {
                cout<<"\t     Choose from the menu given "<<endl;
                goto student2;
                }

            if (choice2 == 1)
            {
                system("CLS");
                cout<<"Wait for a moment\nWe are redirecting you to main page"<<endl;
                for (int i=0;i<4;i++)
                {
                    cout<<". ";
                    Sleep(500) ;
                }
                goto Main;
                }

                else
                {
                    goto stop ;
                }
    }


//End of choice 2
/*************************************************************************************************/
/*************************************************************************************************/
        if(choice==3)
            {
                system("COLOR 5D");
                /** Displaying all student Record **/

               view_students();

       char key ;
       cout<<"\n\t\t\tEnter Any key to go to next menu "<<endl;
       cout<<"\t\t\tKey :: " ;
       cin>>key;
        while(key)
        {
            cout<<"Wait for a moment\nWe are redirecting you to main page"<<endl;
            for (int i=0;i<4;i++)
            {
                cout<<". ";
                Sleep(500) ;

            }

        system("CLS");
        system("COLOR 4E");
////////////////////////////////////////////////////////////////////////////////////////////////////////////
       cout<<"\t     ||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||| "<<endl;
       cout<<"\t     ||\t\t\t\t\t\t\t\t\t\t    || "<<endl;
       cout<<"\t     ||\t\t\t\t\t\t\t\t\t\t    || "<<endl;
       cout<<"\t     ||\t\t\t\t\t\t\t\t\t\t    || "<<endl;
       cout<<"\t     ||  \t\t\tChoose from the following...  \t\t\t    || "<<endl;
       cout<<"\t     ||\t\t\t\t\t\t\t\t\t\t    || "<<endl;
       cout<<"\t     ||  \t\t\t1: RETURN TO MAIN MENU   \t\t\t    || "<<endl;
       cout<<"\t     ||  \t\t\t2: EXIT A PROGRAM   \t\t\t\t    || "<<endl;
       cout<<"\t     ||\t\t\t\t\t\t\t\t\t\t    || "<<endl;
       cout<<"\t     ||\t\t\t\t\t\t\t\t\t\t    || "<<endl;
       cout<<"\t     ||\t\t\t\t\t\t\t\t\t\t    || "<<endl;
       cout<<"\t     ||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||| "<<endl;
       cout <<" \n\n";

       student3:
           cout<<"\t     CHOICE NUMBER = ";
           cin >> choice2;
           if(choice2 <0 || choice2 >2)
            {
                cout<<"\t     Choose from the menu given "<<endl;
                goto student3;
                }

            if (choice2 == 1)
            {
                system("CLS");
                cout<<"Wait for a moment\nWe are redirecting you to main page"<<endl;
                for (int i=0;i<4;i++)
                {
                    cout<<". ";
                    Sleep(500) ;

                }


                goto Main;
            }

                else
                {
                    goto stop ;
                }
        }
    }


//end of choice 3
/*************************************************************************************************/
/*************************************************************************************************/
            if(choice==4)
                {
                    struct node_student * current1 = START;
                    struct node_student * previous1 = NULL;

                    string reg;
                    cout<<"Enter Student Registration Number you want to search "<<endl;
                    cout<<"Reg# number = ";
                    cin.ignore();
                    getline(cin,reg);
                    cout<<endl;


                    if(START == NULL)
                    {
                        system("CLS");
                        cout<<"UFFFFSSSSSS!!!\nList is Empty returning to main menu"<<endl;
                        char key ;
                        cout<<"\n\t\t\tEnter Any key to go to next menu "<<endl;
                        cout<<"\t\t\tKey :: " ;
                        cin>>key;
                        while(key)
                        {
                            goto Main;
                        }

                    }
                    else
                    {
                         while(current1->registeration != reg)
                         {
                             if(current1->next == NULL)
                             {
                                 cout<<"UFFFFSSSSSS!!!\nMatch does not found returning to main menu"<<endl;
                                 goto Main;
                             }
                             else
                             {
                                 //store reference to current link
                                 previous1 = current1;
                                 //move to next link
                                 current1 = current1->next;

                             }

                         }

                        // cout<< "Student number "<<i<<" as registered is "<<endl;
                         cout<<"Registration number : "<< current1->registeration<<endl;
                         cout<<"Name : "<< current1->name<<endl;
                         cout<<"Father Name : "<< current1->Father_name<<endl;
                         cout<<"Semester : "<< current1->semester<<endl;
                         cout<<"CGPA : "<< current1->cgpa<<endl;
                         cout<<"phone Number : "<< current1->phone_Number<<endl;
                         cout<<"=============================================================="<<endl;



                    }
////////////////////////////////////////////////////////////////////////////////////////////////////////////
       char key ;
       cout<<"\n\t\t\tEnter Any key to go to next menu "<<endl;
       cout<<"\t\t\tKey :: " ;
       cin>>key;
        while(key)
        {
       system("CLS");
       system("COLOR 4E");
      // cout<<"\t\t\tCONGRATES!!!! \n\t\t\tSTUDENT HAS BEEN REGISTERED SUCCESSFULLY "<<endl<<endl;
       cout<<"\t     ||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||| "<<endl;
       cout<<"\t     ||\t\t\t\t\t\t\t\t\t\t    || "<<endl;
       cout<<"\t     ||\t\t\t\t\t\t\t\t\t\t    || "<<endl;
       cout<<"\t     ||\t\t\t\t\t\t\t\t\t\t    || "<<endl;
       cout<<"\t     ||  \t\t\tChoose from the following...  \t\t\t    || "<<endl;
       cout<<"\t     ||\t\t\t\t\t\t\t\t\t\t    || "<<endl;
       cout<<"\t     ||  \t\t\t1: RETURN TO MAIN MENU   \t\t\t    || "<<endl;
       cout<<"\t     ||  \t\t\t2: EXIT A PROGRAM   \t\t\t\t    || "<<endl;
       cout<<"\t     ||\t\t\t\t\t\t\t\t\t\t    || "<<endl;
       cout<<"\t     ||\t\t\t\t\t\t\t\t\t\t    || "<<endl;
       cout<<"\t     ||\t\t\t\t\t\t\t\t\t\t    || "<<endl;
       cout<<"\t     ||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||| "<<endl;
       cout <<" \n\n";

       student4:
           cout<<"\t     CHOICE NUMBER = ";
           cin >> choice2;
           if(choice2 <0 || choice2 >2)
            {
                cout<<"\t     Choose from the menu given "<<endl;
                goto student4;
                }

            if (choice2 == 1)
            {
                system("CLS");
                cout<<"Wait for a moment\nWe are redirecting you to main page"<<endl;
                for (int i=0;i<4;i++)

                {
                    cout<<". ";
                    Sleep(500) ;

                }

                goto Main;
                }

                else
                {
                    goto stop ;
}
       }
    }


//end of choice 4
/*************************************************************************************************/

if(choice==5)
{
    system("COLOR 3B");
    cout<<"\t\tThis is our Data structure and Algorithm (DSA) final project "<<endl<<endl<<endl;
    cout<<"\t\t\tThis project was prepared by :: "<<endl<<endl;
    cout<<"\t\t\tSyeda Fatima   REG (1640)"<<endl;
    cout<<"\t\t\tabdul hadi (1622) "<<endl;
    cout<<"\t\t\tirum hassan   REG (1757)"<<endl;
    cout<<"\t\t\tBATCH 20"<<endl;
    cout<<"\n\n\t\t\tDepartment of computer System  Engineering"<<endl;
    cout<<"\t\t\tUET , PESHAWAR"<<endl<<endl<<endl;



    char key ;
    cout<<"\n\t\t\tEnter Any key to go to next menu "<<endl;
    cout<<"\t\t\tKey :: " ;
    cin>>key;
    while(key)
    {
        system("CLS");
        system("COLOR 4E");

        cout<<"\t     ||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||| "<<endl;
        cout<<"\t     ||\t\t\t\t\t\t\t\t\t\t    || "<<endl;
        cout<<"\t     ||\t\t\t\t\t\t\t\t\t\t    || "<<endl;
        cout<<"\t     ||\t\t\t\t\t\t\t\t\t\t    || "<<endl;
        cout<<"\t     ||  \t\t\tChoose from the following...  \t\t\t    || "<<endl;
        cout<<"\t     ||\t\t\t\t\t\t\t\t\t\t    || "<<endl;
        cout<<"\t     ||  \t\t\t1: RETURN TO MAIN MENU   \t\t\t    || "<<endl;
        cout<<"\t     ||  \t\t\t2: EXIT A PROGRAM   \t\t\t\t    || "<<endl;
        cout<<"\t     ||\t\t\t\t\t\t\t\t\t\t    || "<<endl;
        cout<<"\t     ||\t\t\t\t\t\t\t\t\t\t    || "<<endl;
        cout<<"\t     ||\t\t\t\t\t\t\t\t\t\t    || "<<endl;
        cout<<"\t     ||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||| "<<endl;
        cout <<" \n\n";

       student5:
           cout<<"\t     CHOICE NUMBER = ";
           cin >> choice2;
           if(choice2 <0 || choice2 >2)
            {
                cout<<"\t     Choose from the menu given "<<endl;
                goto student5;
            }
            if (choice2 == 1)
            {
                system("CLS");
                cout<<"Wait for a moment\nWe are redirecting you to main page"<<endl;
                for (int i=0;i<4;i++)
                {
                    cout<<". ";
                   Sleep(500) ;

                }
                goto Main;
            }

            else
                {
                    goto stop ;

                    }
    }

}
/*************************************************************************************************/
/*************************************************************************************************/

stop:
    getch() ;
    return 0;

}
/**********************************************************************************************/
/** Functions definition start from here **/
/**********************************************************************************************/

/** 1st Function to check for a numbers**/
bool check(string a)
{
	int i=0;
	while(a[i]!=0)
	{
		if(a[i]>=48 && a[i]<=57)
		{
			return false;
		}
		else
		{
			i++;
		}
	}
	return true;
}
/**********************************************************************************************/

/** 2nd Function to check for a strings**/
bool check_alphabet(string a)
{
	int i=0;
	while(a[i]!=0)
	{
		if(a[i]>=65 && a[i]<=122)
		{
			return false;
		}
		else
		{
			i++;
		}
	}
	return true;
}
/**********************************************************************************************/

/** 3rd Function for setting the position cursor**/
void gotoxy(int x, int y)
{
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
/**********************************************************************************************/
/**********************************************************************************************/
/**********************************************************************************************/

