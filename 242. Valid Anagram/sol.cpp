class Solution {
public:
    bool isAnagram(string a, string b) {
        int n=a.length();
        int m=b.length();
        if(m!=n)return false;
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        if(a==b)return true;
        else
        return false;
    }
};
