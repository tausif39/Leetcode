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
    
    void levelordertraversal(TreeNode* root , vector<vector<int>> &ans) 
    {
        
        
         
        queue<TreeNode*> q;
        
        q.push(root);
        
        while(!q.empty())
        {
            int n=q.size();
            
            vector<int> level;
            
            for(int i=0;i<n;i++)
            {
                TreeNode*node=q.front();
                
                q.pop();
                
                if(node->left)q.push(node->left);
                
                if(node->right)q.push(node->right);
                
                level.push_back(node->val);
                    
            }
            
            ans.push_back(level);
            
        }

        
    }
    
    
    vector<int> largestValues(TreeNode* root) 
    {
        if(root==NULL)return {};
        vector<vector<int>> ans;
        levelordertraversal(root,ans);
        
        vector<int> res;
        
        for(int i=0;i<ans.size();i++)
        {
            int m=ans[i].size();
            sort(ans[i].begin(),ans[i].end());
            res.push_back(ans[i][m-1]);
        }
        
        
        
        
        
        
        return res;
    }
};