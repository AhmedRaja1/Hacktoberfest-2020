
#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<conio.h>

using namespace std;

struct node
{
    //int info;
   char name[20];
 char Department[20];
 int rollNo;
 char section;
 struct  node *next; //
}*pointer;//


class circularList
{
    public:
        void create_node();
        void add_begin();
        void add_after(int position);
        void delete_element(int rollNum);
        void search_element(int rollNum);
        void display_list();
        void update();
        void sort();
        circularList()
        {
            pointer = NULL;
        }
};


int main()
{

    char x,y;
    cout<<"\t\t\t\t ********************************* \t\t\t"<<endl;
    cout<<"\t\t\t\t ****STUDENT MANAGEMENT SYSTEM**** \t\t\t"<<endl;
    cout<<"\t\t\t\t   By Muhammad Daniyal Khan \t\t\t"<<endl;
    cout<<"\n\n\t\t\t\tPress Any Key To Continue . . . .";
    int choice, element, position,roll;
    circularList cl;
    getch();
    do
    {
        cout<<"\n1.Create Node"<<endl;
        cout<<"2.Add at beginning"<<endl;
        cout<<"3.Add after"<<endl;
        cout<<"4.Delete"<<endl;
        cout<<"5.Search"<<endl;
        cout<<"6.Display"<<endl;
        cout<<"7.Update"<<endl;
        cout<<"8.Sort"<<endl;
        cout<<"9.Quit"<<endl;
        cout<<"Enter your choice : ";
        cin>>choice;
        switch(choice)
        {
        case 1:
            fflush(stdin);
            cl.create_node();
            cout<<"Do you want another "<<endl;
            cin>>y;
            break;
        case 2:

            fflush(stdin);
            cl.add_begin();
            cout<<"Do you want another "<<endl;
            cin>>y;
            break;
        case 3:
            cout<<"Insert position for data entry: ";
            cin>>position;
            fflush(stdin);
            cl.add_after(position);
            cout<<"Do you want another "<<endl;
            cin>>y;
            break;
        case 4:
            if (pointer == NULL)
            {
                cout<<"List is empty, nothing to delete"<<endl;
                break;
            }
            cout<<"Enter the roll number for deletion: ";
            cin>>roll;
            cl.delete_element(roll);
            cout<<endl;
            break;
        case 5:
            if (pointer == NULL)
            {
                cout<<"List Empty!! Can't search"<<endl;
                break;
            }
            cout<<"Enter the element to be searched: ";
            cin>>roll;
            cl.search_element(roll);
            cout<<endl;
            break;
        case 6:
            cl.display_list();
            break;
        case 7:
            cl.update();
            break;
        case 8:
            cl.sort();
            break;
        case 9:
            exit(1);
            break;
        default:
            cout<<"Wrong choice"<<endl;
        }
    }
    while(y=='y'||y=='Y');
    return 0;
}


 // Create Circular Link List

void circularList::create_node()
{
    struct node *p;
    p = new(struct node);
    cout<<"Enter name of student:"<<endl;
    gets(p->name);
    fflush(stdin);
    cout<<"Enter Department of student:"<<endl;
    gets(p->Department);
    fflush(stdin);
    cout<<"Enter Roll Number of student:"<<endl;
    cin>>p->rollNo;
    fflush(stdin);
    cout<<"Enter section of student:"<<endl;
    cin>>p->section;
    fflush(stdin);
    if (pointer == NULL)
    {
        pointer = p;
        p->next = pointer;
    }
    else
    {
        p->next = pointer->next;
        pointer->next = p;
        pointer = p;
    }
}


 // Insertion of element at beginning

void circularList::add_begin()
{
    if (pointer == NULL)
    {
        cout<<"First Create the list."<<endl;
        return;
    }
    struct node *p;
    p = new(struct node);
    cout<<"Enter name of student:"<<endl;
    gets(p->name);
    fflush(stdin);
    cout<<"Enter Department of student:"<<endl;
    gets(p->Department);
    fflush(stdin);
    cout<<"Enter Roll Number of student:"<<endl;
    cin>>p->rollNo;
    fflush(stdin);
    cout<<"Enter section of student:"<<endl;
    cin>>p->section;
    fflush(stdin);


    p->next = pointer->next;
    pointer->next = p;
}


 // Insertion of element at a particular place

void circularList::add_after( int pos)
{
    if (pointer == NULL)
    {
        cout<<"First Create the list."<<endl;
        return;
    }
    struct node *p, *s;
    s = pointer->next;
    for (int i = 0;i < pos-1;i++)
    {
        s = s->next;
        if (s == pointer->next)
        {
            cout<<"There are less than ";
            cout<<pos<<" in the list"<<endl; //if the position entered is more than list elements/
            return;
        }
    }
    p = new(struct node);
    p->next = s->next;
    cout<<"Enter name of student:"<<endl;
    gets(p->name);
    fflush(stdin);
    cout<<"Enter Department of student:"<<endl;
    gets(p->Department);
    fflush(stdin);
    cout<<"Enter Roll Number of student:"<<endl;
    cin>>p->rollNo;
    fflush(stdin);
    cout<<"Enter section of student:"<<endl;
    cin>>p->section;
    fflush(stdin);
    s->next = p;
    /*Element inserted at the end*/
    if (s == pointer)
    {
        pointer=p;
    }
}


 // Deletion of element from the list

