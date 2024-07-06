class Solution {
public:
    int passThePillow(int n, int time) {
       int rounds=time/(n-1);
       int ind=time%(n-1);
       return rounds%2==0?(ind+1):(n-ind);
    }
};