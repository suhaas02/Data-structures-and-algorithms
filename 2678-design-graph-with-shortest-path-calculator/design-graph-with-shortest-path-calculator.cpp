class Graph {
    //Adjacency list
    vector<vector<pair<int,int>>>adj;

    //Dijkstra's algorithm for shortest path using set
    int dijkstra(int src,int dest,vector<vector<pair<int,int>>>&adj)
    {
        vector<int>distance(adj.size(),1e8);
        distance[src] = 0;

        set<pair<int,int>>s;
        s.insert({0,src});

        while(s.size())
        {
            auto it = *(s.begin());    s.erase(s.begin());
            int node = it.second;
            int dist = it.first;

            if(node == dest)return dist;

            for(auto i : adj[node])
            {
                if(distance[i.first] > i.second + dist)
                {
                    if(distance[i.first] != 1e8)s.erase({distance[i.first],i.first});

                    distance[i.first] = i.second + dist;
                    s.insert({distance[i.first],i.first});
                }
            }
        }

        return -1;
    }

public:

    // Resize adjacency list to n nodes 
    Graph(int n, vector<vector<int>>& edges) {
        adj.resize(n);

        for(auto it : edges)
        {
            adj[it[0]].push_back({it[1],it[2]});
        }
    }
    
    // Adding edge to existing adjacency list 
    void addEdge(vector<int> edge) 
    {
        adj[edge[0]].push_back({edge[1],edge[2]});
    }
    
    //Find shortest path using Dijkstra's algorithms
    int shortestPath(int node1, int node2) 
    {
       return dijkstra(node1,node2,adj);    
    }
};

/**
 * Your Graph object will be instantiated and called as such:
 * Graph* obj = new Graph(n, edges);
 * obj->addEdge(edge);
 * int param_2 = obj->shortestPath(node1,node2);
 */