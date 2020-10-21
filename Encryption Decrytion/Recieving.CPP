#include <iostream.h>
#include <conio.h>
#include <string>
#include <stdlib.h>
#include <time.h>
#include <iomanip.h>
#include <fstream.h>
using namespace std;





int main()
{
                string x;

ifstream th;
th.open("data.txt");
th>>x;
th.close();
int xyz=x.length();

         int y;
//    int s = -4;
ifstream thr;
thr.open("num.txt");
thr>>y;
thr.close();



    cout << "Text : " << x;
//   y=(-1*y);
y=(-1*y);
    cout << "\nShift: " << y;
  //     y=36;
//    y=26;

//    int g=26;

//    fnd=deencrypt(text, y);

     string fnd="   ";






          for (int i=0;i<xyz;i++)
    {
        if (isupper(x[i]))
            fnd += char(int(x[i]+y-65)%26 +65);
    	 else
        fnd += char(int(x[i]+y-97)%26 +97);
    }













 //   cout<<"\n\n\nresult = "<<result<<"\n\n\n";

    cout<<"\n\n\nderesult = "<<fnd<<"\n\n\n";


getch ();
return 0;
}




