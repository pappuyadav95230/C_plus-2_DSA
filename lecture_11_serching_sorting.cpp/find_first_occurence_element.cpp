#include <iostream>
using namespace std;

int firstOccurence(int arr[], int size, int target)
{
    int start = 0;
    int end = size - 1;

    int ans = -1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        int element = arr[mid];

        if (element == target)
        {
            ans = mid;
            end = mid - 1;
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
    int arr[] = {1, 2, 3, 4, 4, 4, 4, 6, 7, 9};
    int size = 10;
    int target = 4;

    int indexOftarget = firstOccurence(arr, size, target);
    cout << "target found at index: " << indexOftarget << endl;
    return 0;
}


