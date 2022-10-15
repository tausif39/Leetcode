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
    
     void levelOrder(TreeNode* root , vector<vector<int>> &ans)
     {
        
        
        if(root==NULL) return ;
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
    }
    
    
    bool isEvenOddTree(TreeNode* root)
    {
        vector<vector<int>> ans;
        
        levelOrder(root,ans);
        
        
        for(int i=0;i<ans.size();i++)
        {
            
            if(i%2==0)
            {
                if(ans[i][0]%2==0)return false;
            }
            else
            {
                if(ans[i][0]%2!=0)return false;
            }
            
            for(int j=0;j<ans[i].size()-1;j++)
            {
                
                
                if(i%2==0)
                {
                   // if(ans[i][j]%2==0) return false;/
                    
                   if(ans[i][j]>=ans[i][j+1] || ans[i][j]%2==0 || ans[i][j+1]%2==0) return false;
                    
                }
                
                else
                {
                    if(ans[i][j]<=ans[i][j+1] || ans[i][j]%2!=0 || ans[i][j+1]%2!=0) return false;
                }
                
            }
            
        }
        
        return true;
        
        
    
    }
};