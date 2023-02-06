#include<bits/stdc++.h>
using namespace std;

string solve(vector<int>&op,string s,int m){
  int sz=s.size();
  vector<long long>count(sz+1,0);
  for(int i=0;i<m;i++){
    count[op[i]]++;
  }
  for(int i=1;i<=sz/2;i++){
    count[i]=count[i]+count[i-1];
    if(count[i]%2!=0)
      swap(s[i-1],s[sz-i]);
      }
  return s;
}
int main() {
  string s;
  cin>>s;
  int m;
  cin>>m;
  vector<int>op(m);
  for(int i=0;i<m;i++)cin>>op[i];
   cout<<solve(op,s,m);   
  return 0;
}
