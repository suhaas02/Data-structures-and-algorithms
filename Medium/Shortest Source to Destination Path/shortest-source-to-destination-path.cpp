//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int shortestDistance(int n, int m, vector<vector<int>> a, int x, int y) {
        // code here
        queue<pair<pair<int,int>,int>> q;
        if(a[0][0]==0)
        return -1;
        
        int ans =INT_MAX;
        int count =0;
        q.push({{0,0},0});
        int dx[4] = {-1,0,1,0};
        int dy[4]= {0,-1,0,1};
        
        vector<vector<int>> vis(n,vector<int>(m,0));
        vis[0][0]=1;
        while(q.size()!=0){
            pair<pair<int,int>,int> z = q.front();
            q.pop();
            int j = z.first.first;
            int k = z.first.second;
            int count = z.second;
            // cout<<j<<" "<<k<<endl;
            if(j==x&&k==y){
                ans=min(count,ans);
                vis[j][k]=0;
                continue;
            }
            
            for(int i=0;i<4;i++){
                int r = j+dx[i];
                int c = k+dy[i];
                if(r>=0&&r<n&&c>=0&&c<m&&a[r][c]==1&&vis[r][c]==0){
                    q.push({{r,c},count+1});
                    vis[r][c]=1;
                }
            }
            
        }
        return ans==INT_MAX?-1:ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, M, x, y;
        cin >> N >> M;
        vector<vector<int>> v(N, vector<int>(M));
        for (int i = 0; i < N; i++)
            for (int j = 0; j < M; j++) cin >> v[i][j];
        cin >> x >> y;
        Solution ob;
        cout << ob.shortestDistance(N, M, v, x, y) << "\n";
    }
}
// } Driver Code Ends