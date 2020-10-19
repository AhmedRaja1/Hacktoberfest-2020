#include <iostream>

using namespace std;

struct node
  {
    int id;
    char name [50];
    char qua[30];
    char addrs[50];
    char city[30];
    char jobtitle[30];
    int salry;
    char date[30];
    node *prev,*next;

  };
class employ
{
     private:
         node *head;
         char ch;
     public:
        employ()
        {
            head=NULL;

        }
        void menu()
        {
            cout<<"***********************WELCOME TO THE EMPLOYEE SYSTEM*************************"<<endl;
            cout<<"\n\t\t\t 1-Add a record:";
            cout<<"\n\t\t\t 2-Search a record:";
            cout<<"\n\t\t\t 3-Update a record:";
            cout<<"\n\t\t\t 4-Delete a record:";
            cout<<"\n\t\t\t 5-Display a record:";
            cout<<"\n\t\t\t 6-EXIT:";
            return;
        }
        void add_first()
        {
          node * newer=new node;
          cout<<"\n\t\t Enter the Employee ID:"<<endl;
          cin>>newer->id;

          cout<<"\n\t\t Enter the employee Full name :"<<endl;
          cin.getline(newer->name,50);
         cin>>newer->name;





          cout<<"\n\t\t Enter the Qualification :"<<endl;
          cin.getline(newer->qua,30);
          cin>>newer->qua;

          cout<<"\n\t\t Enter the Address of Employee :"<<endl;
          //cin.getline(newer->addrs ,50);
          cin>>newer->addrs;

          cout<<"\n\t\tEnter the City:"<<endl;
         // cin.getline(newer->city,30);
          cin>>newer->city;

          cout<<"\n\t\tEnter the employee Job title :"<<endl;
         // cin.getline(newer->jobtitle,50);
         cin>>newer->jobtitle;

          cout<<"\n\t\tEnter the Employee the Salary:"<<endl;
          cin>>newer->salry;


          cout<<"\n\t\t Enter the start Date :"<<endl;
          //cin.getline(newer->date,30);
          cin>>newer->date;



          newer->next=head;
          newer->prev=NULL;
          if(head!=NULL)
          {
              head->prev=newer;
          }
         head=newer;
         cout<<"\n\t\t\ Record inserted Successfully :"<<endl;
         cout<<"\n\t\t\ **********THANK YOU **********"<<endl;

        }
        void add_last()
        {
            if (head==NULL)
            {
               cout<<"\n\t\tLink is empty !:"<<endl;
               cout<<"\n\t\tAdd a new record\n\tPress Y or N:"<<endl;
               cin>>ch;
               if (ch=='Y'||ch=='y')
                   {
                   add_first();
                   return;
                   }
                 else
                 {

                   //exit(1);
                 }
            }
            else
            {
                 node *temp=head;
                 while(temp->next!=NULL)
                 {
                     temp=temp->next;

                 }
                 node  *newer=new node;

                 cout<<"\n\t\t\ Enter the Employee ID:"<<endl;
                 cin>>newer->id;

                 cout<<"\n\t\t\ Enter the employee Full name :"<<endl;
                 cin.getline(newer->name,50);
                 cin>>newer->name;


                 cout<<"\n\t\t\ Enter the Qualification :"<<endl;
                 cin.getline(newer->qua,30);
                 cin>>newer->qua;

                 cout<<"\n\t\t\ Enter the Address of Employee :"<<endl;
                  cin.getline(newer->addrs ,50);
                  cin>>newer->addrs;

                 cout<<"\n\t\t\ Enter the City:"<<endl;
                 cin.getline(newer->city,30);
                 cin>>newer->city;


                 cout<<"\n\t\t\ Enter the employee Job title :"<<endl;
                 cin.getline(newer->jobtitle,50);
                 cin>>newer->jobtitle;


                 cout<<"\n\t\t\Enter the Employee the Salary:"<<endl;
                cin>>newer->salry;

                cout<<"\n\t\t\ Enter the state Date :"<<endl;
                cin.getline(newer->date,30);
                cin>>newer->date;

                  newer->next=NULL;
                  temp->next=newer;
                  newer->prev=temp;



            }
        }
        void add_after()
        {
             if (head==NULL)
              {

               cout<<"\n\t\tLink is empty !:"<<endl;
               cout<<"\n\t\tAdd a new record Press Y or N:"<<endl;
               cin>>ch;
               if (ch=='Y'||ch=='y')
               {
                   add_first();
                   return;
               }
                 else
                 {
                    // exit)(1);

                 }
              }
        else
        {
            int val;
             bool flag=false;


            cout<<"\n\tEnter the ID after which you want to add a new record:"<<endl;
            cin>>val;
          // bool flag=false;
            //node *temp=head;
             node *temp=head;


            node *p;
            while(temp!=NULL)
            {

               // if (temp->id==val)
                if(flag=true)
                {


                    node *newer=new node ;

                    cout<<"\n\tEnter the Employee ID:"<<endl;
                    cin>>newer->id;
                    cout<<"\n\t\t Enter the employee Full name :"<<endl;
                    cin.getline(newer->name,50);
                    cin>>newer->name;

                    cout<<"\n\t\t Enter the Qualification :"<<endl;
                    cin.getline(newer->qua,30);
                    cin>>newer->qua;

                    cout<<"\n\t\t Enter the Address of Employee :"<<endl;
                    cin.getline(newer->addrs ,50);
                    cin>>newer->addrs;

                    cout<<"\n\t\t Enter the City:"<<endl;
                    cin.getline(newer->city,30);
                    cin>>newer->city;

                    cout<<"\n\t\t Enter the employee Job title :"<<endl;
                    cin.getline(newer->jobtitle,50);
                    cin>>newer->jobtitle;

                    cout<<"\n\t\tEnter the Employee the Salary:"<<endl;
                    cin>>newer->salry;

                    cout<<"\n\t\t Enter the start Date :"<<endl;
                    cin.getline(newer->date,30);
                    cin>>newer->date;



                   if (temp->next!=NULL)
                   {
                       newer->next=temp->next;
                       newer->prev=temp;
                       p=temp->next;
                       p->prev=newer;
                       temp->next=newer;

                   }
                   else
                   {
                      newer->next=temp->next;
                       newer->prev=temp;
                       temp->next=newer;

                   }
                   flag=true;


                }
                temp=temp->next;
             temp=NULL;
            }
            if(flag==false)
            {
                cout<<"\n\tID is not Found! :"<<endl;

            }

       }
   }
   void add_before()
   {
       if (head==NULL)
       {
            cout<<"\n\ttLink is empty !:"<<endl;
               cout<<"\n\ttAdd a new record\n\tPress Y or N:"<<endl;
               cin>>ch;
               if (ch=='Y'||ch=='y')
               {
                   add_first();
                   return;
               }
                 else
                 {
                    // exit)(1);

           }
             }
                 else
        {
            int val;
            bool flag=false;
            cout<<"\n\tEnter the ID Before  which you want to add a new record:"<<endl;
            cin>>val;
            //bool flag=false;
            node *temp=head;
            node*p;
            while(temp!=NULL)
            {
                //if (temp->id==val)
                 if(flag=true)

                {
                    node *newer=new node ;

                    cout<<"\n\tEnter the Employee ID:"<<endl;
                    cin>>newer->id;
                    cout<<"\n\t\t Enter the employee Full name :"<<endl;
                    cin.getline(newer->name,50);
                    cin>>newer->name;

                    cout<<"\n\t\t Enter the Qualification :"<<endl;
                    cin.getline(newer->qua,30);
                    cin>>newer->qua;

                    cout<<"\n\t\t Enter the Address of Employee :"<<endl;
                    cin.getline(newer->addrs ,50);
                    cin>>newer->addrs;

                    cout<<"\n\t\t Enter the City:"<<endl;
                    cin.getline(newer->city,30);
                    cin>>newer->city;

                    cout<<"\n\t\t Enter the employee Job title :"<<endl;
                    cin.getline(newer->jobtitle,50);
                    cin>>newer->jobtitle;

                    cout<<"\n\t\tEnter the Employee the Salary:"<<endl;
                    cin>>newer->salry;

                    cout<<"\n\t\t\ Enter the start Date :"<<endl;
                    cin.getline(newer->date,30);
                    cin>>newer->date;


                   if (temp->next!=NULL)
                   {
                       newer->next=temp->next;
                       newer->prev=temp;
                       p=temp->next;
                       p->prev=newer;
                       temp->next=newer;

                   }
                   else
                   {
                      newer->next=temp->next;
                       newer->prev=temp;
                       temp->next=newer;

                   }
                   flag=true;


                }
                temp=temp->next;
                temp=NULL;

            }
            if(flag==false)
            {
                cout<<"\n\tID is not Found! :"<<endl;

            }

       }

       }


