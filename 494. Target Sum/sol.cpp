class Solution {
public:
int subsetdiffcount(vector<int>& nums,int n,int sum){
  int t[n+1][sum+1];
  
  for(int i=0;i<n+1;i++){
    for(int j=0;j<sum+1;j++){
      if(i==0) t[i][j]=0;
      if(j==0) t[i][j]=1;
    }
  }
  for(int i=1;i<n+1;i++){
    for(int j=0;j<sum+1;j++){
      if(nums[i-1]<=j){
        t[i][j]= t[i-1][j-nums[i-1]] + t[i-1][j];
        
      }
      else
        t[i][j]=t[i-1][j];
    }
  }
  return t[n][sum];
}
    int findTargetSumWays(vector<int>& nums, int target) {
    int s =0;
    
    for(int i=0;i<nums.size();i++){
        s+=nums[i];
    }
    
    int sum=(target+s)/2;
    if(s < abs(target) || (target+s) %2 != 0) return 0;
  return  subsetdiffcount(nums,nums.size(),sum);
    }
};
