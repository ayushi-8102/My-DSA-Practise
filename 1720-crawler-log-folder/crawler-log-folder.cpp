class Solution {
public:
    int minOperations(vector<string>& logs) {
        int step=0;
        for (auto i: logs)
        if (i == "../")
            step = max(0, step - 1);
        else if (i!= "./")
            step++;
    return step;
    }
};