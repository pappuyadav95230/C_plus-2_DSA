#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr{10, 20, 30, 40};
    int sum = 80;
    vector<int> ans;

    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i + 1; j < arr.size(); j++)
        {
            for (int k = j + 1; k < arr.size(); k++)
            {
                if (arr[i] + arr[j] + arr[k] == sum)
                {
                    ans.push_back(arr[i]);
                    ans.push_back(arr[j]);
                    ans.push_back(arr[k]);
                }
            }
        }
    }
    for (int value : ans)
    {
        cout << value << " ";
    }
}