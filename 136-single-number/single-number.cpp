class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(auto i:nums)mp[i]++;
        for(int i=0;i<nums.size();i++){
            if(mp[nums[i]]==1)return nums[i];
        }
        return -1;
    }
};