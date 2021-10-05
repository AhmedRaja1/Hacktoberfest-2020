#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
string NameOfEvent, CustomerName;	// Name of Event + Customer Name
int NumberOfGuests;	// Number of Guests in attendance
int NumberOfMinutes;	// Number of Minutes in the event

// Information input (Events name and amounts)
cout<<"\n\n					**************************************"<<endl;
cout<<"					   Give some info about your Event";
cout<<"\n\n					**************************************"<<endl;
cout << "\n					Enter the name of the event: " ;
getline(cin, NameOfEvent);
cout << "\n					Enter the customer's full name: " ;
getline(cin, CustomerName);
cout << "\n					Enter the number of guests: " ;
cin >> NumberOfGuests;
cout << "\n					Enter the number of minutes in the event: " ;
cin >> NumberOfMinutes;
cout<<"\n\n					**************************************"<<endl;
cout<<"	 				   Event estimate for "<<NameOfEvent;
cout<<"\n\n					**************************************"<<endl;
cout << "					Fall Dinner:     "<<endl;
cout << "					Event estimate for:  " << CustomerName << endl;

int NumberOfServers, Cost1;
double CostForOneServer,Test, TotalFoodCost, AverageCost, Cost2, DepositAmount,TotalCost;

const double CostPerHour = 18.50;
const double CostPerMinute = .40;
const double CostOfDinner = 20.70;

// Get Number Of Servers
Test = NumberOfGuests / 10;
NumberOfServers = ceil(Test);

// Get Cost Of One Server
Cost1 = (NumberOfMinutes / 60) * CostPerHour;
Cost2 = (NumberOfMinutes % 60) * CostPerMinute;
CostForOneServer = Cost1 + Cost2;

// Get Cost For Food
TotalFoodCost = NumberOfGuests * CostOfDinner;

// Get Average Cost Per Person
AverageCost = TotalFoodCost / NumberOfGuests;

// Get Total Cost
TotalCost = TotalFoodCost + (CostForOneServer * NumberOfServers);

// Get Deposit Amount (25%)
DepositAmount = TotalCost * .25;

// Print values above
cout << "					Number Of Server: " << NumberOfServers << fixed << setprecision(2) << endl;
cout << "					The Cost for Servers: " << setw(5) << CostForOneServer << endl;
cout << "					The Cost for Food is: " << setw(5) << TotalFoodCost << endl;
cout << "					Avergae Cost Per Person: " << setw(5) << AverageCost << endl;
cout << "\n					Total cost is: " << setw(5) << TotalCost << endl;

cout << "					Please deposite 25% to reserve the event" << endl;
cout << "					The deposit needed is: " << setw(5) << DepositAmount << endl;

return 0;
}
