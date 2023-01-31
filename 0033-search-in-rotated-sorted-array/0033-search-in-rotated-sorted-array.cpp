class Solution {
public:
 int BinarySearch(vector<int>&nums,int target,int s,int e){
     while(s<=e){
 int mid=s+(e-s)/2;
 if(nums[mid]==target)
 return mid;
 else if(nums[mid]>target)
 e=mid-1;
 else if(nums[mid]<target)
 s=mid+1;
     }
     return -1;
 }
 int minin(vector<int>&nums){
     int n=nums.size();
     int start=0;
     int end=n-1;
 if(nums[start]<nums[end])return 0;
 while(start<=end){
     int mid=start+(end-start)/2;
     int prev=(mid+n-1)%n;
     int next=(mid+1)%n;
     if(nums[mid]<=nums[prev]&&nums[mid]<=nums[next])return mid;
    if(nums[mid] <= nums[end])
            {
                end = mid - 1;
            }
            else if(nums[start] <= nums[mid])
            {
                start = mid + 1;
            }
 }
 return -1;
 }
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int s=0;
        int e=n-1;
        int index=minin(nums);
     int x=BinarySearch(nums,target,index,e);
        int y= BinarySearch(nums,target,s,index-1);
        if(x==-1)
        return y;
     return x;
        
    }

};