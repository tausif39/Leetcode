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
    int minDepth(TreeNode* root) 
    {
        if(root==NULL)
        {
            return 0;
        }
        
        int leftsubtree = minDepth(root->left);
        int rightsubtree = minDepth(root->right);
        if(leftsubtree==0) return rightsubtree +1;
        if(rightsubtree==0) return leftsubtree +1;
        return min(leftsubtree , rightsubtree) + 1;
        
        
    }
};