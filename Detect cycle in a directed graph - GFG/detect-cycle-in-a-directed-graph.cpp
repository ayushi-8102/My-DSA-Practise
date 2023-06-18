//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
    private:
    bool dfs(int node,int V,vector<int> adj[],vector<pair<int,int>>&vis){
        vis[node].first=1;
        vis[node].second=1;
        for(auto it:adj[node]){
            if(!vis[it].first){
            if(dfs(it,V,adj,vis)==true)return true;
            }
        else if(vis[it].second)return true;
        }
        
        vis[node].second=0;
        return false;
    }
  public:
    // Function to detect cycle in a directed graph.
    bool isCyclic(int V, vector<int> adj[]) {
        // code here
        vector<pair<int,int>>vis(V, make_pair(0, 0));
        for(int i=0;i<V;i++){
            if(dfs(i,V,adj,vis)==true)return true;
        }
        return false;
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }

        Solution obj;
        cout << obj.isCyclic(V, adj) << "\n";
    }

    return 0;
}

// } Driver Code Ends