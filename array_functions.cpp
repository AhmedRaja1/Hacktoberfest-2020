#include <iostream>

using namespace std;

void array_test(int a[])
{
    a[2] = 0;
    cout << "Inside Function" << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << a[i] << endl;
    }
}

int main()
{
    int arr[] = {1, 3, 6};
    array_test(arr);
    
    cout << "In main" << endl;

    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}