#include <iostream>
#include <vector>
using namespace std;

int firstOccurence(vector<int> v, int target)
{
    int start = 0;
    int end = v.size() - 1;
    int ans = -1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        int element = v[mid];

        if (element == target)
        {
            ans = mid;
            end = mid - 1; // move left
        }
        else if (target < element)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return ans;
}

int main()
{
    vector<int> v{1, 2, 3, 4, 4, 4, 4, 6, 7, 9};
    int target = 4;

    int indexOftarget = firstOccurence(v, target);
    cout << "target found at index: " << indexOftarget << endl;
    return 0;
}