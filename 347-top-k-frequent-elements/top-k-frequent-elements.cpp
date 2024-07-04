class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int>v;
        unordered_map<int,int>mp;
        for(auto i:nums)mp[i]++;
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> MinH;
        for(auto i:mp){
            MinH.push({i.second,i.first});
            if(MinH.size()>k){
                MinH.pop();
            }
        }
            while(!MinH.empty()){
                v.push_back(MinH.top().second);
                MinH.pop();
            }
            return v;
        }
};