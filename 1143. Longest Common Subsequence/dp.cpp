class Solution {
public:
//sol type 3> Top Down Approach! The real DP approach
    int longestCommonSubsequence(string text1, string text2) {
        int m=text1.length();
        int n=text2.length();
        int t[m+1][n+1];
        for(int i=0;i<m+1;i++){
        for(int j=0;j<n+1;j++){
          if(i==0||j==0)t[i][j]=0;
         }
        }
         for(int i=1;i<m+1;i++){
        for(int j=1;j<n+1;j++){
           if(text1[i-1]==text2[j-1])
         t[i][j]= 1+t[i-1][j-1];
        else
         t[i][j]= max(t[i][j-1],t[i-1][j]);
         }
        }
    return t[m][n]; 
    }
};
