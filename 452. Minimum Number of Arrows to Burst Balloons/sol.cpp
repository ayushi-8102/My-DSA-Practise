
bool comparecol(vector<int>&a,vector<int>&b){
    return a[1]<b[1];
}
class Solution {
public:

    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(),points.end(),comparecol);//sorting the first coloumn;
        int ans=1;
        int end=points[0][1];
          
          for(int i=1;i<points.size();i++){
              if(points[i][0]<end)continue;
              else if(points[i][0]>end){
                  ans++;
                  end=points[i][1];
              }
          }
          return ans;
    }
};
