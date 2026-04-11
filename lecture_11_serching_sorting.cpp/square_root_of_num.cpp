#include <iostream>
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
            ans = mid;
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

    int result = sqrt(n);
    cout << result;
    return 0;
}