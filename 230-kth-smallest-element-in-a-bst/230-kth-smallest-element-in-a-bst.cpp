class Solution {
public:
    void inorder(TreeNode* root, int& k, int &res) {
        if (!root) return;
        inorder(root->left, k,res);
        if (--k == 0) res = root->val;
        inorder(root->right, k,res);
    }
    
    int kthSmallest(TreeNode* root, int k) {
        int res;
        inorder(root, k,res);
        return res;
    }
    
// private:
//     int res;
};
