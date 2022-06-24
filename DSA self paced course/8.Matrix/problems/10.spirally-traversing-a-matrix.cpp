//spirally traversing a matrix


// { Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution
{   
    public: 
    //Function to return a list of integers denoting spiral traversal of matrix.
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        vector <int> ans;
        int rt = 0, rb = r - 1, cl = 0, cr = c - 1;
        int i = 0;
        while (i < r * c)
        {
            for (int j = cl; j <= cr; j++)
            {
                ans.push_back(matrix[rt][j]);
                i++;
            }
            rt++;
            for (int j = rt; j <= rb; j++)
            {
                ans.push_back(matrix[j][cr]);                
                i++;
            }
            cr--;
            for (int j = cr; j >= cl; j--)
            {
                ans.push_back(matrix[rb][j]);
                //cout<<matrix[rb][j]<<" ";
                i++;
            }
            rb--;
            for (int j = rb; j >= rt; j--)
            {
                ans.push_back(matrix[j][cl]);
                //cout<<matrix[j][cl]<<" ";
                i++;
            }
            cl++;
        }
        return ans;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int r,c;
        cin>>r>>c;
        vector<vector<int> > matrix(r); 

        for(int i=0; i<r; i++)
        {
            matrix[i].assign(c, 0);
            for( int j=0; j<c; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.spirallyTraverse(matrix, r, c);
        for (int i = 0; i < result.size(); ++i)
                cout<<result[i]<<" ";
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends