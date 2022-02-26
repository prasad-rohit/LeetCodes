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
    int dfs(TreeNode* root,bool f){
        if(!root) return 0;
        if(root->left==NULL && root->right==NULL){
            return f ? root->val : 0;
        }
        return dfs(root->left,true)+dfs(root->right,false);
    }
    
    int sumOfLeftLeaves(TreeNode* root) {
        bool isLeft = false;
        return dfs(root,isLeft);
    }
};