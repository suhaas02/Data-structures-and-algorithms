//multidimensional arrays
#include<bits/stdc++.h>
using namespace std;

// //1. simple multidimensional arrays
// int main()
// {
//     int m,n;
//     cin>>m>>n;
//     int arr[m][n];
//     for (int i = 0; i < m; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             arr[i][j] = i + j;
//         }
        
//     }
//     for (int k = 0; k < m; k++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             cout<<arr[k][j]<<" ";
//         }
        
//     }
//     return 0;
// }

//2.array of vectors
int main()
{
    int m = 3, n = 2;
    vector <int> arr[m];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            arr[i].push_back(10);
        }
        
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        
    }
}
    