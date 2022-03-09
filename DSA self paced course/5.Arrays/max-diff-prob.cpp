//maximum difference problem
#include<bits/stdc++.h>
using namespace std;

//approach - 2;
int maxDiff(int arr[],int n)
{
    int res = arr[1] - arr[0];
    int minVal = arr[0];
    for (int i = 1; i < n; i++)
    {
        res = max(res,arr[i] - minVal);
        minVal = min(minVal, arr[i]);   
    }
    return res;
}

// //approach - 1 naive approach
// //time complexity: O(N ^ 2);
// int maxDiff(int arr[],int n)
// {
//     int res = arr[1] - arr[0];
//     for (int i = 0; i < n - 1; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             res = max(res,arr[j] - arr[i]);
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
    cout<<maxDiff(arr,n);
    return 0;
}