class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
       vector<int>ans;
       unordered_map<int,int>mp;
       for(auto i:nums1){
           mp[i]++;
       } 
       for(auto i:nums2){
           if(mp.find(i)!= mp.end()&&mp[i]>0){
                mp[i]--;
               ans.push_back(i);
              
           }
       }
       return ans;
    }
};