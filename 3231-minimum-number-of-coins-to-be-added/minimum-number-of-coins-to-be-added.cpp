class Solution {
public:
    int minimumAddedCoins(vector<int>& coins, int target) {
        sort(coins.begin(),coins.end());
        int i=0;
        long long sum=1;
        int ans=0;
        while(sum<=target){
            sum+=(i<coins.size()&&coins[i]<=sum)?coins[i++]:sum;
            ans++;
        }
       return ans-i;
    }
};