class Solution {
public:
    bool isHappy(int n) {
        unordered_map<int,int>mp;
        while(n!=1){
            if(mp[n]==0)
            mp[n]++;
            else return false;
              int num=0;
            while(n!=0){
            num+=pow((n%10),2);
            n=n/10;
            }
            n=num;
        }
    return true;
    }
};