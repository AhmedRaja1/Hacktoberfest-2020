// name : Waliiya Rizwan
// section: B
// reg. no : 19PWCSE1766
// Project title : COVID-19 VIRTUAL ASSISTANT

#include<iostream>
#include<string>
#include<stdlib.h>
using namespace std;
void intro();
struct patient_reg{
   string name;
   int age;                // data members for registration of user
   string gender;
   string area;
};

void checkup();// functions used for checkup
string patient(patient_reg);// function for registration
int symptoms();// function for Q/A for symptoms
int result(int);// function for displaying result

void helpline();//function used for helpline

void track();//function and class used for tracking
class tracking{
    public:

    int confirm;
	int suspect;
	int death;
	int recover;

    void create_case();
    void display_case();
    void modify_case();
};
void tracking::create_case(){

    cout<<"\t\t====>Enter confirmed cases"<<endl;
    cin>>confirm;
    cout<<"\t\t====>Enter suspected cases"<<endl;
    cin>>suspect;
    cout<<"\t\t====>Enter death cases"<<endl;
    cin>>death;
    cout<<"\t\t====>Enter recovered cases"<<endl;
    cin>>recover;
    system("CLS");
    cout<<"\t\t====>Your information is added "<<endl;

}
void tracking::display_case()
{

    cout<<"\n\n\t\tCOVID19 AFFECTED STATE LIST\n\n";
	cout<<"==========================================================================================================\n";
	cout<<"SUSPECT\t\tCONFIRM\t\tDEATH\t\tRECOVER \n";
	cout<<"==========================================================================================================\n";
    cout<<suspect<<"\t\t"<<confirm<<"\t\t"<<death<<"\t\t"<<recover;
}
void tracking::modify_case()
{

    cout<<"\n\nEnter The Suspected case : ";
	cin>>suspect;

	cout<<"\n\nModify The Confirmed case : ";
	cin>>confirm;


	cout<<"\n\nModify The Death case : ";
	cin>>death;

	cout<<"\n\nModify The Recovered case : ";
	cin>>recover;
}





int main()
{
    system("color 79");
    intro();
    patient_reg p1;
    patient(p1);

    menu:
    cout<<"\t\t-------------------------------------------------\n";
	cout<<"\t\t|\t1. Quick checkUp \t\t\t\t|\n";
	cout<<"\t\t-------------------------------------------------\n";
	cout<<"\t\t-------------------------------------------------\n";
	cout<<"\t\t|\t2. Tracking \t\t\t|\n";
	cout<<"\t\t-------------------------------------------------\n";
	cout<<"\t\t-------------------------------------------------\n";
	cout<<"\t\t|\t3. Helpline \t\t\t|\n";
	cout<<"\t\t-------------------------------------------------\n";
	cout<<"\t\t-------------------------------------------------\n";
	cout<<"\t\t|\t4. EXIT \t\t\t\t|\n";
	cout<<"\t\t-------------------------------------------------\n\n";
	int option;
    cout<<"\t\tSelect option(1-4): ";
	cin>>option;


    switch(option)
	{
		case 1:
            checkup();
			break;
        case 2:
            system("CLS");
            track();
            break;
        case 3:
            helpline();
            break;
        case 4:
            system("pause");     // to exit the menu
            break;
        default:
            system("CLS");
            cout<<"\n\n\t\t====>Wrong number entered!!!\n\t\t====>Please Try Again \n"<<endl;
            goto menu;

    }



}

void intro()
{

    cout<<"\n\n\n\t\t\t\t\t\t\tWELCOME \n\n\n\t\t\t\t\t\t\t   TO";
	cout<<"\n\n\n\t\t\t\t\t\tCOVID-19\tVIRTUAL\tASSISTANT"<<endl;
}
string patient(patient_reg p1)
{
    cout<<"\n\t[ Please register your self ]"<<endl;
    cout<<"\n====>Enter your name\t"<<endl;
    getline(cin,p1.name);
    cout<<"\n====>Enter your age\t"<<endl;
    cin>>p1.age;
    cout<<"\n====>Enter your Gender\t"<<endl;
    cin>>p1.gender;
    cout<<"\n====>Enter your Area\t\n"<<endl;
    cin>>p1.area;
    system("CLS");

    cout<<"Hello  "<<p1.name<<" !\n\n"<<endl;

}

int symptoms()
{

    string a,b,c,d,e,f,g;

    cout<<"You will be asked a few questions as per the mnemonics of covid-19 diagnosis"<<endl;
    cout<<"Kindly make sure you are entering correct details "<<endl;
    cout<<"\n\t Enter Yes or No"<<endl;
    int sum=0;
    int s4,s6,s7;
    float s1,s2,s3,s5,s8;
    cout<<"\nDo you have dry cough?"<<endl;
    cin>>a;
    if(a=="Yes" || a=="yes" || a=="YES" )
    {
      s1=0.5;
    }
    else {s1=0;}
    cout<<"Do you have fever of more than 38.6C for more than 3 days"<<endl;
    cin>>b;
    if(b=="Yes" || b=="yes" || b=="YES")
    {
     s2=0.5;
    }
    else {s2=0;}
    cout<<"Have you felt shortness of breath with rate of 24breaths /mint"<<endl;
    cin>>c;
    if(c=="Yes" || c=="yes" || c=="YES")
    {
      s3=0.5;
    }
    else {s3=0;}
    cout<<"have you been travelling within last 14 days"<<endl;
    cin>>d;
    if(d=="Yes" || d=="yes" || d=="YES")
    {
      s4=3;
    }
    else {s4=0;}
    cout<<"Do you have any sort of chest infection "<<endl;
    cin>>e;
    if(e=="Yes" || e=="yes" || e=="YES")
    {
      s5=0.5;
    }
    else {s5=0;}
    cout<<"Do you have any other chronic disease like Asthma, heart disease,cancer etc. for which you are taking medicines."<<endl;
    cin>>f;
    if(f=="Yes" || f=="yes" || f=="YES")
    {
      s6=1;
    }
    else {s6=0;}
    cout<<"Have you been in contact with a confirm or probable case of corona"<<endl;
    cin>>g;
    if(g=="Yes" || g=="yes" || g=="YES")
    {
      s7=2;
    }
    else {s7=0;}
     sum=s1+s2+s3+s4+s5+s6+s7;

return sum;
}
int result(int sum)
{
    if (sum<3)
    {
        cout<<"\t You seem to be having mild symptoms"<<endl;
        cout<<"\tYou are advised to isolate yourself at home"<<endl;

    }
    else if(5>sum>=3)
    {
        cout<<"\t You have been suspected to have that virus"<<endl;
        cout<<"\t You are recommended to do COVID-19 test in the nearby hospital"<<endl;

    }
    else if(sum>5)
    {
        cout<<"\t No need to Panic You  might have high chance of having Corona Virus"<<endl;
        cout<<"\t You are highly advised to visit nearby hospital to get necessary treatment"<<endl;

    }
    else
    {
        cout<<"You are normal"<<endl;
        cout<<"Stay Safe and Healthy"<<endl;
    }
}

void helpline()
{
    cout<<"\n\n HERE ARE EMERGENCY HELPLINES\n"<<endl;
    cout<<" Emergency Numbers:"<<endl;
    cout<<"========================================"<<endl;
    cout<<"1190, 1166, 080099000"<<endl;
    cout<<"========================================"<<endl;

}
void checkup()
{
    int sum= symptoms();
    result(sum);
}
//tracking
void track(){
tracking cases;
 int ch;

            menu:
            cout<<"\t\t\t TRACKING MENU\n"<<endl;
            cout<<"\t\t-------------------------------------------------\n";
            cout<<"\t\t|\t1. Create cases\t\t\t\t|\n";
            cout<<"\t\t-------------------------------------------------\n";
            cout<<"\t\t-------------------------------------------------\n";
            cout<<"\t\t|\t2. display cases \t\t\t|\n";
            cout<<"\t\t-------------------------------------------------\n";
            cout<<"\t\t-------------------------------------------------\n";
            cout<<"\t\t|\t3. modify cases\t\t\t|\n";
            cout<<"\t\t-------------------------------------------------\n";
            cout<<"\t\t-------------------------------------------------\n";
            cout<<"\t\t|\t4. go back to main menu\t\t\t|\n";
            cout<<"\t\t-------------------------------------------------\n";
            cout<<"\t\tSelect option(1-4):"<<endl;
            cin>>ch;

                switch(ch)
                {
                    case 1:
                        cases.create_case();
                        goto menu;
                    case 2:
                        system("CLS");
                        cases.display_case();
                        break;
                    case 3:
                        cases.modify_case();
                        goto menu;
                    case 4:
                        system("CLS");
                        cout<<"Thank you"<<endl;
                        goto menu;
                    default:
                        system("CLS");
                        cout<<"\n\n\t\t====>Wrong number entered!!!\n\t\t====>Please Try Again \n"<<endl;
                        goto menu;

               }
    //system("CLS");

}
