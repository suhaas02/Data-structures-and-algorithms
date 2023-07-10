class Solution {
public:
    vector<int> findOrder(int V, vector<vector<int>>& pre) {
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
        stack<int> temp;
        while(!q.empty())
        {
            int node = q.front();
            q.pop();
            temp.push(node);
            for(auto it: adj[node])
            {
                inDegree[it]--;
                if(inDegree[it] == 0)
                    q.push(it);
            }
        }
        while(!temp.empty())
        {
            topo.push_back(temp.top());
            temp.pop();
        }
        if(topo.size() == V)
            return topo;
        topo.clear();
        return topo;
    }
};