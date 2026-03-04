#include <iostream>
#include <vector>
using namespace std;

// int main()
// {
//     int n;
//     cout << "enter size of array" << endl;
//     cin >> n;

//     vector<int> arr(n, -1);

//     for (int i = 0; i < arr.size(); i++)
//     {
//         cout << arr[i] << " ";
//     }
// }

int main()
{

    vector<int> crr{10, 20, 30, 40, 50};
    cout << crr.size() << endl;
    cout << "printing crr" << endl;
    for (int i = 0; i < crr.size(); i++)
    {
        cout << crr[i] << " ";
    }
}