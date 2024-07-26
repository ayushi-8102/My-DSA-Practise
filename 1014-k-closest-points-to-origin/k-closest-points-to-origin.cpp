class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<vector<int>>ans;
        priority_queue<pair<int,pair<int,int>>>mh;
        for(int i=0;i<points.size();i++){
            mh.push({points[i][0]*points[i][0]+points[i][1]*points[i][1],{points[i][0],points[i][1]}});
            if(mh.size()>k){
              mh.pop();
            }
        }
        while(!mh.empty()){
          vector<int>temp;
                temp.push_back(mh.top().second.first);
                temp.push_back(mh.top().second.second);
                mh.pop();
                ans.push_back(temp);
        }
        return ans;
    }
};