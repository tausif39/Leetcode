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
    
    int  l=0,r=0;
    
    int dfs(TreeNode* root,int &maxlen) 
    {
        if(root==NULL)return 0;
        
        
        
        int leftnode =dfs(root->left, maxlen); 
        int rightnode = dfs(root->right, maxlen); 
        
        if(root->left!=NULL and root->left->val==root->val)
        {
            leftnode++;
        }
        
        else leftnode=0;
        
         if(root->right!=NULL and root->right->val==root->val)
         {
            rightnode++;
         }
        
        else rightnode=0;
        
        
        maxlen=max(maxlen,leftnode+ rightnode);
        
        return max(rightnode, leftnode);
        
        
    }
    
    int longestUnivaluePath(TreeNode* root) 
    {
        int maxlen=0;
      dfs(root,maxlen);
        
        return maxlen;
    }
};