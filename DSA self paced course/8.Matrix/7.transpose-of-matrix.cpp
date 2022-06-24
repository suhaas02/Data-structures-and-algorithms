#include<bits/stdc++.h>
using namespace std;
const int r = 4,c = 4;

// //naive solution
// void transpose(int arr[r][c])
// {
//     int temp[r][r];
//     for (int i = 0; i < r; i++)
//     {
//         for (int j = 0; j < r; j++)
//         {
//             temp[i][j] = arr[j][i];
//         }
        
//     }
//     for (int i = 0; i < r; i++)
//     {
//         for (int j = 0; j < r; j++)
//         {
//             arr[i][j] = temp[i][j];
//         }
        
//     }
    
// }


//efficient solution
void transpose(int arr[r][r])
{
    for (int i = 0; i < r; i++)
    {
        for (int j = i + 1; j < r; j++)
        {
            swap(arr[i][j],arr[j][i]); 
        }
        
    }
    
}
int main()
{
    int arr[r][c] = {{1,2,3,4},
    {5, 6, 7, 8},
	{9, 10, 11, 12},
    {13, 14, 15, 16}};
    transpose(arr);
    return 0;
}