#include <iostream>
#include <vector>
using namespace std;

void wavePrintMatric(vector<vector<int>> v)
{
    int n = v.size();    // rows
    int m = v[0].size(); // columns

    for (int startCol = 0; startCol < m; startCol++) 
    {
        if ((startCol & 1) == 0)
        {
            for (int i = 0; i < n; i++) // rows traversal
            {
                cout << v[i][startCol] << " ";
            }
        }
        else
        {
            for (int i = n - 1; i >= 0; i--)
            {
                cout << v[i][startCol] << " ";
            }
        }
    }
}

int main()
{
    vector<vector<int>> v = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}};

    wavePrintMatric(v);
    return 0;
}