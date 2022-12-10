//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//Back-end complete function Template for C++

class Solution {
  public:
  int countsubset(vector<int>&A,int n,int sum){
      int t[n+1][sum+1];
      for(int i=0;i<n+1;i++){
          for(int j=0;j<sum+1;j++){
              if(i==0)t[i][j]=0;
              if(j==0)t[i][j]=1;
          }
      }
      for(int i=1;i<n+1;i++){
          for(int j=0;j<sum+1;j++){
              if(A[i-1]<=j){
                  t[i][j]=t[i-1][j-A[i-1]]+t[i-1][j];
              }
              else
              t[i][j]=t[i-1][j];
              
          }
      }
      return t[n][sum];
  }
    int findTargetSumWays(vector<int>&A ,int target) {
        //Your code here
        int n=A.size();
        int s=0;
        for(int i=0;i<n;i++){
            s+=A[i];
        }
        int sum=(s+target)/2;
          if(s < abs(target) || (target+s) %2 != 0) return 0;
        return countsubset(A,n,sum);
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;
        vector<int>arr(N);
        
        for(int i=0 ; i<N ; i++){
            cin>>arr[i];
        }
        int target;
        cin >> target;

        Solution ob;
        cout<<ob.findTargetSumWays(arr,target);
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends