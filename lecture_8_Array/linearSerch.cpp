// #include <iostream>
// using namespace std;
// // linea search
// bool find(int arr[], int size, int key)
// {
//     for (int i = 0; i<size; i++)
//     {
//         if (arr[i] == key)
//         {
//             return true;
//         }
//     }
//     return false;
// }

// int main()
// {
//     int arr[5] = {1, 2, 3, 4, 5};
//     int size = 5;

//     cout << "Enter the number to search" << endl;
//     int key;
//     cin >> key;

//     if (find(arr, size, key))
//     {
//         cout << "present";
//     }
//     else
//     {
//         cout << "not present";
//     }
// }

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int size = 6;

    int key;
    cout << "Enter the number to search" << endl;
    cin >> key;


    bool flag = false;

    // linear search
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            flag = true;
            break;
        }
    }

    if (flag)
    {
        cout << "present";
    }
    else
    {
        cout << "not present";
    }
} 