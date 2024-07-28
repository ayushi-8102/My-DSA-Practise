class Solution {
public:
    
    int fn(int step,int time,int change){
        int ans=0;
        for(int i=0;i<step;i++){
            int ratio=ans/change;
            if(ratio & 1){
                ans=(ratio+1)*change;
            }
            ans+=time;
        }
        return ans;
    }

    int secondMinimum(int n, vector<vector<int>>& edges, int time, int change) {
        vector<vector<int>>adj(n+1);

        for(int i=0;i<edges.size();i++){
            int u=edges[i][0];
            int v=edges[i][1];

            adj[v].push_back(u);
            adj[u].push_back(v);
        }

        vector<int>dist1(n+1,INT_MAX),dist2(n+1,INT_MAX);
        queue<pair<int,int>>q;
        q.push({1,0});
        dist1[1]=0;

        while(!q.empty()){
            auto data=q.front();
            q.pop();
            int node=data.first;
            int dis=data.second;
            for(auto it:adj[node]){
                int newD=dis+1;
                if(newD<dist1[it]){
                    dist2[it]=dist1[it];
                    dist1[it]=newD;
                    q.push({it,newD});
                }else if(newD>dist1[it] && newD<dist2[it]){
                    dist2[it]=newD;
                    q.push({it,newD});
                }
            }
        }

        int steps=dist2[n];
        if(steps==INT_MAX)return -1;
        return fn(steps,time,change);
    }
};