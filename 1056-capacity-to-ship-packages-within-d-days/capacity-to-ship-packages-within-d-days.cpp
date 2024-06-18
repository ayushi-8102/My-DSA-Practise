class Solution {
public:
bool isValid(vector<int>& weights, int days,int mid){
  int stu=1;
  int sum=0;
  for(auto i:weights){
  sum+=i;
  if(sum>mid){
    stu++;
    sum=i;
  }
   if(stu>days|| mid<i)return false;
  }
 
  return true;
}
    int shipWithinDays(vector<int>& weights, int days) {
        int n=weights.size();
        //sort(weights.begin(),weights.end());
        if(days>n)return -1;
        // auto s1=max_element(weights.begin(),weights.end());
        int s=0;
        int sum=0;
        for(auto i:weights)sum+=i;
        int e=sum;
        int ans=-1;
        while(s<=e){
            int mid=s+(e-s)/2;
           if(isValid(weights,days,mid)==true){
              ans=mid;
              e=mid-1;
           }
           else s=mid+1;
        }
        return ans;
    }
};