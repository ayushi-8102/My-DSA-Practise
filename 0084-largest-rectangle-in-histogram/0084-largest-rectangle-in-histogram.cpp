class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();
     int ans=INT_MIN;
     vector<int>nsl(n),nsr(n);
     stack<int>st;
     //nearest smallest towards left
     for(int i=0;i<n;i++){
         while(!st.empty()&&heights[i]<=heights[st.top()])st.pop();
         if(st.empty())nsl[i]=-1;
         else nsl[i]=st.top();
         st.push(i);
     }
     //emptying the stack
     while(!st.empty())st.pop();
     //nearest greater towards right
     for(int i=n-1;i>=0;i--){
         while(!st.empty()&&heights[i]<=heights[st.top()])st.pop();
         if(st.empty())nsr[i]=n;
         else nsr[i]=st.top();
         st.push(i);
     }
     for(int i=0;i<n;i++){
         int a=heights[i]*((i-nsl[i])+(nsr[i]-i)-1);
         if(a>ans)ans=a;
     }
     return ans;
    }
};