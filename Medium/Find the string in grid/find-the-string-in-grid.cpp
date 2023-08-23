//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
	bool find(int i, int j, int n, int m, int x, int y, vector<vector<char>> &grid, string word){
        for(int idx=0; idx<word.size(); idx++){
            if(i<0 || i>=n || j<0 || j>=m || grid[i][j]!=word[idx]){
                return false;
            }
            i+=x;
            j+=y;
        }
        return true;
    }
    vector<vector<int>>searchWord(vector<vector<char>>grid, string word){
        int n=grid.size(), m=grid[0].size();
        vector<int> dx = {0, 0, 1, -1, 1, -1, 1, -1};
        vector<int> dy = {1, -1, 0, 0, 1, 1, -1, -1};
        vector<vector<int>> ans;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(grid[i][j]==word[0]){
                    for(int k=0; k<8; k++){
                        if(find(i, j, n, m, dx[k], dy[k], grid, word)){
                            ans.push_back({i, j});
                            break;
                        }
                    }
                }
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<char>>grid(n, vector<char>(m,'x'));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++)
				cin >> grid[i][j];
		}
		string word;
		cin >> word;
		Solution obj;
		vector<vector<int>>ans = obj.searchWord(grid, word);
		if(ans.size() == 0)
		{
		    cout<<"-1\n";
		}
		else
		{
		    for(auto i: ans){
			for(auto j: i)
				cout << j << " ";
			cout << "\n";
		    }
		}
		
		
	}
	return 0;
}
// } Driver Code Ends