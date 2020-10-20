#include <iostream>

using namespace std;

int main()
{
    int AN=40,GN;
    //AN actual number while GN is guessed number
    cout<<"ThIS PROGRAM IS A GUESS NUMBER GAME";

    cout << "\n GUESS A NUMBER" << endl;
    tryagain:
    cin>>GN;

    if (GN > AN & GN >= 45  )
    {
        if (GN > 40 & GN < 45)
    {
            cout<<" SO CLOSE!! GUESS A LIL BIT HIGHER";
    }
    else
    {
           cout<<"\n GUESS A LOWER NUMBER";
    }
    goto tryagain;
    else if (GN < AN)
    {
        cout<<"GUESS A  HIGHER NUMBER ";
        goto tryagain;

        if (GN <40 & GN >45 )
    {
            cout<<"SO CLOSE GUESS A LIL BIT LOWER";
    }

        goto tryagain;
    }
    else if (GN = AN)
    {
        cout<<"WOW YOU GUESSED RIGHT";
        goto tryagain;
    }
    else
    return 0;
}
