class Solution {
public:
    int reverse(int x) {
       int ans = 0;
       while (x){
           int digit = x % 10;
           x /= 10;
           if ((ans > 0 && ans > (INT_MAX - digit)/10) || (ans < 0 && ans < (INT_MIN - digit)/10)) return 0;
           ans = ans * 10 + digit;
       }
       return ans;
   }
};
