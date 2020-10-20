//Election/ Voting Program

#include <iostream>
#include <string>
#include<windows.h>

int democrates{0}, republicans{0}, trudos{0}, battlers{0};

using namespace std;
struct data
{
    string name;
    string fatherName;
    string idCardNo; //string because of - or anything else involvement
    int vote;

};

//  ***************************************************    THESE FUNCITONS ARE OVERALL USED DURING THE PROGARAM *********************************************************

void result();
void checkWin();
void check2nd();
void check3rd4th();
data inputData(data);//this function is related to the struct
void vote(int);
void current();

//****************************************************************************************************************************************************************************************************



int main()
{
    system ("color  F4");                       //changing the console color;



    cout<<"\t\t\t\t\t********************************"<<endl;
    cout<<"\t\t\t\t\t*        ELECTION SYSTEM       *"<<endl;                                                       //The Opening Menu
    cout<<"\t\t\t\t\t********************************"<<endl;
    cout<<"\n ====>[ Enter The Number Of Voters In The Region ]" <<endl;
    int voters;
    cin>>voters;


    cout<<"\n\t\t\t\t      [ Poll the first vote ]"<<endl;

    //************************************************************//
    //                  the first array will create objects
    data arr[voters];

    //                  2nd array will save the data returned from functions for the objects
    data arr2[voters];



    //*********************************************************************The main part of the program******************************************


    //this loop is supposed to run for number of voters input by the user.
    for (int i{0}; i<voters; i++)
    {

        arr2[i]=inputData(arr[i]);                                      //input func will be called for the number of voters in order to get their data

        vote(arr2[i].vote);                                                //vote function will be called in order to record the vote of current object (person)

        system ("CLS");

        tryagain:                                                           //this try again will be used if and only if the choice(latter on declared) exceeds the given number

        menu:                                                               //this menu will be used for returning back to menu after any of selection or polling vote or anything else


        int checker{0};                                                 //this will help in displaying the result once and not after every voter's data

    //*****************************************************************************************************************************************************************************

        if(i==voters-1 )                                                //this statement will execute after limit reaching whether the user want to find any voter's data after the final results are displayed
            {
                if (checker==0)
                        {
                            cout<<"====>End of Voting Session!, Limit reached\n"<<endl;
                            result();
                        }
                char select='y';
                   do
                    {
                        cout<<"\n\nFind Voter's Info?\n press N for \"No\" or any other button for YES"<<endl;
                        cin>>select;
                        if (select=='N' || select=='n')
                        {
                            goto endd;
                        }
                        checker++;
                        goto identity;
                    }while (select=='Y' || select=='y');
            }

//==================================================================Selection Menu=========================================\\
        //system will ask what to do after the first vote

        cout<<"\t\t\t\t\t***************"<<endl;
        cout<<"\t\t\t\t\t*             *"<<endl;
        cout<<"\t\t\t\t\t* Select Case *"<<endl;
        cout<<"\t\t\t\t\t*             *"<<endl;
        cout<<"\t\t\t\t\t***************"<<endl;

        cout<<"\n\t\t\t\t ----> 1) Next Vote \n\n\t\t\t\t ----> 2) Current Party leading and VOTE/VOTES polled so far and continue voting\n"<<endl;
        cout<<"\t\t\t\t ----> 3) End of VOTE/VOTES and final result \n\n\t\t\t\t ----> 4) Find voter info"<<endl;
        int choice;
        cin>>choice;


//+++++++++++++++++++++++++++++++++++++++++++++++++++++++DECISION AFTER USER'S CHOICE+++++++++++++++++++++++++++++++++++\\

        if (choice==1)
        {
            continue;
        }
        else if (choice==2)
        {
            current();
            goto menu;
        }
        else if (choice==3)
        {
            result();
            break;
        }
        else if (choice==4)
        {

//************************************************************** FINDING VOTER'S RECORD WITH IDENTIY CARD NO*************************************************\\

            identity:
            cout<<"Enter the identity card no "<<endl;
            string idNo;
            cin>>idNo;
            for (int j{0}; j<voters; j++)
                {
                    if(arr2[j].idCardNo==idNo)
                    {
                        cout<<"Checking Results "<<endl;
                        for(int k{0}; k<40; k++)
                            {
                                Sleep(100);
                                cout<<char(178);
                            }
                        cout<<"\n\t\t\t Id Card "<<idNo<<" Information is given below ]"<<endl;
                        cout<<"\n\t\t\t\---------------------------------------------"<<endl;
                        cout<<"\n\t\t====>[ Name of the person : "<<arr2[j].name<<" ]"<<endl;
                        cout<<"\t\t====>[ "<<arr2[j].name<<"'s father name  : "<<arr2[j].fatherName<<" ]"<<endl;
                        cout<<"\t\t====>[ "<<arr2[j].name<<"'s Identity card number  : "<<arr2[j].idCardNo<<" ]"<<endl;
                        if(arr2[j].vote==1)
                        {
                            cout<<"\t\t====>[ "<<arr2[j].name<<" voted THE DEMOCRATES ]\n "<<endl;
                        }
                        else if(arr2[j].vote==2)
                        {
                            cout<<"\t\t====>[ "<<arr2[j].name<<" voted THE REPUBLICANS ]\n "<<endl;
                        }
                        else if(arr2[j].vote==3)
                        {
                            cout<<"\t\t====>[ "<<arr2[j].name<<" voted THE TRUDOS ]\n "<<endl;
                        }
                        else if(arr2[j].vote==4)
                        {
                            cout<<"\t\t====>[ "<<arr2[j].name<<" voted THE BATTLERS ]\n "<<endl;
                        }

                         goto menu;

                   }
                   else if (j==voters-1)
                   {
                       cout<<"\t!!Your Entered Id Card Number Does Not Exist In The List!! \n\n" <<endl;
                       goto menu;
                   }
                   else
                   {
                       continue;
                   }
                }

        }
        else
        {
            cout<<"Wrong Entry!!!\nPlease Try again \n "<<endl;
            goto tryagain;
        }
    }

    endd:

    cout<<"\n\nTHANK YOU!"<<endl;


    return 0;
}


