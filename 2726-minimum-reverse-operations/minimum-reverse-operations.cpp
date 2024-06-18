class Solution {
public:
    vector<int> minReverseOperations(int n, int p, vector<int>& banned, int k) {
        vector<int> ans(n, -1);
        queue<int> q;
        set<int> evens, odds;
        set<int>* evens_odds = p % 2 == 0 ? &evens : &odds;
        unordered_set<int> banned_set(banned.begin(), banned.end());
        int ops = 1;

        for (int i = 0; i < n + 2; ++i) {
            if (!banned_set.contains(i)) {
                (i % 2 == 0 ? evens : odds).insert(i);
            }
        }

        ans[p] = 0;
        q.push(p);
        evens_odds->erase(p);

        while (!q.empty()) {
            if (k % 2 == 0) {
                evens_odds = evens_odds == &evens ? &odds : &evens;
            }

            int cnt = q.size();

            for (int i = 0; i < cnt; ++i) {
                int pos1 = q.front();
                int min_window_begin = max(0, pos1 - k + 1);
                int max_window_begin = min(pos1, n - k);
                int min_next_pos1 = k - 1 + 2 * min_window_begin - pos1;
                int max_next_pos1 = k - 1 + 2 * max_window_begin - pos1;

                q.pop();

                auto it = evens_odds->lower_bound(min_next_pos1);

                while (*it <= max_next_pos1) {
                    ans[*it] = ops;
                    q.push(*it);
                    auto erase_it = it++;
                    evens_odds->erase(erase_it);
                }
            }

            ++ops;
        }

        return ans;
    }
};