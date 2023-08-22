//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution
{
    public:
    //Function to find minimum number of operations that are required 
    //to make the matrix beautiful.
    int findMinOpeartion(vector<vector<int> > matrix, int n)
    {
        // code here 
         vector<int>rs(n,0),cs(n,0);
        for(int i=0;i<n;++i){
            for(int j=0;j<n;++j){
                rs[i]+=matrix[i][j];
                cs[j]+=matrix[i][j];
            }
        }
        int maxi=0;
        for(int i=0;i<n;++i){
            maxi=max(maxi,rs[i]);
            maxi=max(maxi,cs[i]);
        }
        int cnt=0,i=0,j=0;
        while(i<n && j<n){
            int diff=max(maxi-rs[i],maxi-cs[j]);
            rs[i]+=diff;
            cs[j]+=diff;
            cnt+=diff;
            if(maxi==rs[i])i++;
            if(maxi==cs[j])j++;
        }
        return cnt;
    } 
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<vector<int> > matrix (n,vector<int>(n));
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                cin>>matrix[i][j];
        Solution ob;
        cout << ob.findMinOpeartion(matrix, n) << endl;
    }
    return 0;
}


// } Driver Code Ends