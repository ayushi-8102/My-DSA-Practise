class Solution {
public:
    bool judgeSquareSum(int c) {
        long long i=0,j=sqrt(c);
        while(i<=j){
            if((i*i)+(j*j)==c)return true;
            if((i*i)+(j*j)>c)j--;
            else i++;
        }
        return false;
    }
};