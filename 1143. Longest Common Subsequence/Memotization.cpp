class Solution {
public:
//sol type 2> Memotization
 int t[1001][1001];

int LCS(string &a,string &b,int m,int n){
    //base condition
    //int t[m+1][n+1];
        if(n==0||m==0)return 0;
        if(t[m][n]!=-1)return t[m][n];
        //choice diagram
        if(a[n-1]==b[m-1])
        return t[m][n]= 1+LCS(a,b,m-1,n-1);
        else
        return t[m][n]= max(LCS(a,b,m-1,n),LCS(a,b,m,n-1));
}
    int longestCommonSubsequence(string text1, string text2) {
         memset(t,-1,sizeof(t));
        int m=text1.length();
        int n=text2.length();
       return LCS(text1,text2,n,m);
    }
};
