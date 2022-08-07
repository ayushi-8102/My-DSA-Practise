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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        if(root==NULL)return ans;
        queue<TreeNode*>q;
        bool LtoR=true;
        q.push(root);
        while(!q.empty()){
            int size=q.size();
            vector<int>v(size);
            for(int i=0;i<size;i++){
                TreeNode*node=q.front();
                q.pop();
                int index=(LtoR)?i:(size-1-i);//switch case
                v[index]=node->val;
                if(node->left)q.push(node->left);
                if(node->right)q.push(node->right);
                
            }
             LtoR=!LtoR;
            ans.push_back(v);
        }
       return ans;  
    }
};