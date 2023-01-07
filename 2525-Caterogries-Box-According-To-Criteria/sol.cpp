class Solution {
public:
    string categorizeBox(int length, int width, int height, int mass) {
        long long lo=static_cast<long long>(length);
        long long b=static_cast<long long>(width);
        long long h=static_cast<long long>(height);
        
        long long vol;
        string ans;
        vol=lo*b*h;
        int limit=1e9;
        int l=1e4;
         if((lo>=l||b>=l||h>=l||mass>=l||vol>=limit)&&mass>=100) ans="Both";
        else if(lo>=l||b>=l||h>=l||mass>=l||vol>=limit)
            ans="Bulky";
        else if(mass>=100)  ans="Heavy"; 
        
       
           else ans="Neither";        
               
    return ans;
    }
};
