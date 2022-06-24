//rotate a matrix by 90 degrees
#include<bits/stdc++.h>
using namespace std;
const int n = 4;

//naive approach 
//time complexity ; O(N ^ 2), Space complexity: O(N)
// void transpose(int arr[n][n])
// {
//     int temp[n][n];
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             temp[n - j - 1][i] = arr[i][j];
//         }
        
//     }
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             arr[i][j] == temp[i][j];
//         }
        
//     }
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             cout<<arr[i][j];
//         }
        
//     }
// }


//efficient approach
//tc: O(N ^ 2), SPACE: 0(1);
void transpose(int arr[n][n])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            swap(arr[i][j],arr[j][i]);
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        int low = 0, high = n - 1;
        while (low < high)
        {
            swap(arr[low][i], arr[high][i]);
            low++;
            high--;
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        
    }
    
}





int main()
{
    // int r,c;
    // cin>>r>>c;
    int mat[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>mat[i][j];
        }
        
    }
    transpose(mat);
    return 0;
    
}