   void del()
   {
       if (head==NULL)
       {
               cout<<"\n\t\tLink is empty !:"<<endl;
               cout<<"\n\t\tAdd a new record\n\tPress Y or N:"<<endl;
               cin>>ch;
               if (ch=='Y'||ch=='y')
               {
                   add_first();
                   return;
               }
                 else
                 {
                    // exit)(1);

                 }
       }
           else
            {
            int val;
           // bool flag=false;
            cout<<"\n\tEnter the ID after which you want to Delete a  record:"<<endl;
            cin>>val;

            node *temp=head;
            bool flag=false;
            if(temp->id==val)
                   {
                    head =temp->next;
                    head->prev=NULL;
                    flag=true;
                    delete temp;
                    if (flag==true)
                    {
                        cout<<"\n\tRecord has deleted Successfully:"<<endl;


                    }
                  }
                  else
                  {
                   while(temp!=NULL)
                   {
                       if(temp->id==val)
                       {
                           node *p,*q;
                           if(temp->next==NULL)
                           {
                               p=temp->prev;
                               p->next=NULL;
                               flag=true;
                               delete temp;

                           }
                           else
                           {
                               p=temp->prev;
                               q=temp->next;
                               p->next=q;
                               q->prev=p;
                               flag=true;
                               delete temp;
                           }
                       }
                       temp=temp->next;

                   }
                   if(flag==false)
                   {
                       cout<<"\n\tValue is Not Found !"<<endl;

                   }
                  }

       }
   }

