//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution 
{
    public:
    //Function to find a Mother Vertex in the Graph
    void dfs(int node, int V, vector<int> adj[], vector<int> &vis)
    {
        vis[node] = 1;
        for(auto x : adj[node])
        {
            if(!vis[x])
            {
                dfs(x, V, adj, vis);
            }
        }
    }
	int findMotherVertex(int V, vector<int>adj[])
	{
	    // Code here
	    vector<int> vis(V, 0);
	    int vertex = 0;
	    for(int i = 0;i < V; i++)
	    {
	        if(vis[i] == false)
	        {
	            dfs(i, V, adj, vis);
	            vertex = i;
	        }
	    }
	    for(int i = 0; i < V; i++)
	    {
	        vis[i] = 0;
	    }
	    dfs(vertex, V, adj, vis);
	    for(int i = 0; i < V; i++)
	    {
	        if(vis[i] == 0)
	            return -1;
	    }
	    return vertex;
	}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int V, E;
		cin >> V >> E;
		vector<int>adj[V];
		for(int i = 0; i < E; i++){
			int u, v;
			cin >> u >> v;
			adj[u].push_back(v);
		}
		Solution obj;
		int ans = obj.findMotherVertex(V, adj);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends