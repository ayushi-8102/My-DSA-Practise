class Solution {
public:
    int findMin(vector<int>& arr) {
      int n=arr.size();
      int s=0;
      int e=n-1;
       if(arr[0]<=arr[e])return arr[0];
      while(s<=e){
        int mid=s+(e-s)/2;
        int next=(mid+1)%n;
        int prev=(mid-1+n)%n;
        if(arr[mid]<=arr[prev])return arr[mid];
        else if(arr[mid]>=arr[e]&& arr[mid]>=arr[s])
        s=mid+1;
        else
        e=mid-1; 
      }  
      return 0;
    }
};
