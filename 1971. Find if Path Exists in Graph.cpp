// Solve using BFS
class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<vector<int>> graph(n);
        
        // Building the required graph
        for(int i = 0;i < edges.size();i++) {
            graph[edges[i][0]].push_back(edges[i][1]);
            graph[edges[i][1]].push_back(edges[i][0]);
        }
        
        // BFS to find path from source to destination
        
        vector<int> visited(n, 0);
        queue<int> q;
        
        q.push(source);
        visited[source] = 1;
        
        while(!q.empty()) {
            int u = q.front();
            q.pop();
            
            if (u == destination) {
                return true;
            }
            
            for(int i = 0;i < graph[u].size();i++) {
                if(visited[graph[u][i]] == 0) {
                    q.push(graph[u][i]);
                    visited[graph[u][i]] = 1;
                }
            }
        }
        return false;
    }
};

// Solve using dfs

class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<vector<int>> graph(n);
        
        for(int i = 0;i < edges.size();i++) {
            graph[edges[i][0]].push_back(edges[i][1]);
            graph[edges[i][1]].push_back(edges[i][0]);
        }
        
        vector<int> visited(n, 0);
        
        bool ans = dfs(graph, visited, source, destination);
        return ans;
    }
    
    bool dfs(vector<vector<int>>& graph, vector<int>& visited, int current, int end) {
        if(visited[current])
            return false;
        
        if(current ==  end)
            return true;
        
        visited[current] = 1;
        
        for(int i = 0;i < graph[current].size();i++) {
            if(dfs(graph, visited, graph[current][i], end))
               return true;
        }
        
        return false;
    }
};