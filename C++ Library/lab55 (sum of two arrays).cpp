#include<iostream>
using namespace std;
int main()
{
	int x[5];
	int y[5];
	int sum;
	for(int i=0 ;i<5 ;i++)
		{
			cin>>x[i];		
		}
	for(int i=0 ;i<5 ;i++)
		{
			cin>>y[i];		
		}
		cout<<"sum of two arrys is: "<<endl;
	for(int i=0 ;i<5 ;i++)
		{
			sum=x[i]+y[i];
			cout<<sum<<"\t";
		}

}
