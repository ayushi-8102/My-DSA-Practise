class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        priority_queue<int,vector<int>,greater<int>>MaxH;
        for(int i=0;i<nums.size();i++){
            MaxH.push(nums[i]);
        }
        vector<int>ans;
        while(!MaxH.empty()){
            int a= MaxH.top();
            MaxH.pop();
            ans.push_back(a);
        }
        return ans;
    }
};