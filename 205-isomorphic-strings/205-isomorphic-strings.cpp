class Solution {
public:
    bool isIsomorphic(string s, string t) {
      map<char,int>a;
        map<char,int>b;
        for(int i=0;i<s.size();i++){
           a[s[i]]=i+1;
            b[t[i]]=i+1;
        }
          for(int i=0;i<s.size();i++){
           if(a[s[i]]!=b[t[i]])return false;
        }
        return true;
    }
};