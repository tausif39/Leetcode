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
    
    bool  helper(TreeNode* root,int long long maxvalue=1e10, int long long minvalue=-1e10) 
    {
        if(root==NULL)return true;
          
        bool right=helper(root->right,maxvalue,root->val);
        
        bool left= helper(root->left,root->val,minvalue);
        
        if(right and left and root->val>minvalue and root->val<maxvalue)return true;
        
        return false;
        
    }
    
    
    
    bool isValidBST(TreeNode* root) 
    {
        
        
        
        return helper(root);
        
        
        
     
        
        
        
        
        
    }
};