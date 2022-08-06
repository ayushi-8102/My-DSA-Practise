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
    int maxPathSum(TreeNode* root) {
        int maxsum=INT_MIN;
        heightval(root,maxsum);
        return maxsum;
    }
    private:
    int heightval(TreeNode*root,int& maxsum){
        if(root==NULL)return 0;
        int l=max(0,heightval(root->left,maxsum));
        int r= max(0,heightval(root->right,maxsum));
        maxsum=max(maxsum,l+r+root->val);
        return root->val+max(l,r);
    }
};