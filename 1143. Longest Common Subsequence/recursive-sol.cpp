class Solution {
public:
//sol type 1> Recursive solution
//Not accepted: - Time Limit Exceeded
 
int LCS(string a,string b,int n,int m){
    //base condition
        if(n==0||m==0)return 0;
        //choice diagram
        if(a[n-1]==b[m-1])
        return 1+LCS(a,b,n-1,m-1);
        else
        return max(LCS(a,b,n-1,m),LCS(a,b,n,m-1));
}
    int longestCommonSubsequence(string text1, string text2) {
        int n=text1.length();
        int m=text2.length();
       return LCS(text1,text2,n,m);
    }
};
