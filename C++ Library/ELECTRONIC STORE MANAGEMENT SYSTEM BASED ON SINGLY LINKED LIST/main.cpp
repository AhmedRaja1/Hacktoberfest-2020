#include <iostream>
#include <iomanip>
#include <conio.h>
#include <string.h>
#include <windows.h>
#include "singlylist.h"
#define WINWIDTH 113
#define WINHEIGHT 15
using namespace std;

void filler();
void liner();
void welcome();
void exitscreen();

char pname[30]; //Product name
int pid;    //Product id
int price;    //Product price
int tquant; //Total products purchased from wholesale
int aquant; //How many are available in stock
int rack;

char filename[50];

class store
{
    LinkedList obj;
    int t;
    public:
        store()
        {
            t = 0;
            obj.ReadFromFile(obj);
        }
        void add()
        {
            cout << "Enter pname,pid,price,tquant,aquant,rack" << endl;
            cin >> pname >> pid >> price >> tquant >> aquant >> rack;
            obj.add_end(pname,pid,price,tquant,aquant,rack);
        }
        void display()
        {
            obj.display();
        }
        int getrecs()
        {
            return obj.recsnum();
        }
        void modify()
        {
            obj.modify();
        }
        void PrintBill();
        void deleteproduct()
        {
            char name[30];
            cout << "Enter name of product : ";
            cin >> name;
            obj.delete_node(name);
        }
        void SearchProduct()
        {
            obj.Search();
        }
        void totalprinter();
        ~store()
        {
            cout << "Number of records = " << obj.getcount() << endl;
            obj.SaveToFile();
            exitscreen();
        }
};

void store::PrintBill()
{
    int choice;
    char sname[] = {"Product Name"};
    char name[30];
    int quantity;
    cout << "Enter filename for bill with full path and file extension : ";
    cin >> filename;
    FILE *fp;
    fp = fopen(filename,"a");
    for(int i = 0 ; i < 70 ; i++)
    {
        fprintf(fp,"*");
    }
    fprintf(fp,"\n");

    fprintf(fp,"%-30s\tQty.\tPrice/item\tAmount\n",sname);

    for(int i = 0 ; i < 70 ; i++)
    {
        fprintf(fp,"*");
    }
    fprintf(fp,"\n");
    fclose(fp);
    while(1)
    {
        cout << "Continue Purchasing Product ?\n1 = yes , 2 = no" << endl;
        cout << "choice : ";
        cin >> choice;
        if(choice == 1)
        {
            cout << "Enter product name and quantity : " << endl;
            cin >> name >> quantity;
            obj.billgen(filename,name,quantity,t);
        }
        else
            break;
    }
    fp = fopen(filename,"app");
}

void store::totalprinter()
{
    FILE *fp;
    fp = fopen(filename,"a");
    fprintf(fp,"\n");
    for(int i = 0 ; i < 70 ; i++)
    {
        fprintf(fp,"*");
    }


    fprintf(fp,"\n");

    for(int i = 0 ; i < 70 ; i++)
    {
        fprintf(fp,"*");
    }
    fprintf(fp,"\n");
    fprintf(fp,"Total = %d\n",t);
    for(int i = 0 ; i < 70 ; i++)
    {
        fprintf(fp,"*");
    }
    fprintf(fp,"\n");
    fclose(fp);
}
int main()
{
    store obj;
    int ch;
    welcome();
    cout << endl << "Press any key to continue" << endl;
    getch();
    while(1)
    {
        system("CLS");
        cout << "Enter your choice : " << endl
            << "1) Add" << endl
            << "2) Display" << endl
            << "3) Modify" << endl
            << "4) Delete Product" << endl
            << "5) Search Product" << endl
            << "6) Generate Bill" << endl
            << "7) Exit " << endl;
        cout << "Choice : ";
        cin >> ch;
        switch(ch)
        {
            case    1   :   obj.add();
                            break;
            case    2   :   obj.display();
                            getch();
                            break;
            case    3   :   obj.modify();
                            break;
            case    4   :   obj.deleteproduct();
                            getch();
                            break;
            case    5   :   obj.SearchProduct();
                            break;
            case    6   :   obj.PrintBill();
                            obj.totalprinter();
                            getch();

                            break;
            case    7   :   return 0;
        }
    }
    return 0;
}

void filler()
{
    for(int i = 0 ; i < WINWIDTH ; i++)
    {
        cout << "*";
    }
    cout << "\a" << endl;
}

void liner()
{
    for(int i = 0 ; i < WINHEIGHT ; i++)
        cout << endl;
}

void welcome()
{
    liner();
    cout << "Loading..." << endl;
    Sleep(500);
    char msg[] = "WELCOME TO ELECTRONIC STORE MANAGEMENT SYSTEM";
    int len = strlen(msg);
    int x;
    x = (WINWIDTH/2) - (len/2);
    for(int i = 0 ; i < WINWIDTH ; i++)
    {
        printf("%c",177);
        Sleep(55);
    }
    cout << endl;
    system("CLS");
    liner();
    filler();
    cout << setw(len+x) << msg << endl;
    filler();
}

void exitscreen()
{
    system("CLS");
    char msg[] = "THANKYOU";
    int len = strlen(msg);
    int x;
    x = (WINWIDTH/2) - (len/2);
    liner();
    filler();
    cout << setw(len+x) << msg << endl;
    filler();
}
