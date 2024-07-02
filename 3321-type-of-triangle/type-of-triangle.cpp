class Solution {
public:
bool istriangle(vector<int>& nums){
    if(nums[0]+nums[1]>nums[2]&&nums[1]+nums[2]>nums[0]&&nums[0]+nums[2]>nums[1])return true;
    return false;
}
    string triangleType(vector<int>& nums) {
     if(istriangle(nums)==false)return "none";
    set<int>st;
    for(auto i:nums)st.insert(i);
    if(st.size()==1&&istriangle(nums))return "equilateral";
    else if(st.size()==2&&istriangle(nums))return "isosceles";
    else return "scalene";
    }
};