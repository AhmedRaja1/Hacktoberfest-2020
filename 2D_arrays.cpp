#include <iostream>

using namespace std;

int main()
{
    int arr[2][3] = {
                    {1, 2, 3}, 
                    {4, 5, 6}
                    };

    arr[1][2] = 0;

    for(int i = 0; i < 2; i++) // rows
    {
        for(int j = 0; j < 3; j++) // columns
            cout << arr[i][j] << "\t";
        
        cout << endl;
    }
    return 0;
}