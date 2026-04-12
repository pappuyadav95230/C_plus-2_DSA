// #include <iostream>
// using namespace std;

// int sqrt(int n)
// {
//     int target = n;
//     int start = 0;
//     int end = n;
//     int ans = -1;
//     while (start <= end)
//     {
//         int mid = start + (end - start) / 2;
//         if (mid * mid == target)
//         {
//             return mid;
//         }
//         else if (mid * mid < target)
//         {
//             ans = mid; //store ans
//             start = mid + 1;
//         }
//         else
//         {
//             end = mid - 1;
//         }
//     }
//     return ans;
// }

// int main()
// {
//     int n;
//     cout << "Enter number ";
//     cin >> n;

//     int result = sqrt(n);
//     cout << result;
//     return 0;
// }

// Also find the floting point
#include <iostream>
#include<iomanip>
using namespace std;

int sqrt(int n)
{
    int target = n;
    int start = 0;
    int end = n;
    int ans = -1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (mid * mid == target)
        {
            return mid;
        }
        else if (mid * mid < target)
        {
            ans = mid; // store ans
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return ans;
}

int main()
{
    int n;
    cout << "Enter number ";
    cin >> n;

    int ans = sqrt(n);
    cout << "Ans is =" << ans << endl;

    int precision;
    cout << "Enter the number floting digits in precision" << endl;
    cin >> precision;

    double step = 0.1;
    double finalAns = ans;

    for (int i = 0; i < precision; i++)
    {
        for (double j = finalAns; j * j <= n; j = j + step)
        {
            finalAns = j;
        }
        step = step / 10;
    }
    cout << "Final ans is "<< setprecision(precision)<< finalAns << endl;

    return 0;
}  