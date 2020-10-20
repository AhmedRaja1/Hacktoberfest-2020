#include <iostream>
#include <fstream>
#include <string.h>

using namespace std;

int search( string word)
{
    string path="words.txt" ;

    ifstream file( path.c_str() ) ;

    int countwords = 0 ;

    if( file.is_open() )
    {
        //cout << "File '" << path << "' opened."<<endl ;


        string candidate ;
        while( file >> candidate ) // for each candidate word read from the file
        {
            if( word == candidate )
            {
                countwords++;

            }
            //cout<<"."<<endl;
        }


    }

    else
    {
        cout<< "Error! File not found!"<<endl;
        return 0 ;
    }

    //cout << "The word '" << word << "' has been found " << countwords << " times."<<endl;

    return countwords;

}

int check=0;
int x=0;

void permute(string a, int l, int r)
{
    int i;
    if (l == r)
    {
        cout<<a<<endl;
        x++;
        cout<<x<<endl;

        check=search(a);
        //cout<<check<<endl;
        if(check==1)
        {
            cout<<"Did you mean '"<<a<<"' ?"<<endl;
        }

    }
    else
    {
            for (i = l; i <= r; i++)
            {
                if(check==1)
                {
                    //break;  //Comment this out if want to view all correct words
                }
                swap(a[l], a[i]);
                permute(a, l+1, r);
                swap(a[l], a[i]); //backtrack


            }

    }


}



int main()
{


    cout << "Write the word you want to Search: ";
    string word ;
    cin >> word ;
    cout<<endl;

    int check=search(word);

    if(check==1)
    {
        cout<<"Word is Correct"<<endl;
    }
    else
    {
        //cout<<"Word is wrong"<<endl;
        //string s = word;
        //string correct;
        int n = word.length();
        permute(word, 0, n-1);
        //cout<<"No Nearest Word found"<<endl;

        //cout<<"word not exist"<<endl;
    }



}
