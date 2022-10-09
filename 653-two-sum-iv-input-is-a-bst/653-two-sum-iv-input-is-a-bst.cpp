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
    
    void helper(TreeNode* root,vector<int> & v)
    {
        if(root==NULL) return;
        helper(root->left, v) ;
        v.push_back(root->val);
        helper(root->right, v);
        
    }
    
    bool findTarget(TreeNode* root, int k) 
    {
        vector<int> v; 
        helper(root ,v);
        // sort(v.begin(),v.end());
        int i=0;
        int j=v.size()-1;
        while(i<j)
        {
            if(v[i]+v[j]==k)return true;
            
            if(v[i]+v[j]<k)
            {
                i++;
                
            }
            
            if(v[i]+v[j]>k)
            {
              j--;  
                
            }
            
            
        }
        
        return false;
        
        
    }
};