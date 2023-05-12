class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int ans=0;
        int cntfresh=0;
        int tm=0;
        queue<pair<pair<int,int>,int>>q;
        int vis[n][m];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
               if(grid[i][j]==2){
                   q.push({{i,j},0});
                   vis[i][j] = 2;
               }
                else {
            vis[i][j] = 0;
          }
          // count fresh oranges
          if (grid[i][j] == 1) cntfresh++;
            }
        }
        int cnt = 0;
        while(!q.empty()){
               int r=q.front().first.first;
               int c=q.front().first.second;
               int t=q.front().second;
                tm=max(t,tm);
                 q.pop();
                
                vector<int>delta={0,1,0,-1,0};
                for(int k=0;k<4;k++){
                    int nr=r+delta[k];
                    int nc=c+delta[k+1];
                    if(nr>=0&&nr<n&&nc>=0&&nc<m&&vis[nr][nc]==0&&grid[nr][nc]==1){
                        q.push({{nr,nc},t+1});
                        vis[nr][nc]=2;
                        cnt++;
                    }
                }
                }
            if(cnt!=cntfresh)
            return -1;
            else
             return tm;
        
    }
};