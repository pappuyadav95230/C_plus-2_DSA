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
// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[50];
//     int n;
//     cout << "How many numbers you want to add in array" << endl;
//     cin >> n;

//     cout << "Enter the number " << endl;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     cout << "double of the numbers are:"<<endl;
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] * 2 << endl;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[5] = {1, 2, 3, 4, 5};
//     for (int i = 0; i < 5; i++)

//     {
//         arr[i] = 1;
//         cout << arr[i]<<" " ;
//     }
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[10];
//     memset(arr, 2, sizeof(arr));
//     for (int i = 0; i < 10; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }

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

// Array and function
// #include <iostream>
// using namespace std;

// int printArray(int arr[], int size)
// {
//     for (int i = 0; i < size; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
//     return 0;
// }

// void inc(int arr[], int size)
// {
//     arr[0] = arr[0] + 10;

//     printArray(arr, size);
// }

// int main()
// {
//     int arr[] = {5,6};
//     int size = 2;

//     inc(arr, size);

//     printArray(arr, size);
//     return 0;
// }

// sum of number
#include <iostream>
using namespace std;

int main()
{
  int ans = 0;
  int arr[] = {1, 2, 3, 4, 5};

  int n = sizeof(arr) / sizeof(arr[0]);

  for (int i = 0; i < n; i++)
  {
    ans = ans + arr[i];
  }
  cout << ans;
  return 0;
}
