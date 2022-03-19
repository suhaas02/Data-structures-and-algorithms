// //last occurence in array

// //recursive approach
// //time complexity --> O(logN)
// //Auxillary space --> O(logN)
// #include<bits/stdc++.h>
// using namespace std;
// int lastOcc(int arr[],int low, int high,int n, int x)
// {
//     if (low > high)
//     {
//         return -1;
//     }
//     int mid = (low + high)/2;
//     if (arr[mid] > x)
//     {
//         return lastOcc(arr,low,mid - 1,n,x);
//     }
//     else if (arr[mid] < x)
//     {
//         return lastOcc(arr,mid + 1, high,n,x);
//     }
//     else
//     {
//         if (mid == n - 1 || arr[mid] != arr[mid + 1])
//         {
//             return mid;
//         }
//         else
//         {
//             return lastOcc(arr,mid + 1, high, n, x);
//         }
        
//     }
    
    
// }
// int main()
// {
//     int n,x;
//     cin>>n>>x;
//     int low = 0, high = n - 1;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin>>arr[i];
//     }
//     lastOcc(arr,low,high,n,x);
//     return 0;
// }

//iterative approach
#include<bits/stdc++.h>
using namespace std;
int minFlips(int arr[],int n, int x)
{
    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = (low + high)/2;
        if (arr[mid] > x)
        {
            high = mid - 1;
        }
        else if (arr[mid] < x)
        {
            low = mid + 1;
        }
        else
        {
            if (mid != n - 1 || arr[mid] != arr[mid + 1])
            {
                return mid;
            }
            else
            {
                low = mid + 1;
            }
            
        }
        
    }
    return -1;
}
int main()
{
    int n,x;
    cin>>n>>x;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<minFlips(arr,n,x);
    return 0;
}