class Solution {
public:
    int mirrorReflection(int p, int q) {
        int ans;
    while(p%2==0&&q%2==0){
        p=p/2;
        q=q/2;
    }
        ans=1-p%2+q%2;
        return ans;
    }
    
};