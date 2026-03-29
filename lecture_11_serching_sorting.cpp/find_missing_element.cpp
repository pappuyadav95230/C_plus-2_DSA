#include <iostream>
#include <vector>
using namespace std;

int findMissingNumber(vector<int> v)
{
    int start = 0;
    int end = v.size() - 1;
    int ans = -1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        int element = v[mid];

        if (element == mid + 1)
        {
            start = mid + 1;
        }
        else
        {
            ans = mid + 1;
            end = mid - 1;
        }
    }
    return ans;
}

int main()
{
    vector<int> v{1, 2, 3, 4, 5, 6, 8, 9};
    int ans = findMissingNumber(v);
    cout << ans << endl;
    return 0;
}