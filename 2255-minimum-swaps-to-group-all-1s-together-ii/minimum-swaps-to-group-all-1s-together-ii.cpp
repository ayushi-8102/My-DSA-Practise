class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int c=0;
        int ans=INT_MAX;
        for(auto &i:nums)if(i==1)c++;
        if(c==0||c==nums.size())return 0;
        nums.insert(nums.end(), nums.begin(), nums.end());
        int i=0,j=0,one=0;
        while(j<nums.size()){
           if(nums[j]==1)one++;
           if(j-i+1>=c){
           ans=min(c-one,ans);
           one-=(nums[i]==1);
           i++;
           }
           j++;
        }
 return ans;
    }
};