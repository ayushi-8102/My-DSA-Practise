class Solution {
public:
   int LCS(string &a,string &b){
       int n=a.length();
       int m=b.length();
       int t[n+1][m+1];
       for(int i=0;i<n+1;i++){
           for(int j=0;j<m+1;j++){
               if(i==0||j==0)t[i][j]=0;
           }
       }
       for(int i=1;i<n+1;i++){
           for(int j=1;j<m+1;j++){
               if(a[i-1]==b[j-1])t[i][j]=1+t[i-1][j-1];
               else
               t[i][j]=max(t[i-1][j],t[i][j-1]);
           }
       }
       return t[n][m];
   }
    int longestPalindromeSubseq(string s) {
         string b =string(s.rbegin(),s.rend());//reversing a string!
        return LCS(s,b);
    }
};