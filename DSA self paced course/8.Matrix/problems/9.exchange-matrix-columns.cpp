//exchanging first column of matrix with last column\


#include<bits/stdc++.h>
using namespace std;
class Solution
{   
    public:
    //Function to rotate matrix anticlockwise by 90 degrees.
    void exchangeCol(vector<vector<int> >& matrix, int n) 
    { 
        int last = n;
        for (int i = 0; i < n; i++)
        {
            swap(matrix[i][0], matrix[i][last - 1]);

            
            
        }
        
    } 
};

int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int n;
        cin>>n;
        vector<vector<int> > matrix(n); 

        for(int i=0; i<n; i++)
        {
            matrix[i].assign(n, 0);
            for( int j=0; j<n; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        ob.exchangeCol(matrix, n);
        for (int i = 0; i < n; ++i)
            for (int j = 0; j < n; ++j)
                cout<<matrix[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends