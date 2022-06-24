//maximum sum subarray
#include<bits/stdc++.h>
using namespace std;

//approach - 2 kadanes algorithm
//tc --> O(N)
int maxSum(int arr[],int n)
{
    int res = arr[0];
    int maxEnding = arr[0];
    for (int i = 1; i < n; i++)
    {
        maxEnding = max(maxEnding + arr[i], arr[i]);
        res = max(res, maxEnding);
    }
    return res;
}


// //approach - 1 (naive)
// //time complexity --> O(N ^ 2)
// int maxSum(int arr[],int n)
// {
//     int res =  arr[0];
//     for (int i = 0; i < n; i++)
//     {
//         int curr = 0;
//         for (int j = 0; j < n; j++)
//         {
//             curr = curr + arr[i];
//             res = max(res, curr);
//         }
        
//     }
//     return res;
// }
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<maxSum(arr,n);
    return 0;
}