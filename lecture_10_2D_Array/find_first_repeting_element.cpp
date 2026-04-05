#include <iostream>
using namespace std;

int firstRepeating(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        bool isRepeted = false;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                isRepeted = true;
                return i + 1;
            }
        }
    }
    return -1;
}

int main()
{
    int arr[] = {1, 5, 3, 4, 3, 5, 6};
    int n = sizeof(arr) / sizeof(int);

    int result = firstRepeating(arr, n);
    cout << result << endl;
}
