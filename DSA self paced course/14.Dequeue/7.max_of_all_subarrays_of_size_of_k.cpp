//finding maximum element in all subarrays of size k

#include<bits/stdc++.h>
using namespace std;

// //naive approach
// //time complexity: O(N ^ 2);
// void printMax(int arr[],int n,int k)
// {
//     for (int i = 0; i < n - k + 1; i++)
//     {
//         int mx = arr[i];
//         for (int j = 0; j < i + k; j++)
//         {
//             mx = max(arr[j],mx);
//         }
//         cout<<mx<<" ";
//     }
    
// }


//efficient approach
void printMax(int arr[],int n, int k)
{
    
}


int main()
{
    int n,k;
    cin>>n>>k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    printMax(arr,n,k);
    return 0;
}