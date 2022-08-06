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
    
        void helper(TreeNode* root, vector<string > & ans, string v) 
    {
        
            if(root==NULL)
            {
                 v="";
                return;
            }

        
            v+=to_string(root->val);
            v+="->";
        
            if(root->left==NULL and root->right==NULL)
            {         
                v.pop_back();
                v.pop_back();
                ans.push_back(v);
                
            }
        
        helper(root->left, ans,v); 
        
        helper(root->right, ans,v);
                
        
        
        }
    
    vector<string> binaryTreePaths(TreeNode* root) 
    {
        vector<string > ans;
        
        
        string v="";
        
        helper(root,ans,v);
        
        return ans;
        
    }
};