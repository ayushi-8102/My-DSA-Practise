class Solution {
public:

    int minDistance(string a, string b) {
     int n=a.length();
    int m=b.length();
    int t[n+1][m+1];
    for(int i=0;i<n+1;i++){
        t[i][0]=i;
    }
        for(int j=0;j<m+1;j++){
          t[0][j]=j;
        }
    
    for(int i=1;i<n+1;i++){
        for(int j=1;j<m+1;j++){
            if(a[i-1]==b[j-1])
            t[i][j]=t[i-1][j-1];
            else
           t[i][j] =1+ min({t[i-1][j] , t[i][j-1] , t[i-1][j-1]});
        }
    }
    return t[n][m];
    }
};