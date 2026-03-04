#include <iostream>
#include <vector>
using namespace std;

// int main()
// {
//     // create vector
//     vector<int> arr;

//     int ans = sizeof(arr) / sizeof(int);
//     cout << ans << endl;

//     cout << arr.size() << endl;
//     cout << arr.capacity() << endl;

//     return 0;
// }

// create vector or print
int main()
{
    // create vector
    vector<int> arr;

    int ans = sizeof(arr) / sizeof(int);
    // cout << ans << endl;

    // cout << arr.size() << endl;
    // cout << arr.capacity() << endl;

    // insert
    arr.push_back(10);
    arr.push_back(20);
    arr.push_back(30);
    arr.push_back(40);

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    // remove element
    arr.pop_back();

    // print
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}