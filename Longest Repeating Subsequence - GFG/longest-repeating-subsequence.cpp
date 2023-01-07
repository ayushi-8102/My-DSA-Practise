//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
	public:
	int LCS(string &a,string &b){
	    int n=a.length();
	    int m=b.length();
	    int t[n+1][m+1];
	    for(int i=0;i<n+1;i++){
	        for(int j=0;j<m+1;j++){
	            if(i==0||j==0)
	            t[i][j]=0;
	        }
	    }
	     for(int i=1;i<n+1;i++){
	        for(int j=1;j<m+1;j++){
	           if(a[i-1]==b[j-1]&&i!=j)
	           t[i][j]=1+t[i-1][j-1];
	           else
	           t[i][j]=max(t[i-1][j],t[i][j-1]);
	        }
	    }
	    return t[n][m];
	}
		int LongestRepeatingSubsequence(string str){
		    // Code here
		    return LCS(str,str);
		}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string str;
		cin >> str;
		Solution obj;
		int ans = obj.LongestRepeatingSubsequence(str);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends