//sliding window technique
//given an array of integers and a number K. 
//Find maximum and minimum sum of K consecutive numbers
#include<bits/stdc++.h>
using namespace std;

//find subarray of size k with given sum
int slidingWindow(int arr[],int n,int k)
{
    
}


// //k consecutive integers sum;
// //time complexity: O(N)
// int slidingWindow(int arr[],int n,int k)
// {
//     int curr_sum = 0;
//     for (int i = 0; i < k; i++)
//     {
//         curr_sum += arr[i];
//     }
//     int max_sum = curr_sum;
//     for (int i = k; i < n; i++)
//     {
//         curr_sum += (arr[i] - arr[i - k]);
//         max_sum = max(max_sum, curr_sum);
//     }
//     return max_sum;
// }
int main()
{
    int n,k;
    cin>>n>>k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<slidingWindow(arr,n, k)<<endl;
    return 0;
}