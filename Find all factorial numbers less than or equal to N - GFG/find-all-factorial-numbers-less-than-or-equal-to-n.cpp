//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++
class Solution
{
public:
long long factorial(long long n){

        return(n==1||n==0)?1:n*factorial(n-1);

    }
    vector<long long> factorialNumbers(long long N)
    {
        // Write Your Code here
        
        vector<long long>ans;
        long long a;
      int i=1;
         while(factorial(i)<=N){
            ans.push_back(factorial(i));
            i++;

        }
       
       
       
       return ans;
       
      
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long N;
        cin>>N;
        Solution ob;
        vector<long long> ans = ob.factorialNumbers(N);
        for(auto num : ans){
            cout<<num<<" ";
        }
        cout<<endl;
        
    }
    return 0;
}
// } Driver Code Ends