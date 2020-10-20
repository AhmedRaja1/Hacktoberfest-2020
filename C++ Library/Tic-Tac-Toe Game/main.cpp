#include <iostream>
#include<malloc.h>
using namespace std;

int main()
{
    char **arr=(char **)malloc(sizeof(char*)*4);
    for(int a=0;a<3;a++)
    {
        arr[a]=(char *)malloc(sizeof(char *)*4);
    }
    int value=0;
    int x,y;
    int x1,y1;
    for(int a=0;a<3;a++)
    {
        for(int b=0;b<3;b++)
        {
            arr[a][b]='@';
        }
    }
    for(int a=0;a<3;a++)
    {
        for(int b=0;b<3;b++)
        {
            cout<<arr[a][b]<<"  ";
        }
        cout<<endl;

    }
     bool checker=false,checker1=false;
    while(true)
    {
    cout<<"Enter X for player 1  : ";
    cin>>x;
    cout<<"Enter Y for player 1 : ";
    cin>>y;

    arr[x-1][y-1]='X';
   for(int l=0;l<3;l++)
    {
        for(int k=0;k<3;k++)
        {
            if(arr[l][k]=='X')
            {
                checker=true;
            }
            if(k!=0)
            {
            if(k%3==0 && checker==true)
            {
                cout<<"PLAYER 1 WON"<<endl;
            }
            }
        }
    }
    for(int l=0;l<3;l++)
    {
        for(int k=0;k<3;k++)
        {
            if(arr[l][0]=='X' || arr[l][1]=='X' || arr[l][2]=='X')
            {
                checker=true;
            }
            if(l==2 && checker==true)
            {
                cout<<"PLAYER 1 WON"<<endl;
            }
        }
    }
    cout<<"Enter X for player 2 : ";
    cin>>x1;
    cout<<"Enter Y for player 2 : ";
    cin>>y1;
    arr[x1-1][y1-1]='O';
    for(int l=0;l<3;l++)
    {
        for(int k=0;k<3;k++)
        {
            if(arr[l][k]=='O')
            {
                checker=true;
            }
            if(k!=0)
            {

            if(k%3==0 && checker==true)
            {
                cout<<"PLAYER 1 WON"<<endl;
            }
            }
        }
    }
    for(int l=0;l<3;l++)
    {
        for(int k=0;k<3;k++)
        {
            if(arr[l][0]=='O' || arr[l][1]=='O' || arr[l][2]=='O')
            {
                checker=true;
            }
            if(l==2 && checker==true)
            {
                cout<<"PLAYER 2 WON"<<endl;
            }
        }
    }
    if(value==8)
    {
        break;
    }
    value++;

    for(int a=0;a<3;a++)
    {
        for(int b=0;b<3;b++)
        {
            cout<<arr[a][b]<<"  ";
        }
        cout<<endl;
    }

    }


}
