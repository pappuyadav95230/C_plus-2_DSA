// #include <iostream>
// #include <vector>
// using namespace std;

// int main()
// {
//     vector<int> arr{10, 20, 30, 40, 50};
//     // print al pair
//     // outer loop
//     for (int i = 0; i < arr.size(); i++)
//     {
//         for (int j = i + 1; j < arr.size(); j++)
//         {
//             cout << "pair is :";
//             cout << arr[i] << " " << arr[j];

//         }
//     }

//     // loop to find the pair sum
//     int sum = 70;
//     vector<int> ans;

//     for (int i = 0; i < arr.size(); i++)
//     {
//         for (int j = i + 1; j < arr.size(); j++)
//         {
//             if (arr[i] + arr[j] == sum)
//             {
//                 ans.push_back(arr[i]);
//                 ans.push_back(arr[j]);
//             }
//         }
//     }

//     for (int value : ans)
//     {
//         cout << value << " ";
//     }
// }

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr{10, 20, 30, 40, 50};
    // print al pair
    int sum = 70;
    vector<int> ans;
    cout << "pair is :";
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i + 1; j < arr.size(); j++)
        {

            cout << "(" << arr[i] << "," << arr[j] << ")";
            if (arr[i] + arr[j] == sum)
            {
                ans.push_back(arr[i]);
                ans.push_back(arr[j]);
            }
        }
    }
    cout << endl;

    // loop to find the pair sum

    for (int value : ans)
    {
        cout << value << " ";
    }
}