//************************************************************************************************* FUNTION(RELATED TO STRUCT) FOR USER DATA INPUT**************************\\

data inputData(data p)
{
    //buffer data remove
        cin.sync();

        cout<<endl;
        cout<<" ====>[ Enter Your Full Name ] "<<endl;
        getline(cin,p.name);

        cout<<"\n ====>[Enter your father name : " <<endl;
        getline(cin,p.fatherName);



        cout<<"\n ====>[Enter your identity card number : "<<endl;
        getline(cin,p.idCardNo);

        system("CLS");
        while(p.vote>4 || p.vote<1)
            {
                cout<<"\t\t\t\t\t [POLL YOUR VOTE ] "<<endl;
                cout<<"\t\t\t\t[ Enter the Party's Number you want to vote ]"<<endl;
                cout<<"====>1) THE DEMOCRATES \n====>2) THE REPUBLICANS \n====>3) THE TRUDOS \n====>4) THE BATTLERS"<<endl;
                cin>>p.vote;
                if(p.vote>4 || p.vote<1)
                {
                    cout<<"Wrong Entry!!!\nPlease try Again" <<endl;
                }
            }
        return p;
}

void vote (int  vote)
{
    switch (vote)
    {
        case 1:
        democrates++;
        break;

        case 2:
        {
            republicans++;
            break;
        }
        case 3:
        {
            trudos++;
        break;
        }
        case 4:
        {
            battlers++;
        break;
        }

       }
}

//*****************************************************FUNCTION FOR CHECKING CURRENTS STATS DURING VOTING****************************************\\

