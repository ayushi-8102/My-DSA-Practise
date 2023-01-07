class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int sum1=0;
        int sum2=0;
        int n=gas.size();
        for(int i=0;i<gas.size();i++){
            sum1+=gas[i];
             sum2+=cost[i];
        }
        if(sum1<sum2)return -1;

        int ans=0;
        int capacity=0;
        
             for(int i=0;i<n;i++){
                capacity+=gas[i]-cost[i];
                if(capacity<0){
                    ans=i+1;
                    capacity=0;
                }
                
        }
         
        return ans;
    }
};