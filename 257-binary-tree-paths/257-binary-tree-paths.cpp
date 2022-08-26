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
void binaryTreePaths(vector<string>& ans, TreeNode* root, string t) {
    if(!root)return;
    
    if(root->left==NULL&& root->right==NULL) {
        ans.push_back(t);
        return;
    }
    
    
    if(root->left)(binaryTreePaths(ans, root->left, t + "->" + to_string(root->left->val)));
    if(root->right)(binaryTreePaths(ans, root->right, t + "->" + to_string(root->right->val)));
}

vector<string> binaryTreePaths(TreeNode* root) {
    vector<string> ans;
    if(!root) return ans;
    
    binaryTreePaths(ans, root, to_string(root->val));
    return ans;
}
};