void circularList::delete_element(int rollNum)
{
    struct node *temp, *s;
    s = pointer->next;
      // If List has only one element
    if (pointer->next == pointer && pointer->rollNo == rollNum)
    {

        temp = pointer;
        pointer = NULL;
        free(pointer);
        cout<<"Roll Number: "<<rollNum<<" deleted from the list"<<endl;
        return;
    }
    if (s->rollNo == rollNum)  //First Element Deletion
    {
        temp = s;
        pointer->next = s->next;
        free(temp);
        cout<<"Roll Number: "<<rollNum<<" deleted from the list"<<endl;
        return;
    }
    while (s->next != pointer)
    {
        //Deletion of Element in between
        if (s->next->rollNo == rollNum)
        {
            temp = s->next;
            s->next = temp->next;
            free(temp);
            cout<<"Roll Number: "<<rollNum<<" deleted from the list"<<endl;
            return;
        }
        s = s->next;
    }
    /*Deletion of pointer element*/
    if (s->next->rollNo == rollNum)
    {
        temp = s->next;
        s->next = pointer->next;
        free(temp);
        pointer = s;
        return;
    }
    cout<<"Roll Number: "<<rollNum <<" not found in the list"<<endl;
}


 //Search element in the list

void circularList::search_element(int rollNum)
{
    struct node *s;
    int counter = 0;
    char choice;
    s = pointer->next;
    while (s != pointer)
    {
        counter++;
        if (s->rollNo == rollNum)
        {
            cout<<"Roll number: "<<rollNum<<" found at position "<<counter<<endl;
            cout << "Do you want to display record?"<<endl;
            cin>>choice;
            if(choice=='Y'||choice=='y')
            {
                 cout<<"\nname: ";
                puts(s->name);
                cout<<"\nRoll No:";
                cout<<s->rollNo;
                cout<<"\nDepartment:";
                puts(s->Department);
                cout<<"\nSection:";
                cout<<s->section;

            }
            return;
        }
        s = s->next;
    }
    if (s->rollNo == rollNum)
    {
        counter++;
        cout<<"Roll number: "<<rollNum<<" found at position "<<counter<<endl;
        cout << "Do you want to display record?"<<endl;
            cin>>choice;
            if(choice=='Y'||choice=='y')
            {
                 cout<<"\nname: ";
                puts(s->name);
                cout<<"\nRoll No:";
                cout<<s->rollNo;
                cout<<"\nDepartment:";
                puts(s->Department);
                cout<<"\nSection:";
                cout<<s->section;

            }
        return;
    }
    cout<<"Roll Number: "<<rollNum<<" not found in the list"<<endl;
}


 //Display Circular Link List

void circularList::display_list()
{
    struct node *s;
    int count=1;
    if (pointer == NULL)
    {
        cout<<"List is empty, nothing to display"<<endl;
        return;
    }
    s = pointer->next;

    cout <<"All the Roll Numbers\n";
    while (s != pointer)
    {
        cout<<"Roll Number : "<<s->rollNo<<"  at position "<<count<<endl;
        s = s->next;
        count++;
    }
    cout<<"The Last Roll Number : "<<s->rollNo<<"  at position "<<count<<endl;
}


 // Update Circular Link List

void circularList::update()
{
    int value, pos, i;
    if (pointer == NULL)
    {
        cout<<"List is empty, nothing to update"<<endl;
        return;
    }
    cout<<"Enter the node position to be updated: ";
    cin>>pos;

    struct node *s;
    s = pointer->next;
    for (i = 0;i < pos - 1;i++)
    {
        if (s == pointer)
        {
            cout<<"There are less than "<<pos<<" elements.";
            cout<<endl;
            return;
        }
        s = s->next;
    }

    cout<<"Enter the new values: ";

     fflush(stdin);
    cout<<"Enter name of student:"<<endl;
    gets(s->name);
    fflush(stdin);
    cout<<"Enter Department of student:"<<endl;
    gets(s->Department);
    fflush(stdin);
    cout<<"Enter Roll Number of student:"<<endl;
    cin>>s->rollNo;
    fflush(stdin);
    cout<<"Enter section of student:"<<endl;
    cin>>s->section;
    fflush(stdin);



    //s-> = value;
    cout<<"Node Updated"<<endl;
}


 // Sort Circular Link List

void circularList::sort()
{
    struct node *s, *ptr;
    int temp;
    if (pointer == NULL)
    {
        cout<<"List is empty, nothing to sort"<<endl;
        return;
    }
    s = pointer->next;
    while (s != pointer)
    {
        ptr = s->next;
        while (ptr != pointer->next)
        {
            if (ptr != pointer->next)
            {
                if (s->rollNo > ptr->rollNo)
                {
                    temp = s->rollNo;
                    s->rollNo = ptr->rollNo;
                    ptr->rollNo = temp;
                }
            }
            else
            {
                break;
            }
            ptr = ptr->next;
        }
        s = s->next;
    }
}
