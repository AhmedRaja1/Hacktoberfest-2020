#include<iostream>
#include<string>
#include <sstream>
#include <bits/stdc++.h>
#include<windows.h>
#include"queue1.h"
#include"animation.h"
#include"stackme.h"

using namespace std;

int search(int);
int display();
string check(int);       //   for checking quantity

////////////////////////////////////////////////////////////////////
struct node
 {
	int ID;
	string proName;
	double prePrice;
	int quantity;
    struct    node* next;
};

struct node *head=NULL;

////////////////////////////////////////////////////////////////////
 void beg()
{
	system("cls");
	int id,quant;           //  quant    for quantity
	string name;
	double pre;            //  pre for price
	struct node *t=new node;
	struct node *p=head;

	cout<<"\t\t\tEnter product ID:-";
	cin>>id;
	t->ID=id;
	cout<<"\t\t\tEnter product Name:-";
	cin>>name;
	t->proName=name;
	cout<<"\t\t\tEnter product price:-";
	cin>>pre;
	t->prePrice=pre;
	cout<<"\t\t\tEnter product quantity:-";
	cin>>quant;
	t->quantity=quant;
	if(head==NULL)
	{
	t->next=head;
	head=t;
	}
	else
	{
		while(p->next!=NULL)
    {
		p=p->next;
                        }
        p->next=t;
        t->next=NULL;
		
	}	
	system("cls");
    cout<<"\n\n\t\t\t\tThis product is Inserted!\n\n\n";

	}

///////////////////////////////////////////////////////////////////////////////////////////
	int search(int id)                     //    for search item in list
 {
 	int count=1;
 	struct node *p=head;
 	while(p!=NULL)
 	{
 		if(p->ID==id)
 			break;
 		else
 			count++;
 			p=p->next;
	}
 	return count;
 }
 ///////////////////////////////////////////////////////////////////////
 

////////////////////////////////////////////////////////////////////////
	void delPro()
	{
		system("cls");
		display();
		int id;
		struct node *cur=head;
		struct node *pre=head;
		cout<<"\n\nEnter ID to delete that product:\n\n";
		cin>>id;
		 if (head == NULL)
    {
    	system("cls");
        cout<<"List is empty"<<endl;
    }
	int pos=0;
	int count=display();               //   for load no of nodes
	pos=search(id);                        //   for check weather desire node is exist or not
	if(pos<=count){

		while(cur->ID!=id){                //  for delete middle area products
			pre=cur;
			cur=cur->next;
}
		pre->next=cur->next;
		system("cls");
		cout<<"\n<<item is deleted>>\n";
	}else{
		cout<<"\n<<<Not found>>\n\n";
	}
	}

//////////////////////////////////////////////////////////////////////////////////
	void modify()
	{
		int id;
		double pre;        //    pre for price
		string pName;
		int nid; int nq;     //   pName for new name
		if (head == NULL)
    {
    	system("cls");
        cout<<"List is empty"<<endl;
    }
         else
	{    
	    display();
		cout<<"\n\nEnter ID to modify product Name and its price:\n";
		cin>>id;
		struct node *cur=head;
		int pos=0;
		int count=display();               //   for load no of nodes
	    pos=search(id);
	                            //   for check weather desire node is exist or not
	    if(pos<=count)
    {
		while(cur->ID!=id)
        {
			cur=cur->next;
		}
		cout<<"\nOld ID : "<<cur->ID<<endl;
		cout<<"\nOld Name : "<<cur->proName<<endl;
		cout<<"\nOld Price : "<<cur->prePrice<<endl;
		cout<<"\nOld Quantity : "<<cur->quantity<<endl;

		cout<<endl<<endl;
		cout<<"Enter new ID:";
		cin>>nid;
		cur->ID=nid;
		cout<<"Enter new Name:";
		cin>>pName;
		cur->proName=pName;
		cout<<"Enter new Price:";
		cin>>pre;
		cur->prePrice=pre;
		cout<<"Enter new Quantity:";
		cin>>nq;
		cur->quantity=nq;
	}

	    else
    {
		cout<<id<<" is <<<Not found>>\n\n";
	}
	}
}

//////////////////////////////////////////////////////////////////////////////////////

int display()
{
		system("cls");
		int c=0;             //   c for count products
		struct node *p=head;
		cout<<"Existing products are:\n";
		cout<<"ID\t\tProduct Name\t\t\Price\t\tQuantity\n";
		cout<<"=================================================================|\n";
		while(p!=NULL)
		{
			cout<<p->ID<<"\t\t"<<p->proName<<"\t\t\t"<<p->prePrice<<"\t\t\t"<<check(p->quantity)<<"\n"; //    call   check func and pass quantity
			p=p->next;
			c=c+1;
		}
		cout<<"\nTotal products in our store is : "<<c<<"\n\n\n";
		return c;
	    }
////////////////////////////////////////////////////////////////////////////////////////
	    string check(int quant)

	{              //        check function
	    int a = quant;
       stringstream ss;
       ss << a;
       string quantity = ss.str();

	    	if(quant<=0)
	    	return "out of stock!";
	    	else
	    	return quantity;
		}

