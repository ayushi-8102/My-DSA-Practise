//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
static int dp[501][501];
class Solution{
public:
int solve(int arr[],int i,int j){
    
     int temp ;
     int mn= INT_MAX;
    //base condition
    if(i>=j)
    return 0;
    if(dp[i][j]!=-1)return dp[i][j];
    for(int k=i;k<=j-1;k++){
        temp=solve(arr,i,k)+solve(arr,k+1,j)+(arr[i-1]*arr[j]*arr[k]);
        if(temp<mn)
        mn=temp;
          
    }
    return dp[i][j]=mn;
}
    int matrixMultiplication(int N, int arr[])
    {
        // code here
        memset(dp,-1,sizeof(dp));
        return solve(arr,1,N-1);
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int arr[N];
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        cout<<ob.matrixMultiplication(N, arr)<<endl;
    }
    return 0;
}
// } Driver Code Ends