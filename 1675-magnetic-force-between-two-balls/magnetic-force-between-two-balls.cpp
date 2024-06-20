class Solution {
public:
bool isValid(vector<int>& position, int m,int n,int mid){
    int preBall=position[0],ball=1;
    for(int i=1;i<n;i++){
        if(position[i]-preBall>=mid){
            preBall=position[i];
            ball++;
        }
    }
    return ball>=m;
}
    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(),position.end());
        int n=position.size();
        int l=1,h=position[n-1];
        int ans=0;
        while(l<=h){
            int mid=l+(h-l)/2;
            if(isValid(position,m,n,mid)){
             ans=mid;
             l=mid+1;
            }
            else h=mid-1;
        }
        return ans;
        }
};