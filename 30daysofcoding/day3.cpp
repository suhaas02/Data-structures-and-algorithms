// //Day - 3, Topic: Arrays;
// //Question link: https://practice.geeksforgeeks.org/problems/sort-an-array-of-0s-1s-and-2s4231/1;
// //Sort an array of 0s, 1s and 2s
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int a[n];
//     for(int i = 0;i < n;i++)
//     {
//         cin>>a[i];
//     }
//     int c0=0,c1=0,c2=0;
//     for(int i = 0;i < n;i++)
//     {
//         if(a[i]==0)
//         {
//             c0++;
//         }
//         else if(a[i]==1)
//         {
//             c1++;
//         }
//         else
//         {
//             c2++;
//         }
//     }
//     for(int i = 0;i < c0;i++)
//     {
//         cout<<0<<" ";
//     }
//     for(int i = c0;i < c0+c1;i++)
//     {
//         cout<<1<<" ";
//     }
//     for(int i = c0+c1;i < n;i++)
//     {
//         cout<<2<<" ";
//     }
//     return 0;
// }
// //time complexity - O(n)




// //Day - 3, Topic: Arrays;
//Question link : https://www.geeksforgeeks.org/move-negative-numbers-beginning-positive-end-constant-extra-space/
//Move all negative numbers to beginning and 
//positive to end with constant extra space
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            if (i != j)
            {
                swap(arr[i],arr[j]);
            }
            j++;
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
} //time complexity - O(n);