#include <iostream>

using namespace std;

void array_test()
{
    int arr[5];

    for(int i = 0; i < 5; i++)
    {
        arr[i] = i;
    }

    for(int i = 0; i < 5; i++)
    {
        cout << arr[i] <<endl;
    }

    // int x;
    // cout << "x = " << x << endl;
    
}

int main()
{
     array_test();

    // Initialization at the time of declaration
    // int arr[] = {1, 5, 7, 11};
    // arr[3] = 2;
    // cout << arr[3] << endl;
    // cout << "Size of the array: " << sizeof(arr) << endl;
    // cout << "Length of the array: " << sizeof(arr)/sizeof(arr[2]) << endl;

    return 0;
}