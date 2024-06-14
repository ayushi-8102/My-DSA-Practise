class Solution {
    int n,ans;
    bool f;
    vector<vector<int>> adj;
    vector<int> graph;
    void getEdges(vector<vector<int>>& pairs) {
        unordered_set<int> mp;
        for( vector<int>& pair : pairs ) {
            if( graph.size() < pair[1]+1 ) {
                graph.resize(pair[1]+1);
            }
            mp.insert(pair[0]);
            mp.insert(pair[1]);
            graph[pair[0]]++;
            graph[pair[1]]++;
        }
        ans = mp.size()-1;
        n = graph.size();
        f = 0;
        adj = vector<vector<int>>(n);
        for( vector<int>& pair : pairs ) {
            if( graph[pair[0]] >= graph[pair[1]] ) {
                if( graph[pair[0]] == graph[pair[1]] ) {
                    f = 1;
                }
                adj[pair[0]].push_back(pair[1]);
            } else {
                adj[pair[1]].push_back(pair[0]);
            }
        }
    }
public:
    int checkWays(vector<vector<int>>& pairs) {
        getEdges(pairs);
        vector<int> graph2(n);
        for( vector<int>& childArr : adj ) {
            for( int& child : childArr ) {
                graph2[child]++;
            }
        }
        queue<int> que;
        for( int i = 0; i< n; i++ ) {
            if( graph2[i] == 0 && graph[i] == ans  ) {
                que.push(i);
            }
        }
        while( que.size() != 0 ) {
            int size = que.size();
            int countFreq = 0;
            ans = 0;
            while( size-- ) {
                int parent = que.front();
                ans += graph[parent];
                que.pop();
                for( int& child : adj[parent] ) {
                    graph2[child]--;
                    graph[child]--;
                    if( graph2[child] == 0 ) {
                        countFreq += graph[child]+1;
                        que.push(child);
                    }
                }
            }
            if( countFreq != ans ) {
                return 0;
            }
        }
        for(int& num : graph2 ) {
            if( num != 0 ) {
                return 0;
            }
        }
        return f == 1? 2 : 1;
    }
};