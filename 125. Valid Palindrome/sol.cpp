class Solution {
public:
    bool isPalindrome(string s) {
        if(s.empty())
        return true;
        for(int i=0,j=s.length()-1;i<j;i++,j--){
            while(!isalnum(s[i])&& i < j)i++;//isalnum is used to know whether it has non alphanumeric words or not
            while(!isalnum(s[j])&& i < j)j--;
            if(tolower(s[i])!=tolower(s[j])) return false;
        }
        return true;
    }
};
