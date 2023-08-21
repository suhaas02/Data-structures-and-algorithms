//{ Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
public:
    int dx[8] = {-1,-1,0,1,1,1,0,-1};
    int dy[8] = {0,1,1,1,0,-1,-1,-1};
    
    bool bfs(int row, int col, vector<vector<int>> &matrix)
    {
        int n = matrix.size();
        int m = matrix[0].size();
        int count0 = 0;
        for (int i=0; i<8; i++)
        {
            int delRow = row + dx[i];
            int delCol = col + dy[i];
            if (delRow>=0 && delCol>=0 && delRow<n && delCol<m && matrix[delRow][delCol]==0) count0++;
        }
        if (count0%2==0 && count0>0) return true;
        return false;
    }
    int Count(vector<vector<int> >& matrix) {
        // Code here
        int n = matrix.size();
        int m = matrix[0].size();
        int count = 0;
        for (int i=0; i<n; i++)
        {
            for (int j=0; j<m; j++)
            {
                if (matrix[i][j]==0) continue;
                else 
                {
                    if (bfs(i, j, matrix)) count++;
                }
            }
        }
        
        return count;
    }
};


//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>> matrix(n, vector<int>(m,0));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> matrix[i][j];
			}
		}
		Solution ob;
		int ans = ob.Count(matrix);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends