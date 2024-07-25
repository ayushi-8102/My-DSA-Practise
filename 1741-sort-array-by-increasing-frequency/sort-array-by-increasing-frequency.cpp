class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(auto i:nums)mp[i]++;
        priority_queue<pair<int,int>>mh;
        for(auto it:mp){
            mh.push({-1*it.second,it.first});
        }
        vector<int>ans;
        while(!mh.empty()){
            int fq=-1*mh.top().first;
            int ele=mh.top().second;
            for(int i=0;i<fq;i++)ans.push_back(ele);
            mh.pop();
        }
        return ans;
    }
};