   void show()
   {
       if (head==NULL)
       {
               cout<<"\n\t\tLink is empty !:"<<endl;
               cout<<"\n\t\tAdd a new record\n\tPress Y or N:"<<endl;
               cin>>ch;
               if (ch=='Y'||ch=='y')
               {
                   add_first();
                   return;
               }
                 else
                 {
                     //exit)(1);

                 }
             }
                 else
                 {
                     node *temp=head;
                     while(temp!=NULL)
                     {
                         cout<<"***********************INFORMATION OF EMLOYEE**********************"<<endl;
                         cout<<"\n\t\tID :"<<temp->id<<endl;
                         cout<<"\n\t\tName:"<<temp->name<<endl;
                         cout<<"\n\t\tQualification:"<<temp->qua<<endl;
                         cout<<"\n\t\tAddress:"<<temp->addrs<<endl;
                         cout<<"\n\t\tCity:"<<temp->city<<endl;
                         cout<<"\n\t\tJob Title:"<<temp->jobtitle<<endl;
                         cout<<"\n\t\tSalary :"<<temp->salry<<endl;
                         cout<<"\n\t\tStarting Date:"<<temp->date<<endl;
                         temp=temp->next;

                     }
                 }


   }
   void search()
   {
       if (head==NULL)
       {
            cout<<"\n\t\tLink is empty !:"<<endl;
               cout<<"\n\t\tAdd a new record\n\tPress Y or N:"<<endl;
               cin>>ch;
               if (ch=='Y'||ch=='y')
               {
                   add_first();
                   return;
               }
                 else
                 {
                    //exit)(1);

                 }
            }
                 else
                    {
            int val;
            cout<<"\n\tEnter the employee ID which you want to search  a  record:"<<endl;
            cin>>val;

            node *temp=head;

            bool flag=false;

            if (temp->id==val)
                {
                    cout<<"***********************INFORMATION OF EMLOYEE**********************"<<endl;
                         cout<<"\n\t\tID :"<<temp->id<<endl;
                         cout<<"\n\t\tName:"<<temp->name<<endl;
                         cout<<"\n\t\tQualification:"<<temp->qua<<endl;
                         cout<<"\n\t\tAddress:"<<temp->addrs<<endl;
                         cout<<"\n\t\tCity:"<<temp->city<<endl;
                         cout<<"\n\t\tJob Title:"<<temp->jobtitle<<endl;
                         cout<<"\n\t\tSalary :"<<temp->salry<<endl;
                         cout<<"\n\t\tStarting Date:"<<temp->date<<endl;
                         temp=temp->next;
                         return;


                }


                    }

       }

