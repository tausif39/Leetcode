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
    
    vector<vector<int>> levelorder(TreeNode* root, vector<vector<int>> &ans)
    {
        // vector<vector<int>> ans;
        
        if(root==NULL) return ans;
        // if(root)return ans;
        queue <TreeNode*> q;
        
        q.push(root);
        
        while(!q.empty())
        {
            vector<int>  level;
            int size=q.size();
            for(int i=0;i<size;i++)
            {
               TreeNode*root=q.front();
                q.pop();
                if(root->left!=NULL) q.push(root->left);
            if(root->right!=NULL)q.push(root->right);
              level.push_back(root->val);
                
            }    
       
            ans.push_back(level);
        
        }    
        
        
            return ans;
        
        
    }
    
    
    
    
    int deepestLeavesSum(TreeNode* root) 
    {
        vector<vector<int>> ans;
        
        levelorder(root,ans);
        
        
        vector<int> v=ans[ans.size()-1];
        
    int sum=0;        
        
        for(auto f: v)sum+=f;
        
        return sum;
        
    }
};