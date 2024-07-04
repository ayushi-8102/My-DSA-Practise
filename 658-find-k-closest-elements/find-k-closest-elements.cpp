class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        vector<int>v;
        priority_queue<pair<int,int>>maxHeap;
        for(auto i:arr){
            maxHeap.push({abs(i-x),i});
            if(maxHeap.size()>k){
               maxHeap.pop();
            }
        }
        while(!maxHeap.empty()){
            v.push_back(maxHeap.top().second);
            maxHeap.pop();
        }
        sort(v.begin(),v.end());
        return v;
    }
};