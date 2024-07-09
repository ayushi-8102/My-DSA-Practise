class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        int n=customers.size();
        int left=0;
        //int a=customers[0][1];
        double sum=0;
        for(int i=0;i<n;i++){
            int a=customers[i][0]+customers[i][1];
            int t=(a+left);
            sum+=t-customers[i][0];
            if((i+1<n)&&t>customers[i+1][0])left=t-customers[i+1][0];
            else left=0;
            
        }
       return sum/n;
    }
};