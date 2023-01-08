 
class Solution {
   
public:

    int maxPoints(vector<vector<int>>& points) {
        int n=points.size();
        int ans=1;
        if(n==1)return 1;
        for(int i=0;i<n;i++){
            unordered_map<double,int>mp;
            for(int j=i+1;j<n;j++){
                if(points[j]==points[i]){
                    continue;
                }
                
               double val=points[i][0]-points[j][0]==0? DBL_MAX : (points[i][1]-points[j][1])*1.0/(points[i][0]-points[j][0]);
                mp[val]++;
                ans=max(ans,mp[val]);
            }
        }
        return ans+1;
    }
};