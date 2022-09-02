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
    vector<double> averageOfLevels(TreeNode* root) 
    {
        queue<TreeNode *> q;
        vector<double> ans;
        q.push(root);
        while(!q.empty())
        {   double average=0;
            vector<double> level;
            int n= q.size();
            for(int i=0;i<n;i++)
            {
                TreeNode * node = q.front();
                q.pop();
                if(node->left!=NULL) q.push (node->left);
                if(node->right!=NULL) q.push (node->right);
                level.push_back(node->val);   
            }
         
         
         for (int i=0;i<level.size();i++)
         {
             average+=level[i];
             
             
         }   
         average= average /level.size() ;  
         
          ans.push_back(average);  
         
        }
        return ans;
        
    }
};