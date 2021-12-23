//search an element in a matrix
//problem link: https://leetcode.com/problems/search-a-2d-matrix/
//Searching an element in a 2-d matrix;
//Approach --> Traversing the whole matrix.
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n,target,f;
    cin>>m>>n;
    cin>>target;
    int a[m][n];
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            cin>>a[i][j];
        }
        
    }
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            if (a[i][j] == target){
                f = 1;
            }
            else{
                f = 0;
            }
        }
    }
    if (f == 1){
        cout<<"True"<<endl;
    }
    else{
        cout<<"False"<<endl;
    }
    return 0;   
}
//time complexity: 0(n^2)