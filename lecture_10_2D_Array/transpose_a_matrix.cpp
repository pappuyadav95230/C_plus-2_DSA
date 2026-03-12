#include <iostream>
using namespace std;

void printArray(int arr[][3], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void transpose(int arr[][3], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = i; j < cols; j++)
        {
            swap(arr[i][j], arr[j][i]);
        }
    }
}

int main()
{
    int arr[3][3];
    int rows = 3;
    int cols = 3;

    // input
    cout << "Enter the array elements" << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> arr[i][j];
        }
    }

    // printing
    cout << "Printing row wise" << endl;
    printArray(arr, rows, cols);
    // transpose
    transpose(arr, rows, cols);
    // printing
    cout << "Printing transpose row wise" << endl;
    printArray(arr, rows, cols);

    return 0;
}