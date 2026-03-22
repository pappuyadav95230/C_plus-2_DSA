// #include <iostream>
// using namespace std;

// int main()
// {
//     int arr[] = {1, 2, -3, 4, -5, 6};
//     int n = sizeof(arr)/sizeof(int);
//     int l = 0;
//     int h = n - 1;

//     while (l <= h)
//     {
//         if (arr[l] < 0)
//         {
//             l++;
//         }
//         else if (arr[h] > 0)
//         {
//             h--;
//         }
//         else
//         {
//             swap(arr[l], arr[h]);
//             l++;
//             h--;
//         }
//     }

//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";

//     }
// }

#include <iostream>
using namespace std;

void moveAllNegToLef(int arr[], int n)
{
    int l = 0;
    int h = n - 1;

    while (l <= h)
    {
        if (arr[l] < 0)
        {
            l++;
        }
        else if (arr[h] > 0)
        {
            h--;
        }
        else
        {
            swap(arr[l], arr[h]);
            l++;
            h--;
        }
    }
}

int main()
{
    int arr[] = {1, 2, -3, 4, -5, 6};
    int n = sizeof(arr) / sizeof(int);
    moveAllNegToLef(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}