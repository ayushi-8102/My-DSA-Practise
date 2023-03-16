class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>mp;
         int ans=0;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
         for (auto x : mp){
             if(x.second>(nums.size()/2))
              ans=x.first;
         }
         return ans;
    }
};