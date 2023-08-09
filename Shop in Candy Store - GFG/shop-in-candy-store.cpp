//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:
    vector<int> candyStore(int candies[], int N, int K)
    {
        // Write Your Code here
        sort(candies,candies+N);// 1 2 3 4
        vector<int>ans;
        int min=0;
        int i=0,j=N-1;
        while(i<=j){
            min=min+candies[i];
            i++;
            j=j-K;
        }
        ans.push_back(min);
        int max=0;
        int x=N-1,y=0;
         while(y<=x){
            max=max+candies[x];
            x--;
            y=y+K;
        }
        ans.push_back(max);
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
        int N, K;
        cin >> N >> K;
        int candies[N];

        for (int i = 0; i < N; i++)
        {
            cin >> candies[i];
        }

        Solution ob;
        vector<int> cost = ob.candyStore(candies, N, K);
        cout << cost[0] << " " << cost[1] << endl;
    }
    return 0;
}
// } Driver Code Ends