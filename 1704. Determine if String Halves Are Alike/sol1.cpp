class Solution {
public:
    bool halvesAreAlike(string s) {
        int n= s.size();
        int m= n/2;
        int counta=0;
        int countb=0;
        for(int i=0;i<m;i++){
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
            counta++;
        }
         for(int i=m;i<n;i++){
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
            countb++;
        }
        if(counta!=countb)return false;
        else if(counta==countb)return true;
        return 0;
    }
};
