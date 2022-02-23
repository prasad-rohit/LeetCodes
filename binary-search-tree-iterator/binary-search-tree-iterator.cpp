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
class BSTIterator {
public:
    vector<int> in;
    int x = 0;
    int size= 0;
    void makein(TreeNode* r){
        if(!r){
            return;
        }
        makein(r->left);
        in.push_back(r->val);
        makein(r->right);
    }
    
    BSTIterator(TreeNode* root) {
        makein(root);
        size = in.size();
    }
    
    int next() {
        return in[x++];
    }
    
    bool hasNext() {
        if(x<size) return true;
        return false;
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */