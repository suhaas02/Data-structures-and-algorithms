//largest rectangular area in histogram

#include<bits/stdc++.h>
using namespace std;

// //naive method
// //tc: 0(n);, space: 0(1);
// int getMaxArea(int arr[], int n)
// {
//     int res = 0;
//     for (int i = 0; i < n; i++)
//     {
        
//         int curr = arr[i];
//         for (int j = i - 1; j >= 0; j--)
//         {
//             if (arr[j] >= arr[i])
//             {
//                 curr += arr[i];
//             }
//             else
//             {
//                 break;
//             }
            
//         }
//         for (int k = i + 1; k < n; k++)
//         {
//             if (arr[k] >= arr[i])
//             {
//                 curr += arr[i];
//             }
//             else
//             {
//                 break;
//             }
            
//         }
//         res = max(res,curr);
//     }
//     return res;
// }


//efficient approach
int getMaxArea(int arr[], int n)
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
    cout<<getMaxArea(arr,n);
    return 0;
}