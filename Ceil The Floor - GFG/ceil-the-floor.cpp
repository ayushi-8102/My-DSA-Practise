//{ Driver Code Starts

#include <bits/stdc++.h>

using namespace std;

pair<int, int> getFloorAndCeil(int arr[], int n, int x);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        auto ans = getFloorAndCeil(arr, n, x);
        cout << ans.first << " " << ans.second << "\n";
    }
    return 0;
}

// } Driver Code Ends


pair<int, int> getFloorAndCeil(int arr[], int n, int x) {
    // code here
    sort(arr,arr+n);
    pair<int, int>p;
    int s=0;//starting
    int e=n-1;//ending
    int c=-1;//storing ceil
    int f=-1; //storing floor
    while(s<=e){
        int mid=s+(e-s)/2;
        if(arr[mid]==x){
            f = arr[mid];
            c = arr[mid];
            break ;
        }
         if(arr[mid]<x){
            f=arr[mid];
            s=mid+1;
        }
        else {
            c=arr[mid];
            e=mid-1;
            
        }
        
    }
    p.first=f;
    p.second=c;
    return p;
}