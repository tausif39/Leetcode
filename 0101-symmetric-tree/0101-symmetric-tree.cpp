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
    
   bool helper(TreeNode*Leftsubtree , TreeNode*Rightsubtree )
    {
        if(Leftsubtree==NULL && Rightsubtree==NULL)return true;
        
        if(Leftsubtree!=NULL && Rightsubtree==NULL) return false;
        if(Leftsubtree==NULL && Rightsubtree!=NULL) return false;
        if(Leftsubtree->val!=Rightsubtree->val) return false;
       // else if(Leftsubtree->val==Rightsubtree->val) return true;
       
        
        
        
 return helper(Leftsubtree->left,Rightsubtree->right) && helper(Leftsubtree->right,Rightsubtree->left); 
        
    }
    
    
    bool isSymmetric(TreeNode* root)
    {   
        if(root==NULL) return true;
        return helper(root->left,root->right);
        
    }
};