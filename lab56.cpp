#include<iostream>
using namespace std;
int main()
{
	int x[10];
	cout<<"Please input numbers: ";
	for(int i=0 ;i<10 ;i++)
		{
			cin>>x[i];
		}
		cout<<"output "<<endl;
			for(int i=9 ;i>=0 ;i--)
				{
					cout<<x[i];
				}
	return 0;
}
