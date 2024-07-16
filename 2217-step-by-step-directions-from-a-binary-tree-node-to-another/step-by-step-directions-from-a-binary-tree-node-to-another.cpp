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
TreeNode*LCA(TreeNode* root, int src, int dest){
    if(!root)return NULL;
    if(root==NULL||root->val==src||root->val==dest)return root;
    TreeNode*l=LCA(root->left,src,dest);
    TreeNode*r=LCA(root->right,src,dest);
      if(l&&r)return root;
      return l?l:r;
}
bool Path(TreeNode* root, int num, string &res){
    if(root==NULL)return false;
    if(root->val==num)return true;
    res.push_back('L');
    if(Path(root->left,num,res)==true)return true;
    res.pop_back();
    res.push_back('R');
    if(Path(root->right,num,res)==true)return true;
    res.pop_back();
 return false;
}
    string getDirections(TreeNode* root, int startValue, int destValue) {
      string src_to_lca="";
      string lca_to_dest="";
      string ans="";
      TreeNode*lca = LCA(root,startValue,destValue);
      Path(lca,startValue,src_to_lca);
      Path(lca,destValue,lca_to_dest);
      for(int i=0;i<src_to_lca.length();i++){
        ans.push_back('U');
      }
      ans+= lca_to_dest;
      return ans;
    }
};