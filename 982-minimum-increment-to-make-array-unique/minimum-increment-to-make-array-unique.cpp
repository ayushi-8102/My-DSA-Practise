class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
       /* map<int,int>mp;
        for(auto i:nums)mp[i]++;
        int count=0;
        for(auto it:mp){
        int left=it.second-1;
        if(left>0){
            mp[it.first+1]+=left;
            count+=left;
        }

        }
    return count;*/
    //Counting-Sort
    int count=0;
    sort(nums.begin(),nums.end());
    for(int i=1;i<nums.size();i++){
     if(nums[i]<=nums[i-1]){
        count+=1+nums[i-1]-nums[i];
        nums[i]=nums[i-1]+1;
     }   
    }
    return count;
    }
};