class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        map<int,int>mp;
        for(auto i:nums)mp[i]++;
        int count=0;
        for(auto it:mp){
        int left=it.second-1;
        if(left>0){
            mp[it.first+1]+=left;
            count+=left;
        }

        }
    return count;
    }
};