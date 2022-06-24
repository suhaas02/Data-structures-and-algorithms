//median in a row-wise sorted matrix
//problem link: https://practice.geeksforgeeks.org/problems/median-in-a-row-wise-sorted-matrix1527/1
#include <bits/stdc++.h>
using namespace std;
class Solution{   
public:
    int median(vector<vector<int>> &matrix, int r, int c){
         
        
    }
};
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int r, c;
        cin>>r>>c;
        vector<vector<int>> matrix(r, vector<int>(c));
        for(int i = 0; i < r; ++i)
            for(int j = 0;j < c; ++j)
                cin>>matrix[i][j];
        Solution obj;
        cout<<obj.median(matrix, r, c)<<endl;        
    }
    return 0;
}  