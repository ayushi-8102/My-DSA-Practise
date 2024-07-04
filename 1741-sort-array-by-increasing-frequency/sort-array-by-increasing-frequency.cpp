class Solution {
public:
//using Heap
    vector<int> frequencySort(vector<int>& nums) {
        vector<int>ans;
        unordered_map<int,int>mp;
        for(auto i:nums)mp[i]++;
        priority_queue<pair<int, int>>minHeap;
        for(auto i:mp){
            minHeap.push({-i.second,i.first});
        }
        while(minHeap.size() > 0) {
            int freq = -1*minHeap.top().first;
            int elem = minHeap.top().second;
            
            for (int i = 0; i < freq; i++) ans.push_back(elem);
            minHeap.pop();
        }
  return ans;
    }
};