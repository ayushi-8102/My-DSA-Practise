//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    // arr: input array
    // num: size of array
    //Function to find maximum circular subarray sum.
    int circularSubarraySum(int arr[], int num){
        
        // your code here
        int sum=0;
        for(int i=0;i<num;i++)sum+=arr[i];
        int ans1=INT_MIN;
        int curr_max=0;
        int ans2=INT_MAX;
        int curr_min=0;
        if(num==1)return arr[0];
        for(int i=0;i<num;i++)
        {
            curr_max=max((curr_max+arr[i]),arr[i]);
            if(ans1<curr_max)
            ans1=curr_max;
        }
        for(int i=0;i<num;i++)
        {
            curr_min=min((curr_min+arr[i]),arr[i]);
            if(ans2>curr_min)
            ans2=curr_min;
        }
        if(sum==ans2)return ans1;
        
        return max(ans1,(sum-ans2));
        
    }
};

//{ Driver Code Starts.

int main()
 {
	int T;
	
	//testcases
	cin>> T;
	
	while (T--)
	{
	    int num;
	    
	    //size of array
	    cin>>num;
	    int arr[num];
	    
	    //inserting elements
	    for(int i = 0; i<num; i++)
	        cin>>arr[i];
	        
	    Solution ob;
	    //calling function
	    cout << ob.circularSubarraySum(arr, num) << endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends