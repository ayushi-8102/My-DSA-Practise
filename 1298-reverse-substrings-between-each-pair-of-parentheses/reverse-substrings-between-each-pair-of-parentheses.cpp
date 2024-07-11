class Solution {
public:
    string reverseParentheses(string s) {
        stack<char>st;
        for (char i : s) {
            if (i == ')') {
                string temp;
                while (!st.empty() && st.top() != '(') {
                    temp += st.top();
                    st.pop();
                }
                if (!st.empty()) st.pop();
                for (char ch : temp) {
                    st.push(ch);
                }
            } else {
                st.push(i);
            }
        }
     string result;
        while (!st.empty()) {
            result=st.top()+result;
            st.pop();
        }
        return result;
    }
};