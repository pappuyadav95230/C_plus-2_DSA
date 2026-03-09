#include <iostream>
using namespace std;

int main()
{
    // int arr[2][3];
    int arr[3][3] =
        {
            {1, 2, 3},
            {4, 5, 6},
            {5, 6, 9}};
    // outer loop for row
    cout << "Printing Row wise" << endl;
    for (int i = 0; i < 3; i++)
    {
        // inner loop for column
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " "; 
        }
        cout << endl;
    }
    cout << "Printing column wise" << endl;
    // coloumn wise
    for (int i = 0; i < 3; i++)
    {
        // inner loop for column
        for (int j = 0; j < 3; j++)
        {
            cout << arr[j][i] << " ";
        }
        cout << endl;
    }
    return 0;
}