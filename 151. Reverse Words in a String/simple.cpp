class Solution {
public:
    string reverseWords(string s) {
        int n=s.length();
        if(n==0)return s;
        string ans;
        for(int i=0;i<n;i++){
            string word;
            if(s[i]==' ')continue;//ignoring spaces or extra spaces 
            while(i<n && s[i]!=' ' ) {
                word += s[i]; i++;
            }
           if(ans.empty())ans=word; //first word
          else{
            ans=word+' '+ans; //reverse
        }
       
        return ans;
    }
};
