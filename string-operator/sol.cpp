//Time Limit Exceeded

#include <bits/stdc++.h>
using namespace std;
int main(){
   string s;
  cin>>s;
  int t;
  cin>>t;
  while(t--){
    int x;
    cin>>x;
     int end=s.length()+1-x;
    int m=x-1;
     reverse(s.begin() + m, s.begin() + end);
  }
  cout<<s;
  
}
