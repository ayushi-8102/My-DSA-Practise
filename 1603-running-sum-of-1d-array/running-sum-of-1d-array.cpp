class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int>ans;
        int prefix_sum=0;
        for(auto i: nums){
            prefix_sum+=i;
            ans.push_back(prefix_sum);
        }
        return ans;
    }
};