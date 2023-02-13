class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int lmax=0;
        int ans=INT_MIN;
        for(int i=0;i<n;i++){
        lmax=max((nums[i]+lmax),nums[i]);
       if(lmax>ans)
       ans=lmax;
        }
        return ans;
    }

};