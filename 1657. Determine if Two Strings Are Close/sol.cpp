class Solution {
public:
    bool closeStrings(string word1, string word2) {
        if(word1.size()!=word2.size())
        return false;
       vector<int>a(26,0),b(26,0),c(26,0),d(26,0);
       for(auto i:word1) a[i-'a']++,c[i-'a']=1;//smart way of counting 
       for(auto j:word2) b[j-'a']++,d[j-'a']=1;
       sort(a.begin(),a.end());
       sort(b.begin(),b.end());
       return a==b&&c==d;
      
    }
};
