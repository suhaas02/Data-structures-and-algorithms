// //count inversions in array

// //time complexity: O(N ^ 2)
// #include<bits/stdc++.h>
// using namespace std;
// int countInv(int arr[], int n)
// {
//     int res = 0;
//     for (int i = 0; i < n - 1; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             if (arr[i] > arr[j])
//             {
//                 res++;
//             }
            
//         }
        
//     }
//     return res;
//     cout<<endl;
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
//     cout<<countInv(arr,n);
//     return 0;
// }

//time complexity: O(N)
#include<bits/stdc++.h>
using namespace std;
int countInv(int arr[], int n)
{
    
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
    countInv(arr,n);
}