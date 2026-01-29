// #include <iostream>
// using namespace std;

// int main()
// {
//     int n = 3;
//     int ans = 0;

//     while (n != 0)
//     {
//         // check last bit if found then increment the count
//         if (n & 1)
//         {
//             ans++;
//         }
//         // right shift
//         n = n >> 1;
//     }
//     cout << "Number of set bits: " << ans << endl;
//     return 0;
// }

// try to make it function and fine the set bit
#include <iostream>
using namespace std;

int findSetBit(int n)
{
    int ans = 0;
    while (n != 0)
    {
        if (n & 1)
        {
            ans++;
        }
        n = n >> 1;
    }
    return ans;
}

int main()
{
    int n;
    cout << "Enter the number : ";
    cin >> n;
    int result = findSetBit(n);
    cout << "Number of set bits: " << result;
    return 0;
}