class Solution {
public:
    int longestSubarray(vector<int>& nums, int limit) {
        priority_queue<pair<int,int>> maxheap;
        priority_queue<pair<int,int> , vector<pair<int,int>> , greater<pair<int,int>>> minheap;
        int l = 0 ;
        int r = 0 ;
        int maxlen = 0 ;
        while(r<nums.size()){
            minheap.push({nums[r] , r});
            maxheap.push({nums[r] ,r});
            while(maxheap.top().first-minheap.top().first >limit){
                l = min(minheap.top().second , maxheap.top().second)+1;
                while(minheap.top().second < l){
                    minheap.pop();
                }
                while(maxheap.top().second < l){
                    maxheap.pop();
                }
            }
            maxlen = max(maxlen , r-l+1);
            r++;
        }
        return maxlen ;
    }
};