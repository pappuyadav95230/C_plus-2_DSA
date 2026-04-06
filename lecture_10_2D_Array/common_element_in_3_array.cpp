//  vector<int>ans;
//         set<int>st;
//         int i,j,k;
//         i=j=k=0;
//         while(i<arr1.size() && j<arr2.size() && k<arr3.size()){
//             if(arr1[i] == arr2[j] && arr2[j] == arr3[k]){
//                 st.insert(arr1[i]);
//                 i++,j++,k++;
//             }
//             else if(arr1[i] < arr2[j]){
//                 i++;
//             }
//             else if(arr2[j] < arr3[k]){
//                 j++;
//             }
//             else{
//                 k++;
//             }
//         }
//         for(auto i:st){
//             ans.push_back(i);
//         }
//         return ans;




// whoout using extra data structure remove duplicate
//  int i = 0, j = 0, k = 0;
//         vector<int> ans;

//         while (i < arr1.size() && j < arr2.size() && k < arr3.size()) {

//             // If all equal → common element
//             if (arr1[i] == arr2[j] && arr2[j] == arr3[k]) {
//                 ans.push_back(arr1[i]);

//                 int val = arr1[i];

//                 // skip duplicates in all arrays
//                 while (i < arr1.size() && arr1[i] == val) i++;
//                 while (j < arr2.size() && arr2[j] == val) j++;
//                 while (k < arr3.size() && arr3[k] == val) k++;
//             }

//             // Move the smallest pointer
//             else if (arr1[i] < arr2[j]) {
//                 i++;
//             }
//             else if (arr2[j] < arr3[k]) {
//                 j++;
//             }
//             else {
//                 k++;
//             }
//         }

//         return ans;