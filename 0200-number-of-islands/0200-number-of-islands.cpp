class Solution {
   private:
   void bfs(int i,int j,vector<vector<char>>& grid,vector<vector<int>>& vis){
        int n=grid.size();
        int m=grid[0].size();

        queue<pair<int,int>> q;
        q.push({i,j});
        vis[i][j]=1;
       while(!q.empty()){
           
            auto p=q.front();
            int row=p.first;
            int col=p.second;
            q.pop();
          
           vector<int>delta={0,1,0,-1,0};
           for(int k=0;k<4;k++){
               int nr=row+delta[k];
               int nc=col+delta[k+1];
                if((nr>=0 && nr<n) && (nc>=0 && nc<m) && grid[nr][nc]=='1' && vis[nr][nc]==0 ){
                   vis[nr][nc]=1;
                   q.push({nr,nc});
               }
           }
           
       }
   }
       
    
public:
    int numIslands(vector<vector<char>>& grid) {
        
        int n=grid.size();
        int m=grid[0].size();

        vector<vector<int>> vis(n,vector<int> (m,0));

        int cnt=0;

       for(int row=0;row<n;row++)
       {
           for(int col=0;col<m;col++)
           {
               if(vis[row][col]==0 && grid[row][col]=='1')
               {
                   bfs(row,col,grid,vis);
                   cnt++;
               }
               
           }
       }
       return cnt;

    }
};