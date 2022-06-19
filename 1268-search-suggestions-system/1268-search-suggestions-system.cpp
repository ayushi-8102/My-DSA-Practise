class Solution {
public:
    vector<vector<string>> suggestedProducts(vector<string>& products, string searchWord) {
        int n= searchWord.size();
        auto start = products.begin();
        sort(start,products.end());
        vector<vector<string>> v;
        vector<string>temp;
        string count="";
        for(auto i:searchWord){
            count =count+i;
            temp.clear();
          start=lower_bound(start,products.end(),count);     
            for(int i=0;i<3 && start+i!=products.end();i++){       
                string s=*(start+i);      
                if(s.find(count))break;         
                temp.push_back(s);
            }
            v.push_back(temp);
        }
        return v;
    }  
};
       