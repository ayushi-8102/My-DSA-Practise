class Solution {
public:
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) { vector<pair<int,int>>v;
    for(int i=0;i<worker.size();i++){
        v.push_back({difficulty[i],profit[i]});
    }
    sort(v.begin(),v.end());
    sort(worker.begin(),worker.end());
  int j=0,ans=0,res=0;
  for(int i:worker){
    while(i>=v[j].first &&j<worker.size()){
  ans=max(ans,v[j].second);
  j++;
    }
    res+=ans;
  }
     return res;   
    }
};