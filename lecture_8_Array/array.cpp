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

// #include <iostream>
// using namespace std;

// int main()
// {

//     int arr[] = {1, 2, 3, 4, 5, 8, 9};

//     // printing all value
//     for (int i = 0; i < 6; i++)
//     {
//         cout << arr[i] << endl;
//     }
// }

// taking input of the array
// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[10];
//     cout << "Enter the number of the array ";

//     for (int i = 0; i < 10; i++)
//     {
//         // int n;
//         // cin >> n;
//         // arr[i] = n;
//         cin >> arr[i];
//     }
//     for (int i = 0; i < 10; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }

// take input and print double of the number of the array
// #include <iostream>
// using namespace std;

// int main()
// {
//     int arr[10];
//     cout << "Enter the number of the array ";

//     for (int i = 0; i < 10; i++)
//     {
//         cin >> arr[i];
//     }

//     for (int i = 0; i < 10; i++)
//     {
//         cout << arr[i] * 2 << " " << endl;
//     }
// }

// taking input from the user
#include <iostream>
using namespace std;
int main()
{
    int arr[50];
    int n;
    cout << "How many numbers you want to add in array" << endl;
    cin >> n;

    cout << "Enter the number " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "double of the numbers are:"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] * 2 << endl;
    }
    return 0;
}
// sum of elements
// #include <iostream>
// using namespace std;

// int main()
// {
//     int ans = 0;
//     int arr[] = {1, 2, 3, 4, 5};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     for (int i = 0; i < 5; i++)
//     {
//         ans = ans + arr[i];
//     }
//     cout << ans;
//     return 0;
// }