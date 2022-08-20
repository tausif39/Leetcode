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
    
    bool isequal(TreeNode* root, int val) 
    {
        if(root==NULL)return true;
        
        if(root->val!=val)return false;
        
        // else return false;
        
        // if(isequal(root,val)==false)return false;
        
        
        
        bool left= isequal(root->left, val);
        bool right = isequal(root->right, val);
        
        return left and right;
        
        
    }
    
    
    bool isUnivalTree(TreeNode* root) 
    {
        
        return isequal(root, root->val);
        
        
    }
};