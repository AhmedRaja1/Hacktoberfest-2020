#include <iostream.h>
#include <conio.h>
#include <string>
#include <stdlib.h>
#include <time.h>
#include <iomanip.h>
#include <fstream.h>
using namespace std;
string result = "";


    string text;

string encrypt(string text, int s)
{
    for (int i=0;i<text.length();i++)
    {
        if (isupper(text[i]))
            result += char(int(text[i]+s-65)%26 +65);
    	 else
        result += char(int(text[i]+s-97)%26 +97);
    }


    return result;
}




int main()
{

cout<<"Enter a string = ";
cin>>text;

   int i=1;
if(i==1){
srand(time(0));
i++;         }

//    int s = -4;
int s;
if(i==2){

s =1+(rand()%5);
  int ij=1;
while(ij<=rand()){
ij++;
s*=(-1);

}
      i++;   }


    cout << "Text : " << text;
    cout << "\nShift: " << s;



    result=encrypt(text, s);


    int g=26;

//    fnd=deencrypt(text, g);

                  ofstream myfile;
                 myfile.open("data.txt");
                 myfile<<result;
                 myfile.close();

                 ofstream my;
                 my.open("num.txt");
                 my<<s;
                 my.close();


    cout<<"\n\n\nresult = "<<result<<"\n\n\n";


getch ();
return 0;
}














