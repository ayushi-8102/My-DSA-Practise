class Solution {
public:
    int minPatches(vector<int>& nums, int n) {
        //following greedy-> in ex-> [1.5.10]
        //N=20
        /*
        for [1]==> range of sum-> [1,2)
         for [1,2] ==> [1,4)
         for [1,2,3] ==> [1,7)(here, our range satisfies the condition)
         so patch added =1(no-> 2)

         ex 2-> [1,2,4,13,43] & n=100
         for [1] ==> range of sum [1,2)
         for [1,2] ==> range [1,4) (no need to add 3 as it is already in range)
         for [1,2,4] ==> [1,8) (no need to add any patch till 7)
         now, add 8
         for [1,2,4,8] ==> [1,16) (no need to add any patch till 15)
         for [1,2,4,8,13] ==> [1,29) (no need to add patch till 28)
         now, add 29
         for [1,2,4,8,13,29] ==>[1,58) (no need to add any patch till 57)
         for [1,2,4,8,13,29,43] --> [1,100] (reached the target)
         so total patch added--> 2



        */
        int i=0;
        int total=0;
        long long sum=1;
        while(sum<=n){
            sum+=(i<nums.size()&&nums[i]<=sum)?nums[i++]:sum;
            total++;
        }
        return total-i;
    }
};