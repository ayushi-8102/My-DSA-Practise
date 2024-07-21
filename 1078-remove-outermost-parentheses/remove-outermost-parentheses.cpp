class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans="";
        int res=0;
        for(auto i:s){
            if(i=='('&&res++>0){
                ans+=i;
               // res++;
            }
            else if(i==')'&&res-->1){
                ans+=i;
               // res--;
            }
        }
        return ans;
    }
};