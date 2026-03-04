#include <iostream>
using namespace std;
// swap function
void swapNum(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int size = 6;
    int start = 0;
    int end = size - 1;
    // reverse array
    while (start < end)
    {
        swapNum(arr[start], arr[end]);
        start++;
        end--;
    }
    // printing array
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}