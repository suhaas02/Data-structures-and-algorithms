//binary search
#include<bits/stdc++.h>
using namespace std;

int binarySearch(int arr[],int low,int high,int x)
{
    if (low > high)
    {
        return -1;
    }
    int mid = (low + high)/2;
    if (arr[mid] == x)
    {
        return mid;
    }
    else if (arr[mid] > x)
    {
        return binarySearch(arr,low,mid - 1,x);
    }
    else
    {
        return binarySearch(arr,mid + 1,high,x);
    }
    
}

//iterative way of traversing 
// int binarySearch(int arr[],int n,int x)
// {
//     int low = 0, high = n - 1;
//     while (low <= high)
//     {
//         int mid = (low + high)/2;
//         if (arr[mid] == x)
//         {
//             return mid;
//         }
//         else if (arr[mid] > x)
//         {
//             high = mid - 1;
//         }
//         else
//         {
//             low = mid + 1;
//         }
//     }
//     return -1;  
// }
int main()
{
    int n,x;
    cin>>n>>x;
    int low = 0, high = n - 1;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    // cout<<binarySearch(arr,n,x); //for iterative
    cout<<binarySearch(arr,low,high,x);
    return 0;
}