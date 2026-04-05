#include <iostream>
using namespace std;

int firstRepeating(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        bool isRepeted = false;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                isRepeted = true;
                return i + 1;
            }
        }
    }
    return -1;
}

int main()
{
    int arr[] = {1, 5, 3, 4, 3, 5, 6};
    int n = sizeof(arr) / sizeof(int);

    int result = firstRepeating(arr, n);
    cout << result << endl;
}


// on GFG 
// class Solution {
//   public:
//     int firstRepeated(vector<int> &arr) {
//         // code here
//         int n = arr.size();
//         for(int i =0; i<n; i++){
//             bool isRepeted = false;
//             for(int j = i+1; j<n; j++){
//                 if(arr[i] == arr[j]){
//                     isRepeted = true;
//                     return i+1;
//                 }
//             }
//         }
//         return -1;
//     }
// };


// using hashmap
//  unordered_map<int, int> hash;

//         // Count frequency
//         for(int i = 0; i < arr.size(); i++){
//             hash[arr[i]]++;
//         }

//         // Find first repeating index
//         for(int i = 0; i < arr.size(); i++){
//             if(hash[arr[i]] > 1){
//                 return i + 1; // 1-based index
//             }
//         }

//         return -1;