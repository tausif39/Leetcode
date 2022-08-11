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
    
    void dfs(TreeNode* root,vector<int> &v,vector<vector<int>> &ans, int targetSum,int sum) 
    {
        if(root==NULL)return;
        
        if(root->left==NULL and root->right==NULL)
        {
            sum+=root->val;
            v.push_back(root->val);
            if(sum==targetSum)
            {
                ans.push_back(v);
            }
            
            sum=0;
            
            v.pop_back();
            
            return ;
                    
        }
        
        sum+=root->val;
        
        v.push_back(root->val);
        
        dfs(root->left,v,ans,targetSum,sum) ;
        dfs(root->right,v,ans,targetSum,sum) ;
        
        v.pop_back();
        
    }
    
    
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) 
    {
        vector<int> v;
        vector<vector<int>> ans;
        dfs(root,v,ans, targetSum,0);
        
        return ans;
        
    }
};