void current()
{
    cout<<"Checking current status "<<endl;

    for (int i{0}; i<20; i++)                                   //FOR LOOP FOR THE FORMAL WAITING PROCESS BEFORE
    {
        Sleep(100);
        cout<<char(178);
    }

    cout<<"\t\t====>THE  DEMOCRATES  GOT  {"<<democrates<<" } VOTE/VOTES SO FAR "<<endl;
    cout<<"\t\t====>THE  REPUBLICAN CURRENTLY GOT  {"<<republicans<<"}  VOTE/VOTES SO FAR "<<endl;
    cout<<"\t\t====>THE  TRUDOS CURRENTLY GOT  {"<<trudos<<"} VOTE/VOTES SO FAR "<<endl;
    cout<<"\t\t====>THE  BATTLERS CURRENTLY GOT  {"<<battlers<<"}  VOTE/VOTES SO FAR "<<endl;

}



void result()                                                               //THE RESULT FUNCTION
{
    cout<<"Finalizing results "<<endl;


for (int i{0}; i<40; i++)
    {
        Sleep(100);
        cout<<char(178);
    }

    cout<<endl;

    //*****************************************************************//THESE 3 FUNC TO BE CALLED TO CHECK THE RESPECTIVE POSTITIONS***************************************
   checkWin();
   check2nd();
   check3rd4th();


}

//******************************************************************** FIRST POSIITION************************************************\\

void checkWin()
{
            if(democrates>republicans && democrates>trudos && democrates>battlers)
            {
                cout<<"\t\t====>THE DEMOCRATES WON THE SEAT with : "<<democrates<< "  VOTE/VOTES "<<endl;
            }

            else  if(republicans>democrates && republicans>trudos && republicans>battlers)
            {
                cout<<"\t\t====>THE REPUBLICANS WON THE SEAT with : "<<republicans<<"  VOTE/VOTES "<<endl;
            }

            else if (trudos>democrates && trudos>republicans && trudos>battlers)
            {
                cout<<"\t\t====>THE TRUDOS WON THE SEAT with : "<<trudos<<"  VOTE/VOTES "<<endl;
            }

            else if (battlers>democrates && battlers>trudos && battlers>republicans )
            {
                cout<<"\t\t====>THE BATTLERS WON THE SEAT with : "<<battlers<<"  VOTE/VOTES "<<endl;
            }
}


//*****************************************************************************2ND POSITION***************************************************\\

void check2nd()
{
     if(democrates>republicans && democrates>trudos && democrates>battlers)
     {
         if (republicans>trudos && republicans>battlers)
                {
                    cout<<"\t\t====>THE REPUBLICANS are on 2nd position with : " <<republicans<<"  VOTE/VOTES. "<<endl;

                }

                else if (trudos>republicans && trudos>battlers)
                {
                    cout<<"\t\t====>THE TRUDOS are on 2nd position with : " <<trudos<<"  VOTE/VOTES. "<<endl;

                }

                else if (battlers>republicans && trudos<battlers)
                {
                    cout<<"\t\t====>THE BATTLERS are on 2nd position with : " <<trudos<<"  VOTE/VOTES. "<<endl;
                }
     }

     else if (republicans>democrates && republicans>trudos && republicans>battlers)
        {

                if (democrates>trudos && democrates>battlers)
                {
                    cout<<"\t\t====>THE DEMOCRATES are on 2nd position with : " <<democrates<<" VOTE/VOTES. "<<endl;

                }

                else if (trudos>democrates && trudos>battlers)
                {
                    cout<<"\t\t====>THE TRUDOS are on 2nd position with : " <<trudos<<" VOTE/VOTES. "<<endl;
                }

                else if (battlers>democrates && trudos<battlers)
                {
                    cout<<"\t\t====>THE BATTLERS are on 2nd position with : " <<battlers<<" VOTE/VOTES. "<<endl;
                }

        }

        else if (trudos>democrates && trudos>republicans && trudos>battlers )
        {
                if (democrates>republicans && democrates>battlers)
                {
                    cout<<"\t\t====>THE DEMOCRATES are on 2nd position with : " <<democrates<<" VOTE/VOTES. "<<endl;
                }

                else if (republicans>democrates && republicans>battlers)
                {
                    cout<<"\t\t====>THE REPUBLICANS are on 2nd position with : " <<republicans<<" VOTE/VOTES. "<<endl;
                }

                else if (battlers>democrates && republicans<battlers)
                {
                    cout<<"\t\t====>THE BATTLERS are on 2nd position with : " <<battlers<<" VOTE/VOTES. "<<endl;
                }
        }

        else if (battlers>democrates && battlers>republicans && battlers>trudos)
        {
                    if (democrates>republicans && democrates>trudos)
                {
                    cout<<"\t\t====>THE DEMOCRATES are on 2nd position with : " <<democrates<<" VOTE/VOTES. "<<endl;
                }

                else if (republicans>democrates && republicans>trudos)
                {
                    cout<<"\t\t====>THE REPUBLICANS are on 2nd position with : " <<republicans<<" VOTE/VOTES. "<<endl;
                }

                else if (trudos>democrates && republicans<trudos)
                {
                    cout<<"\t\t====>THE TRUDOS are on 2nd position with : " <<trudos<<" VOTE/VOTES. "<<endl;
                }
        }



}

