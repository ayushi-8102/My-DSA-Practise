class Solution {
    private :
    bool check(int start,int n,vector<vector<int>>& graph,vector<int>&vis){
 vis[start]=0;
      queue<int>q;
      q.push(start);
      while(!q.empty()){
          int node=q.front();
          q.pop();
          for(auto it:graph[node]){
              if(vis[it]==-1){
                  vis[it]=!vis[node];
                  q.push(it);
              }
             if(vis[it]==vis[node])return false;
          }
      }
      return true;  
    }
public:
    bool isBipartite(vector<vector<int>>& graph) {
      int n=graph.size();
      vector<int>vis(n,-1);
      for(int i=0;i<n;i++){
          if(vis[i]==-1){
              if(check(i,n,graph,vis)==false)return false;
          }
      }
      return true;
    }
};