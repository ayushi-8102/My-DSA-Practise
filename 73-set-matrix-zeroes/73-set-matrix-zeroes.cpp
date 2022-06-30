class Solution {
public:
    void setZeroes(vector < vector < int >> &v) {
      int m=v.size(),n=v[0].size();
        bool x=false,y=false;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(v[i][j]==0){
                    if(i==0) x=true;
                    if(j==0) y=true;
                    v[i][0]=v[0][j]=0;
                    
                }
            }
        }
        for(int i=1;i<m;i++){
            for(int j=1;j<n;j++){
                if(v[i][0]==0||v[0][j]==0)v[i][j]=0;
            }
        }
        if(y){
            for(int i=0;i<m;i++)v[i][0]=0;
        }
         if(x){
            for(int j=0;j<n;j++)v[0][j]=0;
        }
    }
};