//******************************************************************************************** 3RD 4TH OR DRAW********************************************************\\

void check3rd4th()
{
    if (democrates==republicans && republicans==trudos && trudos==battlers)
        {
                cout<<"All parties stand equall "<<endl;
                cout<<"\t\t====>THE DEMOCRATES  { "<<democrates  <<" } VOTE/VOTES "<<endl;
                cout<<"\t\t====>THE REPUBLICANS { "<<republicans  <<" } VOTE/VOTES "<<endl;
                cout<<"\t\t====>THE TRUDOS {"<<trudos  <<"} VOTE/VOTES "<<endl;
                cout<<"\t\t====>THE BATTLERS {"<<battlers  <<" VOTE/VOTES "<<endl;
        }

    else if(democrates==republicans && democrates==trudos && democrates!=battlers)
        {
            cout<<"\t\t====>THE DEMOCRATES, THE REPUBLICANS and THE TRUDOS stand equal with : "<< democrates << " VOTE/ VOTES"<<endl;
            if (battlers<democrates)
            {
                cout<<"\t\t====>THE BATTLERS got : "<<battlers<<" VOTE/VOTES "<<endl;
            }
        }

        else if  (democrates==republicans && democrates==battlers && democrates!=trudos)
        {
            cout<<"\t\t====>THE DEMOCRATES, THE REPUBLICANS and THE BATTLERS stand equal with : "<< democrates << " VOTE/ VOTES"<<endl;
            if (trudos<democrates)
            {
                cout<<"\t\t====>THE TRUDOS got : "<<trudos<<" VOTE/VOTES "<<endl;
            }
        }

        else if  (democrates==trudos && democrates==battlers && democrates!=republicans)
        {
            cout<<"\t\t====>THE DEMOCRATES, THE TRUDOS and THE BATTLERS stand equal with : "<< democrates << " VOTE/ VOTES"<<endl;
            if (republicans<democrates)
            {
                cout<<"\t\t====>THE REPUBLICANS got : "<<republicans<<" VOTE/VOTES "<<endl;
            }
        }

        else if  (trudos==republicans && trudos==battlers && trudos!=democrates)
        {
            cout<<"\t\t====>THE TRUDOS, THE REPUBLICANS and THE BATTLERS stand equal with : "<< trudos<< " VOTE/ VOTES"<<endl;
            if (trudos>democrates)
            {
                cout<<"\t\t====>THE DEMOCRATES got : "<<democrates<<" VOTE/VOTES "<<endl;
            }
        }
        else if (trudos==battlers && democrates==republicans)
        {
            cout<<"\t\t====>THE DEMOCRATES and THE REPUBLICANS stand equal with : "<<democrates<< " VOTE/VOTES"<<endl;
            cout<<"\t\t====>THE TRUDOS and THE BATTLERS stand equal with : "<< trudos <<" VOTE/VOTES"<<endl;
        }

        else if (trudos==democrates && battlers==republicans)
        {
            cout<<"\t\t====>THE REPUBLICANS and THE BATTLERS stand equal with : "<<republicans<< " VOTE/VOTES"<<endl;
            cout<<"\t\t====>THE TRUDOS and THE DEMOCRATES stand equal with : "<< trudos <<" VOTE/VOTES"<<endl;
        }
        else if (trudos==republicans && democrates==battlers)
        {
            cout<<"\t\t====>THE DEMOCRATES and THE BATTLERS stand equal with : "<<democrates<< " VOTE/VOTES"<<endl;
            cout<<"\t\t====>THE TRUDOS and THE REPUBLICANS stand equal with : "<< trudos <<" VOTE/VOTES"<<endl;
        }

     else if(democrates>republicans && democrates>trudos && democrates>battlers)
    {
        if (republicans>trudos && republicans>battlers)
        {
                if(trudos>battlers)
                        {
                            cout<<"\t\t====>THE TRUDOS are on 3rd position with : "<<trudos<<" VOTE/VOTES. "<<endl;
                            cout<<"\t\t====>THE BATTLERS are on 4th position with : "<<battlers<<" VOTE/VOTES. "<<endl;
                        }
                else if (battlers>trudos)
                        {
                            cout<<"\t\t====>THE TRUDOS are on 4th position with : "<<trudos<<" VOTE/VOTES. "<<endl;
                            cout<<"\t\t====>THE BATTLERS are on 3rd position with : "<<battlers<<" VOTE/VOTES. "<<endl;
                        }
                else if (battlers=trudos)
                        {
                            cout<<"\t\t====>THE TRUDOS and THE BATTLERS stand equal with : " <<battlers <<" VOTE/VOTES"<<endl;
                        }
        }

        else if (trudos>republicans && trudos>battlers)
                {
                    if(republicans>battlers)
                        {
                            cout<<"\t\t====>THE REPUBLICANS are on 3rd position with : "<<republicans<<" VOTE/VOTES. "<<endl;
                            cout<<"\t\t====>THE BATTLERS are on 4th position with : "<<battlers<<" VOTE/VOTES. "<<endl;
                        }

                   else if(republicans<battlers)
                        {
                            cout<<"\t\t====>THE BATTLERS are on 3rd position with : "<<battlers<<" VOTE/VOTES. "<<endl;
                            cout<<"\t\t====>THE  REPUBLICANS are on 4th position with : "<<republicans<<" VOTE/VOTES. "<<endl;
                        }

                    else if (republicans=battlers)
                        {
                            cout<<"\t\t====>THE BATTLERS and THE REPUBLICANS stand equal with : " <<republicans <<" VOTE/VOTES"<<endl;
                        }
                }

                else if (battlers>republicans && trudos<battlers)
                {
                    if(republicans>trudos)
                        {
                            cout<<"\t\t====>THE REPUBLICANS are on 3rd position with : "<<republicans<<" VOTE/VOTES. "<<endl;
                            cout<<"\t\t====>THE TRUDOS are on 4th position with : "<<trudos<<" VOTE/VOTES. "<<endl;
                        }

                   else if(trudos>republicans)
                        {
                            cout<<"\t\t====>THE TRUDOS are on 3rd position with : "<<trudos<<" VOTE/VOTES. "<<endl;
                            cout<<"\t\t====>THE  REPUBLICANS are on 4th position with : "<<republicans<<" VOTE/VOTES. "<<endl;
                        }

                    else if (republicans=trudos)
                        {
                            cout<<"\t\t====>THE TRUDOS and THE RPEUBLICANS stand equal with : " <<battlers <<" VOTE/VOTES"<<endl;
                        }
                }
        }

    else if (republicans>democrates && republicans>trudos && republicans>battlers)
        {
                if (democrates>trudos && democrates>battlers)
                {
                    if(trudos>battlers)
                        {
                            cout<<"\t\t====>THE TRUDOS are on 3rd position with : "<<trudos<<" VOTE/VOTES. "<<endl;
                            cout<<"\t\t====>THE BATTLERS are on 4th position with : "<<battlers<<" VOTE/VOTES. "<<endl;
                        }
                    else if (battlers>trudos)
                        {
                            cout<<"\t\t====>THE TRUDOS are on 4th position with : "<<trudos<<" VOTE/VOTES. "<<endl;
                            cout<<"\t\t====>THE BATTLERS are on 3rd position with : "<<battlers<<" VOTE/VOTES. "<<endl;
                        }
                     else if (battlers=trudos)
                        {
                            cout<<"\t\t====>THE TRUDOS and THE BATTLERS stand equal with : " <<battlers <<" VOTE/VOTES"<<endl;
                        }

                }

                else if (trudos>democrates && trudos>battlers)
                {
                    if(democrates>battlers)
                        {
                            cout<<"\t\t====>THE DEMOCRATES are on 3rd position with : "<<democrates<<" VOTE/VOTES. "<<endl;
                            cout<<"\t\t====>THE BATTLERS are on 4th position with : "<<battlers<<" VOTE/VOTES. "<<endl;
                        }

                   else if(democrates<battlers)
                        {
                            cout<<"\t\t====>THE BATTLERS are on 3rd position with : "<<battlers<<" VOTE/VOTES. "<<endl;
                            cout<<"\t\t====>THE  DEMOCRATES are on 4th position with : "<<democrates<<" VOTE/VOTES. "<<endl;
                        }
                     else if (democrates=battlers)
                        {
                            cout<<"\t\t====>THE DEMOCRATES and THE BATTLERS stand equal with : " <<battlers <<" VOTE/VOTES"<<endl;
                        }
                }

                else if (battlers>democrates && trudos<battlers)
                {
                    if(democrates>trudos)
                        {
                            cout<<"\t\t====>THE DEMOCRATES are on 3rd position with : "<<democrates<<" VOTE/VOTES. "<<endl;
                            cout<<"\t\t====>THE TRUDOS are on 4th position with : "<<trudos<<" VOTE/VOTES. "<<endl;
                        }

                   else if(trudos>democrates)
                        {
                            cout<<"\t\t====>THE TRUDOS are on 3rd position with : "<<trudos<<" VOTE/VOTES. "<<endl;
                            cout<<"\t\t====>THE  DEMOCRATES are on 4th position with : "<<democrates<<" VOTE/VOTES. "<<endl;
                        }
                    else if (trudos=democrates)
                      {
                            cout<<"\t\t====>THE TRUDOS and THE DEMOCRATES stand equal with : " <<trudos <<"VOTE/VOTES " <<endl;
                      }
        }}

        else if (trudos>democrates && trudos>republicans && trudos>battlers)
        {
                if (democrates>republicans && democrates>battlers)
                {
                    if(republicans>battlers)
                        {
                            cout<<"\t\t====>THE REPUBLICANS are on 3rd position with : "<<republicans<<" VOTE/VOTES. "<<endl;
                            cout<<"\t\t====>THE BATTLERS are on 4th position with : "<<battlers<<" VOTE/VOTES. "<<endl;
                        }
                    else if (battlers>republicans)
                        {
                            cout<<"\t\t====>THE REPUBLICNS are on 4th position with : "<<republicans<<" VOTE/VOTES. "<<endl;
                            cout<<"\t\t====>THE BATTLERS are on 3rd position with : "<<battlers<<" VOTE/VOTES. "<<endl;
                        }
                    else if (republicans=battlers)
                        {
                            cout<<"\t\t====>THE BATTLERS and THE REPUBLICANS stand equal with : " <<battlers <<" VOTE/VOTES"<<endl;
                        }
                }

                else if (republicans>democrates && republicans>battlers)
                {
                   if(democrates>battlers)
                        {
                            cout<<"\t\t====>THE DEMOCRATES are on 3rd position with : "<<democrates<<" VOTE/VOTES. "<<endl;
                            cout<<"\t\t====>THE BATTLERS are on 4th position with : "<<battlers<<" VOTE/VOTES. "<<endl;
                        }

                   else if(democrates<battlers)
                        {
                            cout<<"\t\t====>THE BATTLERS are on 3rd position with : "<<battlers<<" VOTE/VOTES. "<<endl;
                            cout<<"\t\t====>THE  DEMOCRATES are on 4th position with : "<<democrates<<" VOTE/VOTES. "<<endl;
                        }
                    else if (democrates=battlers)
                        {
                            cout<<"\t\t====>THE BATTLERS and THE DEMOCRATES stand equal with : " <<trudos <<" VOTE/VOTES"<<endl;
                        }
                }

                else if (battlers>democrates && republicans<battlers)
                {
                    if(democrates>republicans)
                        {
                            cout<<"\t\t====>THE DEMOCRATES are on 3rd position with : "<<democrates<<" VOTE/VOTES. "<<endl;
                            cout<<"\t\t====>THE REPUBLICANS are on 4th position with : "<<republicans<<" VOTE/VOTES. "<<endl;
                        }

                   else if(republicans>democrates)
                        {
                            cout<<"\t\t====>THE REPUBLICANS are on 3rd position with : "<<republicans<<" VOTE/VOTES. "<<endl;
                            cout<<"\t\t====>THE  DEMOCRATES are on 4th position with : "<<democrates<<" VOTE/VOTES. "<<endl;
                        }
                    else if (republicans=democrates)
                    {
                        cout<<"\t\t====>THE DEMOCRATES and THE REPUBLICANS stands equal with : "<<republicans<<" VOTE/VOTES "<<endl;
                    }
                }
        }

        else if (battlers>democrates && battlers>republicans && battlers>trudos)
        {
                if (democrates>republicans && democrates>trudos)
                {
                    if(republicans>trudos)
                        {
                            cout<<"\t\t====>THE REPUBLICANS are on 3rd position with : "<<republicans<<" VOTE/VOTES. "<<endl;
                            cout<<"\t\t====>THE TRUDOS are on 4th position with : "<<trudos<<" VOTE/VOTES. "<<endl;
                        }
                    else if (trudos>republicans)
                        {
                            cout<<"\t\t====>THE REPUBLICNS are on 4th position with : "<<republicans<<" VOTE/VOTES. "<<endl;
                            cout<<"\t\t====>THE TRUDOS are on 3rd position with : "<<trudos<<" VOTE/VOTES. "<<endl;
                        }
                     else if (republicans=trudos)
                        {
                            cout<<"\t\t====>THE TRUDOS and THE RPEUBLICANS stand equal with : " <<battlers <<" VOTE/VOTES"<<endl;
                        }
                }

                else if (republicans>democrates && republicans>trudos)
                {
                    if(democrates>trudos)
                        {
                            cout<<"\t\t====>THE DEMOCRATES are on 3rd position with : "<<democrates<<" VOTE/VOTES. "<<endl;
                            cout<<"\t\t====>THE TRUDOS are on 4th position with : "<<trudos<<" VOTE/VOTES. "<<endl;
                        }

                   else if(democrates<trudos)
                        {
                            cout<<"\t\t====>THE TRUDOS are on 3rd position with : "<<trudos<<" VOTE/VOTES. "<<endl;
                            cout<<"\t\t====>THE  DEMOCRATES are on 4th position with : "<<democrates<<" VOTE/VOTES. "<<endl;
                        }
                     else if (democrates=trudos)
                        {
                            cout<<"\t\t====>THE TRUDOS and THE DEMOCRATES stand equal with : " <<battlers <<" VOTE/VOTES"<<endl;
                        }
                }

                else if (trudos>democrates && republicans<trudos)
                {
                    if(democrates>republicans)
                        {
                            cout<<"\t\t====>THE DEMOCRATES are on 3rd position with : "<<democrates<<" VOTE/VOTES. "<<endl;
                            cout<<"\t\t====>THE REPUBLICANS are on 4th position with : "<<republicans<<" VOTE/VOTES. "<<endl;
                        }

                   else if(republicans>democrates)
                        {
                            cout<<"\t\t====>THE REPUBLICANS are on 3rd position with : "<<republicans<<" VOTE/VOTES. "<<endl;
                            cout<<"\t\t====>THE  DEMOCRATES are on 4th position with : "<<democrates<<" VOTE/VOTES. "<<endl;
                        }
                     else if (democrates=republicans)
                        {
                            cout<<"\t\t====>THE DEMOCRATES and THE RPEUBLICANS stand equal with : " <<battlers <<" VOTE/VOTES"<<endl;
                        }
                }
        }



}
