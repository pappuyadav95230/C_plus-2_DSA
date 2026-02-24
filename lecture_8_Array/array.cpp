// #include <iostream>
// using namespace std;

// int main()
// {
//     int arr[10];
//     int arr[53];
//     char a[106];
//     bool arr[23];
//     cout << "Array created successfully";
//     return 0;
// }

// sum of elements
#include <iostream>
using namespace std;

int main()
{
    int ans = 0;
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < 5; i++)
    {
        ans = ans + arr[i];
    }
    cout << ans;
    return 0;
}