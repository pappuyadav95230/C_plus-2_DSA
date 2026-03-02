// #include <iostream>
// using namespace std;

// int main()
// {
//     int arr[] = {1, 2, 3, 4, 5, 0, 6, 7, 8, 9};
//     int size = 10;

//     int max = INT_MIN;

//     for (int i = 0; i < size; i++)
//     {
//         if (arr[i] > max)
//         {
//             max = arr[i];
//         }
//     }
//     cout << "Maximum number is : " << max;
//     return 0;
// }

// find minimun number
#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, -1, 4, 5, 0, 6, 3, 8, 9};
    int size = 10;

    int minimun = INT_MAX;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] < minimun)
        {
            minimun = arr[i];
        }
    }
    cout << "Maximum number is : " << minimun;
    return 0;
}