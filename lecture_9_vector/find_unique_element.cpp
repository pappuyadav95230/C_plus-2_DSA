// #include <iostream>
// using namespace std;

// int main()
// {
//     int arr[] = {2, 3, 5, 2, 3};
//     int ans = 0;

//     for (int i = 0; i < 5; i++)
//     {
//         ans = ans ^ arr[i];
//     }
//     cout << "Unique element is " << ans << endl;
//     return 0;
// }

// #include <iostream>
// #include <vector>
// using namespace std;

// int main()
// {
//     int n;
//     cout << "enter size of array" << endl;
//     cin >> n;

//     vector<int> arr(n);
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     int ans = 0;
//     for (int i = 0; i < arr.size(); i++)
//     {
//         ans = ans ^ arr[i];
//     }
//     cout << "Unique element is " << ans << endl;
//     return 0;
// }

// using function
#include <iostream>
#include <vector>
using namespace std;

// find uniqe
int findUniqe(vector<int> &arr)
{
    int ans = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
}

int main()
{
    int n;
    cout << "enter size of array" << endl;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Unique element is " << findUniqe(arr) << endl;
    return 0;
}