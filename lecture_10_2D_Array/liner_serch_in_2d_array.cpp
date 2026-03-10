#include <iostream>
using namespace std;

bool findkey(int arr[][3], int rows, int cols, int key)
{

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (arr[i][j] == key)
            {
                return true;
            }
        }
    }
    return false;
}

int main()
{
    int arr[3][3];
    int rows = 3;
    int cols = 3;
    int key;
    cout << "Enter the key" << endl;
    cin >> key;

    // input
    cout << "Enter the array elements" << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> arr[i][j];
        }
    }
    if (findkey(arr, rows, cols, key))
    {
        cout << "present" << endl;
    }
    else
    {
        cout << "not present" << endl;
    }
    return 0;
}