#include<bits/stdc++.h>
using namespace std;

int find_ceil(int arr[],int n,int key){
    int s=0;
    int e=n-1;
    int result;
    while(s<=e){
     int mid=s+(e-s)/2;
     if(arr[mid]==key)return arr[mid];
     else if(arr[mid]>key) {
        result=arr[mid];
        e=mid-1;
     }
     else 
     s=mid+1;
     
    }
return result;
}
int main(){

	int size, key; cin>>key>>size;
	int arr[size];
	for(int i = 0; i < size; i++){
		cin>>arr[i];
	}
	for(int i =0; i < size; i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	int res = find_ceil(arr, size, key);

	if(res<0) cout<<"Not found.";
	else cout<<"Ceil of the "<<key<<" is "<<res;

	
	return 0; 
}

