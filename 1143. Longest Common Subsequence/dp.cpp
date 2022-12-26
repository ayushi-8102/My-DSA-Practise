class Solution {
public:
//sol type 3> Top Down Approach!
 int t[1001][1001];
    int longestCommonSubsequence(string text1, string text2) {
        int m=text1.length();
        int n=text2.length();
        for(int i=0;i<m+1;i++){
        for(int j=0;j<n+1;j++){
          if(i==0||j==0)t[i][j]=0;
         else{
           if(text1[i-1]==text2[j-1])
         t[i][j]= 1+t[i-1][j-1];
        else
         t[i][j]= max(t[i][j-1],t[i-1][j]);
         }
        }
    }
    return t[m][n]; 
    }
};
