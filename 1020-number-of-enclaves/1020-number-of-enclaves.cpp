class Solution {
    private:
    void bfs(int i,int j,vector<vector<int>>& grid,vector<vector<int>>& vis){
         int m=grid.size();
        int n=grid[0].size();
        vis[i][j]=1;
        queue<pair<int,int>>q;
        q.push({i,j});
         int r[]={-1, 0, +1, 0}; 
       int c[]={0, +1, 0, -1}; 
        while(!q.empty()){
         int row=q.front().first;
         int col=q.front().second;
         q.pop();
         for(int i=0;i<4;i++){
             int nr=row+r[i];
             int nc=col+c[i];
             if(nr>=0 && nr<m && nc>=0 && nc<n && !vis[nr][nc] && grid[nr][nc]==1){
                 vis[nr][nc]=1;
                 q.push({nr,nc});
             }
         }
        }
    }
public:
    int numEnclaves(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        int ans=0;
        vector<vector<int>>vis(m,vector<int>(n,0));
        for(int i = 0; i < m; ++i){
            for(int j= 0; j < n; ++j){
                if(i == 0 || j == 0 || i == m-1 || j == n-1){
                    if(grid[i][j] != 0 && !vis[i][j]){
                        bfs(i,j,grid,vis);
                    }
                }
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(!vis[i][j]&&grid[i][j]==1)
                ans++;
            }
        }
        return ans;
    }
};