#include<iostream>
using namespace std;
int main()
{
	int x[10];
	int item;
	cout<<"Please enter an array: \n";
	for(int i=0 ;i<10 ;i++)
		{
			cin>>x[i];
		}
		cout<<"enter a number:  "<<endl;
			cin>>item;
		for(int i=0 ;i<10 ;i++)
		{
		
			if(item==x[i])
				{
					cout<<"The index of that number is: "<<i<<endl;
				}
		}
	return 0;
}
