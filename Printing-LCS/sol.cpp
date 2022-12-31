#include <bits/stdc++.h>
using namespace std;

void lcs(char* X, char* Y, int m, int n)
{
    int t[m+1][n+1];
    for(int i=0;i<m+1;i++){
        for(int j=0;j<n+1;j++){
            if(i==0||j==0)t[i][j]=0;
        }
    }
     for(int i=1;i<m+1;i++){
        for(int j=1;j<n+1;j++){
            if(X[i-1]==Y[j-1])t[i][j]=1+t[i-1][j-1];
            else
            t[i][j]=max(t[i-1][j],t[i][j-1]);
        }
    }
    string s;
    int i=m;int j=n;
    while(i>0&&j>0){
      if(X[i-1]==Y[j-1]){
          s.push_back(X[i-1]);
          i--;
          j--;
      }  
      else{
          if(t[i-1][j]>t[j-1][i])
          i--;
          else j--;
      }
   
    }
    
      //we got reverse ordered string!
      reverse(s.begin(),s.end());
      cout<<"Printing LCS : -> :"<<s<<endl; 
    
}

int main()
{
    char X[] = "AGGTAB";
    char Y[] = "GXTXAYB";
    int m = strlen(X);
    int n = strlen(Y);
    lcs(X, Y, m, n);//result : GTAB
    return 0;
}
