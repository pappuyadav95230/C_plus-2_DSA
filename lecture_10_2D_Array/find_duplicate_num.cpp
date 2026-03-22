#include <iostream>
using namespace std;

int findDuplicate(int arr[], int n)
{
    int i = 0;
    while (i < n - 1)
    {
        if (arr[i] == arr[i + 1])
        {
            return arr[i];
        }
        else
        {
            i++;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {1, 3, 4, 2, 2};
    int n = sizeof(arr) / sizeof(int);

    int ans = findDuplicate(arr, n);
    cout << ans << endl;
}