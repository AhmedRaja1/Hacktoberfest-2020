#include <iostream>

using namespace std;

void array_test()
{
    int arr[5];

    for(int i = 0; i < 5; i++)
    {
        arr[i] = i+i;
        cout<<i+1<<") "<<arr[i]<<endl;
    }
    
}

int main()
{
     array_test();

    return 0;
}
