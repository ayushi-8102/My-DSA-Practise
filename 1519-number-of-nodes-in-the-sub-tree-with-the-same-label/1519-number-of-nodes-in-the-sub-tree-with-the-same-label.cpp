class Solution {
public:
   vector<int> DFS(unordered_map<int,vector<int>>&adj,int curr,int parent,vector<int> &ans,string &labels){
       vector<int>my_count(26,0);
       char mylabel= labels[curr];
       my_count[mylabel-'a']=1;
       //exploring child nodes
       for(auto child:adj[curr]){
           if(child==parent)continue;//parent ko count nhikarna hai
           vector<int>child_count;
           child_count=DFS(adj,child,curr,ans,labels);
           for(int i=0;i<26;i++){
               my_count[i] +=child_count[i];
           }
       }
           ans[curr]=my_count[mylabel-'a'];
           return my_count;
   }

    vector<int> countSubTrees(int n, vector<vector<int>>& edges, string labels) {
       //making adjacentry table foe undirected
       unordered_map<int,vector<int>>adj;
       for(auto &vec:edges){
           int v=vec[0];
           int u=vec[1];
           adj[u].push_back(v);
           adj[v].push_back(u);
           //v se u ko jaa sakte hn aur u se v ko jaa sakte hn

       } 
       vector<int>ans(n,0);
       DFS(adj,0,-1,ans,labels);
       return ans;
    }
};