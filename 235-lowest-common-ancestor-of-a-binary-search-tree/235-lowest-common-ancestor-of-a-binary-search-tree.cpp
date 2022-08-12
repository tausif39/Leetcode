// )
//  * Definition for a binary tree node.
//  * struct TreeNode {
//  *     int val;
//  *     TreeNode *left;
//  *     TreeNode *right;
//  *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
//  * };
//  */

class Solution {
public:
    
    TreeNode* dfs(TreeNode* root, TreeNode* p, TreeNode* q) 
    {
        if(root==NULL || root==p || root==q)
        {
            return root;
        }
        
        TreeNode*leftnode=dfs(root->left,p,q);
        TreeNode*rightnode=dfs(root->right,p,q);
        
        if(rightnode==NULL )
            return leftnode;
        else if(leftnode==NULL )
            return rightnode;
        else return root;
    }
    
    
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) 
    {
        
        if(root==p || root==q)return root;
        
        if(p->val<root->val and q->val>root->val)
        {
            return root;
        }
        
        else if(q->val<root->val and p->val>root->val)
        {
            return root;
        }
        
        return dfs(root,p,q);
        

        
        
    }
};