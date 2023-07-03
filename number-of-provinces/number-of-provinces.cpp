class Solution {
public:
    void dfs(int node, vector<bool> &vis, vector<int> adjList[])
    {
        vis[node] = true;
        for(auto it: adjList[node])
        {
            if(!vis[it])
            {
                vis[it] = true;
                dfs(it, vis, adjList);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        //first thing what are ginna do is, convert this adjacent matrix into adjacency list
        int v = isConnected.size();
        vector<int> adjList[v + 1];
        for(int i = 0; i < isConnected.size(); i++)
        {
            for(int j = 0; j < isConnected[i].size(); j++)
            {
                if(isConnected[i][j] == 1 and i != j)
                {
                    adjList[i].push_back(j);
                    adjList[j].push_back(i);
                }
            }
        }

        //now i need to do the traversal in the grpah
        int count = 0;
        vector<bool> vis(v, false);
        for(int i = 0; i < v; i++)
        {
            if(!vis[i])
            {
                dfs(i, vis, adjList);
                count++;
            }
        }
        return count;
    }
};