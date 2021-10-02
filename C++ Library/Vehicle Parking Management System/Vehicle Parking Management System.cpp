#include <iostream>
using namespace std;

class Parking   //class
{
public:
    //data members
    int BparkingSlot=30;
    int GparkingSlot=40;
    int TparkingSlot=150;
    int ManagerPerDayPay=250;
    int FloorAttendPerDayPay=120;
    int GuardPerDayPay=80;

    //member functions/method
    int VanPlusHiceIn(int VanIn);
    int VanPlusHiceOut(int VanOut);
    int CarIn(int c1);
    int CarOut(int c2);
    int MotoBikesBiIn(int b1);
    int MotoBikesBiOut(int b2);
    int Salaries();
};
//main function
int main()
{

   Parking Basement, GroundFloor, TopFloor, Salary;//objects to class Parking

    int totalVanParked=0,   VanCharges=0;
    int totalCarParked=0,   CarCharges=0;
    int totalMotoParked=0,  MotoCharges=0;
    int TotalAmount=0,      SalariesAmount=0;
    float tax;

while(true)
{
    cout<<"Press 1 when a Van or Hi-aces in: "<<endl;
    cout<<"Press 2 when a Van or Hi-aces out: "<<endl;
    cout<<"Press 3 to check number of Van or Hi-aces parked in :"<<endl<<endl;
    cout<<"Press 4 when a car comes for parking: "<<endl;
    cout<<"Press 5 when a car out from parking: "<<endl;
    cout<<"Press 6 to check number of car parked in ground floor : "<<endl<<endl;
    cout<<"Press 7 when a motor-bike or bicycle comes for parking: "<<endl;
    cout<<"Press 8 when a motor-bike or bicycle out from parking: "<<endl;
    cout<<"Press 9 to check number of motor-bikes or bicycle parked in Top :"<<endl<<endl;
    cout<<"press 0 to GENERATE REPORT "<<endl;
    cout<<endl;

    int input;
    cin>>input;
    cout<<"You  Entered : "<<input<<endl;

if(input==1)
    {
        totalVanParked=Basement.VanPlusHiceIn(totalVanParked);
        VanCharges=50*totalVanParked;
        cout<<"Van charges collected till now : "<<VanCharges<<endl<<endl;
    }
else if(input==2)
    {
        totalVanParked=Basement.VanPlusHiceOut(totalVanParked);
    }
else if (input==3)
    {
        cout<<"\nThe number of van or hi-aces parked :  "<<totalVanParked<<endl<<endl;
    }
else if(input==4)
    {
        totalCarParked=GroundFloor.CarIn(totalCarParked);
        CarCharges=totalCarParked*30;
        cout<<"\nCar charges collected till now : "<<CarCharges<<endl<<endl;
    }
else if(input==5)
    {
        totalCarParked=GroundFloor.CarOut(totalCarParked);
    }
else if (input==6)
    {
        cout<<"\nThe number of car parked :  "<<totalCarParked<<endl<<endl;
    }
else if(input==7)
    {
        totalMotoParked=TopFloor.MotoBikesBiIn(totalMotoParked);
        MotoCharges=totalMotoParked*20;
        cout<<"\nMotorBikes and Bicycle charges collected till now : "<<MotoCharges<<endl<<endl;
    }
else if(input==8)
    {
        totalMotoParked=TopFloor.MotoBikesBiOut(totalMotoParked);
    }
else if (input==9)
    {
        cout<<"\nThe number of Motorbikes and bicycle parked in Top Floor : "<<totalMotoParked<<endl<<endl;
    }
else if(input==0)
    {
        cout<<endl;
        cout<<"\t\t************************************************************************\n\n";
        cout<<"\t\t\t\tVehicle Parking Management System\n\n";
        cout<<"\t\t\t\t   REPORT AT THE END OF THE DAY"<<endl;
        TotalAmount = VanCharges + CarCharges + MotoCharges;
        cout<<endl;
        cout<<"\t\tTotal Amount = "<<TotalAmount<<endl;
        tax=0.05; //5 divides by 100
        tax = tax * TotalAmount;
        TotalAmount = TotalAmount - tax;
        SalariesAmount = Salary.Salaries();
        cout<<"\t\t5% tax of the total amount paid to the Govt = "<<tax<<endl;
        cout<<"\t\tThe Amount after paying 5% tax to govt is ="<<TotalAmount<<endl;
        if (TotalAmount>SalariesAmount)
        {
        cout<<"\t\tThe Amount after paying Salaries of employees including Manager = "<<TotalAmount-SalariesAmount<<endl;
        }
        else
            cout<<"\t\tSorry wages are not yet given to the employees "<<endl;
        cout<<"\n\t\t************************************************************************\n";
        break;
    }
}
return 0;
}
//IN AND OUT fUNCTIONS FOR VAN OR HI-ACES IN THE BASEMENT
int Parking::VanPlusHiceIn(int VanIn)
{
    if(VanIn<=BparkingSlot)
    {
        VanIn++;
    }
    else
    {
         cout<<"No-more space for van "<<endl;
    }
    cout<<endl;
    return VanIn;
}

int Parking :: VanPlusHiceOut(int VanOut)
{
    VanOut--;
    return VanOut;
}


//IN AND OUT fUNCTIONS FOR CARS IN THE GROUND FLOOR
int Parking :: CarIn(int c1)
{
    if(c1<=GparkingSlot)
    {
        c1++;
    }
    else
    {
        cout<<"No-more space for cars "<<endl;
    }
return c1;
}

int Parking :: CarOut(int c2)
{
    c2--;
    return c2;
}


//IN AND OUT fUNCTIONS FOR MOTOR-BIKES IN THE TOP FLOOR
int Parking :: MotoBikesBiIn(int b1)
{
    if(b1<=TparkingSlot)
    {
        b1++;
    }
    else
    {
        cout<<"No-more Space For bikes "<<endl;
    }
return b1;
}

int Parking :: MotoBikesBiOut(int b2)
{
    b2--;
    return b2;
}


//FUNCTION FOR SALARIES
int Parking ::Salaries()
{
    int Totalsal=ManagerPerDayPay+(GuardPerDayPay*2)+(FloorAttendPerDayPay*3);
    return Totalsal;
}
