//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    vector<string>ans;
public:
  void solve(string ip,string op){
      if(ip.size()==0){
          ans.push_back(op);
          return;
      }
      string op1=op;
      string op2=op;
      op1.push_back(' ');
      op1.push_back(ip[0]);
      op2.push_back(ip[0]);
      ip.erase(ip.begin()+0);
      solve(ip,op1);
      solve(ip,op2);
      return;
      
  }

    vector<string> permutation(string S){
        // Code Here
        string op="";
        op.push_back(S[0]);
        S.erase(S.begin()+0);
        solve(S,op);
        return ans;
    }
};

//{ Driver Code Starts.

int  main(){
    int t;
    cin>>t;
    while(t--){
        string S;
        cin>>S;
        vector<string> ans;
        Solution obj;
        ans = obj.permutation(S);
        for(int i=0;i<ans.size();i++){
            cout<<"("<<ans[i]<<")";
        }
        cout << endl;
    }
}

// } Driver Code Ends