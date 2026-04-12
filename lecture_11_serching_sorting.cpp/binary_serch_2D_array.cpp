#include <iostream>
using namespace std;

bool binarySerch(int arr[][4], int row, int col, int target)
{
    int start = 0;
    int totalsize = row * col;
    int end = totalsize - 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        int indexRow = mid / col;
        int indexCol = mid % col;
        int element = arr[indexRow][indexCol];
        if (element == target)
        {
            return true;
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
    return false;
}

int main()
{
    int arr[5][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}, {17, 18, 19, 20}};
    int row = 5;
    int col = 4;
    int target = 25;

    bool ans = binarySerch(arr, row, col, target);
    if (ans)
    {
        cout << "target found" << endl;
    }
    else
    {
        cout << "target not found" << endl;
    }
    return 0;
}