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
    vector<int> rightSideView(TreeNode* root)
    {
        vector<int> ans;
        
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
       
       ans.push_back(level.back());
            
            
            
            
        }    
        
        return ans;
        
    }
};