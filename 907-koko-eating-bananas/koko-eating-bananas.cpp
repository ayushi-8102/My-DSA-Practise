class Solution {
public:
bool isValid(vector<int>& piles, int h,long long mid){
    long long curr=0;
    for(auto i:piles){
        curr+=i/mid;
        (i%mid==0)?curr=curr:curr++;
        }
     if(curr<=h)return true;
     else return false;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        long long sum=0;
        for(auto i:piles)sum+=i;
       long long l=1;
        long long e=sum;
        long long ans=INT_MAX;
        while(l<=e){
            long long mid=l+(e-l)/2;
            if(isValid(piles,h,mid)){
            ans=min(ans,mid);
            e=mid-1;
            }
            else l=mid+1;
        }
        return ans;
    }
};