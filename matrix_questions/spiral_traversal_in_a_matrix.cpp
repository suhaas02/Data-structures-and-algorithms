//spiral traversal in a matrix
//problem link: https://practice.geeksforgeeks.org/problems/spirally-traversing-a-matrix-1587115621/1
#include <bits/stdc++.h>
using namespace std;
void spiralPrint(int m, int n, int a[R][C])
{
    int i, k = 0, l = 0;
 
    /* k - starting row index
        m - ending row index
        l - starting column index
        n - ending column index
        i - iterator
    */
 
    while (k < m && l < n) {
        /* Print the first row from
               the remaining rows */
        for (i = l; i < n; ++i) {
            cout << a[k][i] << " ";
        }
        k++;
 
        /* Print the last column
         from the remaining columns */
        for (i = k; i < m; ++i) {
            cout << a[i][n - 1] << " ";
        }
        n--;
 
        /* Print the last row from
                the remaining rows */
        if (k < m) {
            for (i = n - 1; i >= l; --i) {
                cout << a[m - 1][i] << " ";
            }
            m--;
        }
 
        /* Print the first column from
                   the remaining columns */
        if (l < n) {
            for (i = m - 1; i >= k; --i) {
                cout << a[i][l] << " ";
            }
            l++;
        }
    }
}
 
/* Driver Code */
int main()
{
    int R,C;
    cin>>R>>C;
    int a[R][C];
 
    // Function Call
    spiralPrint(R, C, a);
    return 0;
}