   void update()
   {
      if (head==NULL)
       {
            cout<<"\n\t\tLink is empty !:"<<endl;
               cout<<"\n\t\tAdd a new record\n\tPress Y or N:"<<endl;
               cin>>ch;
               if (ch=='Y'||ch=='y')
               {
                   add_first();
                   return;
               }
                 else
                 {
                     //exit)(1);


                 }

  }
               else

                 {
                   int val;
                   cout<<"\n\tEnter the ID after which you want to add a new record:"<<endl;
                   cin>>val;

                   node *temp=head;

                   while(temp!=NULL)
                        {
                           if (temp->id==val)
                            {


                                   cout<<"\n\tEnter the Employee ID:"<<endl;
                                   cin>>temp->id;

                                   cout<<"\n\t\tEnter the employee Full name :"<<endl;
                                   cin.getline(temp->name,50);
                                   cin>>temp->name;

                                   cout<<"\n\t\t Enter the Qualification :"<<endl;
                                   cin.getline(temp->qua,30);
                                   cin>>temp->qua;


                                   cout<<"\n\t\t Enter the Address of Employee :"<<endl;
                                   cin.getline(temp->addrs ,50);
                                   cin>>temp->addrs;

                                   cout<<"\n\t\t Enter the City:"<<endl;
                                   cin.getline(temp->city,30);
                                   cin>>temp->city;

                                   cout<<"\n\t\t Enter the employee Job title :"<<endl;
                                   cin.getline(temp->jobtitle,50);
                                   cin>>temp->jobtitle;

                                  cout<<"\n\t\t\Enter the Employee the Salary:"<<endl;
                                  cin>>temp->salry;

                                  cout<<"\n\t\t\ Enter the state Date :"<<endl;
                                  cin.getline(temp->date,30);
                                  cin>>temp->date;


                            }
                            temp=temp->next;
                        }

                           cout<<"\n\tRecord has been Updated Successfully "<<endl;

                 }
       }








};
int main()
{
    int n;
    char ch;
    employ em;//class object liya h

    x2 ://this is label
     em.menu();
    cout<<"\n\tEnter your choice: ";
    cin>>n;
    if(n==1)
    {
        x1:
            cout<<"\n\tWhere you want to add record:- "<<endl;
            cout<<"\n\t 1- Very first record:"<<endl;
            cout<<"\n\t 2-Very last record: "<<endl;
            cout<<"\n\t 3-Your Location add record to after record: "<<endl;
            cout<<"\n\t 4-Add before record: "<<endl;
            cout<<"\n\t Enter choice :";
            cin>>n;
            if(n==1)
            {
                em.add_first();
                cout<<"\n\tDo you want to go main menu?"<<endl;
                 cout<<"\n\t press Y:--";
                cin>>ch;

                if (ch=='Y'||ch=='y')\
               {
                   goto x2;

               }
                 else
                 {
                   //  exit)(1);
                   return 0;

                 }


            }
            else if(n==2)
            {
                em.add_last() ;
                cout<<"\n\tDo you want to go main menu?"<<endl;
                 cout<<"\n\t press Y:-";
                cin>>ch;

                if (ch=='Y'||ch=='y')
               {
                   goto x2;


               }
                 else
                 {
                     //exit)(1);
                     return 0;

                 }


            }
          else if (n==3)
          {
              em.add_after();
              cout<<"\n\tDo you want to go main menu?"<<endl;
               cout<<"\n\t press Y:--";
                cin>>ch;

                if (ch=='Y'||ch=='y')
               {
                   goto x2;


               }
                 else
                 {
                   //  exit)(1);
                   return 0;

                 }

          }
          else if(n==4)
          {
              em.add_before();
              cout<<"\n\tDo you want to go main menu?"<<endl;
               cout<<"\n\t press Y:--";
                cin>>ch;

                if (ch=='Y'||ch=='y')
               {
                   goto x2;


               }
                 else
                 {
                     //exit)(1);

                    return 0;
                 }

          }
          else
          {
              cout<<"\n\tChoose correct answer:"<<endl;
              goto x1;

          }
    }
    else if(n==2)
    {
        em.search();

                cout<<"\n\tID is not Found! :"<<endl;


              cout<<"\n\tDo you want to go main menu?"<<endl;
               cout<<"\n\t press Y:--";
                cin>>ch;

                if (ch=='Y'||ch=='y')
               {
                   goto x2;


               }
                 else
                 {
                    // exit)(1);
                    return 0;

                 }
    }

    else if(n==3)
    {
        em.update();
              cout<<"\n\tDo you want to go main menu?"<<endl;
              cout<<"\n\t press Y:--";
                cin>>ch;

                if (ch=='Y'||ch=='y')
                 {

                  goto x2;


               }
                 else
                 {
                   //  exit)(1);
                   return 0;

                 }
    }
    else if (n==4)
    {
        em.del();
              cout<<"\n\tDo you want to go main menu?"<<endl;
              cout<<"\n\t press Y:--";
                cin>>ch;


                if (ch=='Y'||ch=='y')
               {
                   goto x2;


               }
                 else
                 {
                    // exit)(1);
                    return 0;

                 }
    }
    else if (n==5)
    {
        em.show();
              cout<<"\n\tDo you want to go main menu?"<<endl;
              cout<<"\n\t press Y:--";
                cin>>ch;

                if (ch=='Y'||ch=='y')
               {
                   goto x2;


               }
                 else
                 {
                    // exit)(1);
                   return 0;

                 }
    }
    else if (n==6)
    {
        return 0;


    }
    else
    {
        cout<<"\n\t\t Choose correct answer:"<<endl;
        goto x2;

    }


 }
