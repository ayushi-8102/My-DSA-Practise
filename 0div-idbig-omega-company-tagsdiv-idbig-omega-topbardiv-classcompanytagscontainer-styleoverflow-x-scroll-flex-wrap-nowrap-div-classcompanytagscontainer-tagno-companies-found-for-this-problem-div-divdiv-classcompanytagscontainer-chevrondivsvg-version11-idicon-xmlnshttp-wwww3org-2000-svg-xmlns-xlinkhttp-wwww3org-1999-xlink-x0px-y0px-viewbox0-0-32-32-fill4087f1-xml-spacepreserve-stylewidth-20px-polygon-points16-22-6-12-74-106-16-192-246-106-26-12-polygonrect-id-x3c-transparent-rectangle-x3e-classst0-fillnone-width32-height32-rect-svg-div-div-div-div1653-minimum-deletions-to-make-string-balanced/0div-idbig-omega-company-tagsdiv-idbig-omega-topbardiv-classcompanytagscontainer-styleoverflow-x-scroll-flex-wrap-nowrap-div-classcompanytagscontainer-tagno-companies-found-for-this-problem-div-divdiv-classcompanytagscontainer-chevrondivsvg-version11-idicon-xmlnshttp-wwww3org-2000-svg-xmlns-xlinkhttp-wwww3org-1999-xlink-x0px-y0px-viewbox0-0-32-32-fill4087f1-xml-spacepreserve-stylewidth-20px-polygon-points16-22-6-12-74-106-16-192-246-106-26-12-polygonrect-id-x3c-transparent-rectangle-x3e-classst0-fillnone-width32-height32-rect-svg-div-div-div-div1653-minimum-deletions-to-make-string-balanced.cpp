class Solution {
public:
    int minimumDeletions(string s) {
         int n = s.size();
         vector<int>a(n,0);
         vector<int>b(n,0);
         for(int i=n-2;i>=0;i--){
             if(s[i+1]=='a'){
                 a[i]=a[i+1]+1;
             }else{
                 a[i] = a[i + 1];
             }
         }
         for(int i=1;i<n;i++){
             if(s[i-1]=='b'){
                 b[i]=b[i-1]+1;
             }else{
                 b[i] = b[i - 1];
             }
         }
         int ans = n;
         for(int i=0;i<n;i++){
             ans = min(ans,a[i]+b[i]);
         }
         return ans;
    }
};