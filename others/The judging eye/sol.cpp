#include <bits/stdc++.h>
using namespace std;
int main() {
  int x,y,a,b;
  cin>>x>>y>>a>>b;
 int ans=abs(y-x);
   int ans1 =abs(x-a) +abs(b-y);
        int ans2 =abs(x-b) + abs(y-a);
  int minPath =ans<(ans1)?(ans> ans2 ? ans2 : ans):((ans1)> ans2?ans2 :ans1);
  cout<<minPath;
}
