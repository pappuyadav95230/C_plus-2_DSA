#include <iostream>
using namespace std;

// Function to print the sum of the row
void printRowWiseSum(int arr[][3], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        int sum = 0;
        for (int j = 0; j < cols; j++)
        {
            sum = sum + arr[j][i];
        }
        cout << sum << endl;
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
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << "printing sum row wise" << endl;
    printRowWiseSum(arr, rows, cols);
    return 0;
}