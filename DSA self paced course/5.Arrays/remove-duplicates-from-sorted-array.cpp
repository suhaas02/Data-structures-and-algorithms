//remove duplicates from sorted array
//array needs to be in sorted order.
#include<bits/stdc++.h>
using namespace std;
// //approach - 1
//time complexity: O(N); auxillary space: O(N)
// int duplicates(int arr[],int n)
// {
//     int temp[n];
//     temp[0] = arr[0];
//     int res = 1;
//     for (int i = 0; i < n; i++)
//     {
//         if (temp[res - 1] != arr[i])
//         {
//             temp[res] = arr[i];
//             res++;
//         }
        
//     }
//     for (int i = 0; i < n; i++)
//     {
//         arr[i] = temp[i];
//     }
//     return res;
// }


//approach - 2
//time complexity: O(N); auxillary space: O(1)
int duplicates(int arr[],int n)
{
    int res = 1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != arr[res - 1])
        {
            arr[res] = arr[i];
            res++;
        }
        
    }
    return res;
}


int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<duplicates(arr,n)<<endl;
    return 0;
}