class Solution
{
public:
    long long sumOfDivisors(int N)
    {
        long long sum1=0;
        // Write Your Code here
        for(int i=1;i<=N;i++){
            sum1+=(N/i)*i;
        }
        return sum1;
    }
};
