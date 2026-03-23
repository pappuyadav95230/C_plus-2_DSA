#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int target)
{
    int start = 0;
    int end = size - 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        int element = arr[mid];

        if (element == target)
        {
            return mid;
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
    return -1;
}

int main()
{
    int arr[] = {2, 4, 6, 8, 10, 12, 16};
    int size = 7;
    int target = 8;

    int indexOftarget = binarySearch(arr, size, target);

    if (indexOftarget == -1)
    {
        cout << "target not found" << endl;
    }
    else
    {
        cout << "target found at index: " << indexOftarget << endl;
    }

    return 0;
}