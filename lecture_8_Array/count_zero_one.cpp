#include <iostream>
using namespace std;

int main()
{

    int arr[] = {1, 0, 1, 0, 1, 0, 1, 1, 1, 1, 1, 0, 0, 0, 0, 1, 1, 1, 1, 0};
    int size = 20;
    int numZero = 0;
    int numOne = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 0)
        {
            numZero++;
        }
        else
        {
            numOne++;
        }
    }
    cout << "Count of Zero: " << numZero << endl;
    cout << "Count of One: " << numOne << endl;
    return 0;
}