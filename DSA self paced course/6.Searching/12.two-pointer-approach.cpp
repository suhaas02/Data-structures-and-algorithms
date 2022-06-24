// //two pointer approach

// //given sorted array and sum. Find if there is a pair with given sum.

// #include<bits/stdc++.h>
// using namespace std;
// bool twoPointer(int arr[], int n, int x)
// {
//     int left = 0, right = n - 1;
//     while (left < right)
//     {
//         if (arr[left] + arr[right] == x)
//         {
//             return true;
//         }
//         else if (arr[left] + arr[right] > x)
//         {
//             right--;
//         }
//         else
//         {
//             left--;
//         }
        
//     }
//     return false;
// }
// int main()
// {
//     int n,x;
//     cin>>n>>x;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin>>arr[i];
//     }
//     cout<<twoPointer(arr,n,x);
//     return 0;
// }

//given a sorted array and a sum, 
//find if there is a triplet with given sum;

#include<bits/stdc++.h>
using namespace std;
bool twoPointer(int arr[], int n, int x)
{
    
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
    cout<<twoPointer(arr,n,x);
    return 0;
}
