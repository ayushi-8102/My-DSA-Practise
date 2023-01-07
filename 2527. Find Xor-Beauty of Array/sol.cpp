class Solution {
public:
    int xorBeauty(vector<int>& nums) {
        int ans=0;
        int n=nums.size();
        for(int i=n-1;i>=0;i--)
            ans^=nums[i];
        return ans;
    }
};
