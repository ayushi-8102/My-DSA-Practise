class Solution {
public:
string helper(string& s,vector<int>& mapping){
   string ans="";
   for(auto i:s){
    ans+=to_string(mapping[i-'0']);
   }
   return ans;
}
    vector<int> sortJumbled(vector<int>& mapping, vector<int>& nums) {
        vector<int>ans;
        vector<pair<int,int>>v;
        for(int i=0;i<nums.size();i++){
            string s=to_string(nums[i]);
            string mapped=helper(s,mapping);
            int mappedint=stoi(mapped);
            v.push_back({mappedint,i});
        }
        sort(v.begin(),v.end());
        for(auto i:v){
            int org=i.second;
            ans.push_back(nums[org]);
        }
        return ans;
}
};