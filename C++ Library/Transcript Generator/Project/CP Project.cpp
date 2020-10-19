#include <windows.h>                            //for opening browser
#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	string web, url, country, city;            //declaring strings for assigning data
	url="www.timeanddate.com/weather/";        //url of that weather website
	
	cout<<"enter country and city name\n";    //asking country and city name
	cin>>country>>city;                    
	web=url+country+"/"+city;                //creating url for that specific city
	cout<<web;
		
	ShellExecute(NULL, "open", web.c_str(), NULL, NULL, SW_SHOWNORMAL);  //function for opening url
	

return 0;	
}
