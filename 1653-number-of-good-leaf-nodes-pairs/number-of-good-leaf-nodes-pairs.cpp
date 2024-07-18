/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {

public:
void solve(TreeNode* root,TreeNode* prev,unordered_set<TreeNode*>&ln,unordered_map<TreeNode*,vector<TreeNode*>>&mp){
    if(root==NULL)return;
    if(root->left==NULL&&root->right==NULL)ln.insert(root);
    if(prev!=NULL){
        mp[root].push_back(prev);
        mp[prev].push_back(root);
    }
    solve(root->left,root,ln,mp);
    solve(root->right,root,ln,mp);

}
    int countPairs(TreeNode* root, int distance) {
        unordered_set<TreeNode*>ln;
        unordered_map<TreeNode*,vector<TreeNode*>>mp;
        solve(root,NULL,ln,mp);
        int ans=0;
        for(auto i:ln){
            queue<TreeNode*>q;
        unordered_set<TreeNode*>vis;
        q.push(i);
        vis.insert(i);
        for(int level=0;level<=distance;level++){
            int size=q.size();
            while(size--){
            TreeNode*curr=q.front();
            q.pop();
            if(curr!=i&&ln.count(curr))ans++;
            for(auto j:mp[curr]){
                if(!vis.count(j)){
                    q.push(j);
                    vis.insert(j);
                }
            }
        }
        }
        }
        return ans/2;
    }
};