class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int counta,countb,total;
        counta=total=0;
        
       for(int i=0;i<nums.size();i++){
          total+=nums[i]; 
     }
        countb=total;
        for(int i=0;i<nums.size();i++){
        countb-=nums[i];
            if(counta==countb)return i;
            counta+=nums[i];
        }
        return -1;
    }
};