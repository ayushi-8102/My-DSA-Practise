#include<bits/stdc++.h>
using namespace std;

bool solve(vector<int>in,vector<int>out,int n){
  int i=0,j=0;
	stack<int> st;
 
	while(i<n){
		if(in[i] == out[j]){
			i++;
			j++;
		}
		else{
			if(st.size() && st.top() == out[j]){
				st.pop();
				j++;
			}
			else{
				st.push(in[i]);
				i++;
			}
		}
	}
 
	while(st.size() && st.top() == out[j]){
		st.pop();
		j++;
	}
 
	if(st.empty() && j == n){
		return true;
	}
	else{
	return false;
	}
}

 int main(){
   int n;cin>>n;
   vector<int>input(n);
   vector<int>output(n);
   for(int i=0;i<n;i++)cin>>input[i];
    for(int i=0;i<n;i++)cin>>output[i];
  cout<< solve(input,output,n);
 }
