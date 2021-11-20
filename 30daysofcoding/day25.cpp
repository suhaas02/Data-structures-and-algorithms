// //Day - 25, topic: arrays & vector
// //Problem link: https://practice.geeksforgeeks.org/problems/longest-consecutive-subsequence2449/1
// //Longest consecutive subarray
// //Approach --> Sort the array, remove the duplicates 
// //and traverse the whole array to find the maximum continous elements
// #include<bits/stdc++.h>
// using namespace std;
// int subsequence(int arr[], int n)
// {
//     sort(arr,arr + n);
//     vector<int> v;
//     int ans =0, count =0;
//     v.push_back(arr[0]);
//     for (int j = 0; j < n; j++){
//         if (arr[j] != arr[j - 1]){
//             v.push_back(arr[j]);
//         }
//         for (int i = 0; i < v.size(); i++){
//             if (j > 0 && v[i] == v[i - 1] + 1){
//                 count++;
//             }
//             else{
//                 count = 1;
//             } 
//             ans = max(ans, count);
//         }
//         return ans;
//     }
// }
// int main()
// {
//     int n;
//     cin>>n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin>>arr[i];
//     }
//     subsequence(arr,n);
// }


