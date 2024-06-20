class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int,vector<int>,greater<int>>MinH;
        for(auto i:nums){
            MinH.push(i);
            if(MinH.size()>k)MinH.pop();
        }
        return MinH.top();
    }
};