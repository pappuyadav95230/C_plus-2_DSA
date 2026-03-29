// #include <iostream>
// #include <vector>
// using namespace std;

// int findMissingNumber(vector<int> v)
// {
//     int start = 0;
//     int end = v.size() - 1;
//     int ans = -1;

//     while (start <= end)
//     {
//         int mid = start + (end - start) / 2;
//         int element = v[mid];

//         if (element == mid + 1)
//         {
//             start = mid + 1;
//         }
//         else
//         {
//             ans = mid + 1;
//             end = mid - 1;
//         }
//     }
//     return ans;
// }

// int main()
// {
//     vector<int> v{1, 2, 3, 4, 5, 6, 8, 9};
//     int ans = findMissingNumber(v);
//     cout << ans << endl;
//     return 0;
// }

// Second methods with cover all condition

#include <iostream>
#include <vector>
using namespace std;

int findMissingNumber(vector<int> v)
{
    int start = 0;
    int end = v.size() - 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        // i + 1 eaqal ho gya number then condtion break nahihuaa then serch in right side
        if (v[mid] == mid + 1)
        {
            start = mid + 1;
        }
        // if pattern break mean i+1 is not eqal to the num v[mid] then mean left serch serch
        else
        {
            end = mid - 1;
        }
    }
    // beacuse start ohi tha jaha par pattern break nahi huaa tha
    return start + 1;
}

int main()
{
    vector<int> v{1, 2, 3, 4, 5, 6, 8, 9};
    int ans = findMissingNumber(v);
    cout << "Missing Number is: " << ans << endl;
    return 0;
}