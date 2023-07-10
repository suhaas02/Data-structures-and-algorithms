class Solution {
public:
    bool canFinish(int V, vector<vector<int>>& pre) {
        //first create an adjacency list
        vector<int> adj[V];
        for(int i = 0; i < pre.size(); i++)
        {
            adj[pre[i][0]].push_back(pre[i][1]);
        }


        //topological sort
        vector<int> inDegree(V, 0);
        for(int i = 0; i < V; i++)
        {
            for(auto it: adj[i])
                inDegree[it]++;
        }
        
        //now find the nodes whose indegree is 0;
        queue<int> q;
        for(int i = 0; i < V; i++)
        {
            if(inDegree[i] == 0)
                q.push(i);
        }
        int count = 0;
        vector<int> topo;
        while(!q.empty())
        {
            int node = q.front();
            q.pop();
            topo.push_back(node);
            for(auto it: adj[node])
            {
                inDegree[it]--;
                if(inDegree[it] == 0)
                    q.push(it);
            }
        }
        if(topo.size() == V)
            return true;
        return false;

    }
};