///////////////////////////////////////////////////////////////////////
	void buy()
	{
        system("cls");
        display();
		string products[20];
		   //   for display sold items
		int pay=0,no,c=0,price,id,i=1;

        if(head==NULL)
        {
	    cout<<"\n<<<<There is no items to buy>>>>\n\n";
        }
	    else
        {
		cout<<"How many items you wanna to buy!\n";
		cin>>no; 
        int count=display();           //   for store no of nodes  in c
		while (i<=no)
        {
			struct node *cur=head;
            int quant,cho;   a:           //   quant   for quantity  and cho for choice
            cout<<"Enter id of item that you want to buy: ";
            int id,pos=0;
            cin>>id;
            if(id==-1){system("cls"); return;	}
	        pos=search(id);
	        if(pos<=count)
        {
	                        //     item is available in store
		 while(cur->ID!=id)
        {
			cur=cur->next;
		 }
           cout<<"How many quantities you want:";
	       cin>>quant;
	       if(cur->quantity<quant)
           {
               cout<<"\n\n\t\t\t----The Quantity You Entered is not available---"<<endl;
               cout<<"\n\t\t\t-----(Press -1 for Back to Main Menu)------"<<endl;
               goto a;
               
           }
           products[c]=cur->proName;   // this will conatin the items buy names in array; 
		   c++;   
		   
	       pay=pay+(cur->prePrice*quant);         //     calculate Bill
	       cur->quantity=cur->quantity-quant;           //    change quantity
	       i++;

	     }
	    else
        {    
             
		cout<<"\n<<<<<<<<<This item is not available in our store at this time>>>>\n\n";
		
	    }
}
        string customer;
        cout<<"\n\t\t Enter Your Name :"; cin>>customer;
        enqueue(customer);
	    system("cls");
        cout<<"\n\n\n\n\t\t\tYou have bought : ";
        for(int i=0;i<no;i++)
      {              //    show that item you have bought
        cout<<products[i]<<",";
       }
        price=pay*(0.90);           //    with 5% discount
	    cout<<"\n\nOriginal price : "<<pay;
        cout<<"\n with 10% discount: "<<price<<"\nThank you! for the shopping\n\n";
          }
            }
 /////////////////////////////////////////////////////////////////////////////////////////
    void administator()
	{
		system("cls");
			int ch;
	do {

                 //            choice for below message

	cout<<"\t\t============================================"<<endl;
	cout<<"\t\t|          Administator Portal              |"<<endl;
	cout<<"\t\t============================================"<<endl;

	cout<<"\t\t     Enter 1 for ADD a new product    "<<endl;
	cout<<"\t\t     Enter 2 to display all products   "<<endl;
	cout<<"\t\t     Enter 3 for MODIFY Existing product"<<endl;
	cout<<"\t\t     Enter 4 for Delete a particular product item"<<endl;
	cout<<"\t\t     Enter 5 for Customers List "<<endl;
	cout<<"\t\t     Enter 6 for Dequeue customer"<<endl;
	cout<<"\t\t     Enter 0 for Main Menu"<<endl;


	cout<<"\nEnter Your choice >>>";   cin>>ch;
	switch(ch){
	case 1:
	beg();
	break;
case 2:
	system("cls");
    display();
    break;
case 3:
	modify();
	system("cls");
	break;
case 4:
	delPro();
cout<<"\n-------Product is Deleted-------\n";
	break;
case 5:
	  system("cls");
      cout<<"|============CUSTOMERS NAMES LIST==============|"<<endl;
	  displayQueue();
	   break;
case 6:
	   system("cls");
	  cout<<"|============CUSTOMERS NAMES LIST==============|"<<endl;
	  dequeue();
      displayQueue();
	break;



default: system("cls");

	}
}
while(ch!=0)	;
}
	                        //        Main function
int main()
{
    
     for(int i=0;i<=51;i++)
     {
     
     	push(i);
	 }


		system("color F0");     //  for console color
	gotoxy(17,5);
	cout<<"--------------------------------------------------"<<endl;
	gotoxy(17,7);
	cout<<"||          Shopping Management System          ||"<<endl;
	gotoxy(17,9);
	cout<<"--------------------------------------------------"<<endl;
   	gotoxy(17,11);
   	cout<<"|Subject Teacher ->> Dr. Khurram Shehzad <<-- |\n"<<endl;
   	gotoxy(17,13);
   	cout<<"\t  >>>----Project Made By-----<<<"<<endl;
    gotoxy(22,15);
   	cout<<"       Abdul Aziz (18PWCSE1621)\n\n"<<endl;
	system("pause");
	system("cls");
	system("color F0"); 

    int ch;
	while(ch!=3){
	
	                     //            choice for below message

    cout<<"\n\t\t|--------<Main Menu>-----------|";
      cout<<"\n\n";
	cout<<"\t\t\t 1)Administator\n";
	cout<<"\t\t\t 2)Customer               \n";
	cout<<"\t\t\t 3)Exit                    \n";



	cout<<"\nEnter Your choice >>>";cin>>ch;
	switch(ch){
	case 1:


		administator();
		break;

	case 2:
		cout<<endl<<endl;
		bpop();
		system("pause");
	    buy();
	    break;

    case 3:
    	cout<<"\n\n\t\t\t\t\tThank You\t\t\t\t";
    	break;
   
	}
}
return 0;	}






