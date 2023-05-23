class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int ans=0;
      for(int i=0;i<nums.size();i++){
          if(nums[i]==0){
              nums[i]=-1;
          }
      }
         
           unordered_map<int,int>mp;
           mp[0]=-1;
    int sum = 0; 
    for(int i=0;i<nums.size();i++){
      sum+=nums[i];
      if(mp.find(sum)!=mp.end()){
          ans=max(ans,i-mp[sum]);
      }
      else{
          mp[sum]=i;
      }
    }
      return ans;
    }

};