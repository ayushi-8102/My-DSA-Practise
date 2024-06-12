class Solution {
public:
    void sortColors(vector<int>& nums) {
        //Can be done optimally by binary search variation
        int l=0,r=nums.size()-1, mid=0;
        while(mid<=r){
        if(nums[mid]==0){
            swap(nums[l],nums[mid]);
            l++;
            mid++;
        }
        else if(nums[mid]==1){
            mid++;
        }
        else if(nums[mid]==2){
            swap(nums[r],nums[mid]);
            r--;
        }
        }

    }
};