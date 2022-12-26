//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    
    
    { 
        // code here 
        int n=S.size();
        if(n==0)return S;
        string ans;
        for(int i=0;i<n;i++){
            string word;
            if(S[i]=='.')continue;
            while(i<n&&S[i]!='.'){
            word+=S[i];
            i++;}
            if(ans.empty())ans=word;
            else
            ans=word+'.'+ans;
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
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}
// } Driver Code Ends