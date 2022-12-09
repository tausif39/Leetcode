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
    
    vector<vector<int>> v;
    
    void dfs(TreeNode* root , vector<int> ans) 
    {
       if(root==NULL)return ;
           
        
        ans.push_back(root->val);
        
        if(root->left==NULL and root->right==NULL)
        {
            v.push_back(ans);
        }
        
        
            dfs(root->left,ans);
            dfs(root->right,ans);
        
            ans.pop_back();
        
    }
    
    int maxAncestorDiff(TreeNode* root) 
    {
        
        vector<int> ans;
        
        dfs(root,ans);
        
//         for(int i=0;i<v.size();i++)
//         {
//             for(int j=0;j<v[i].size();j++)
//             {
//                 cout<<v[i][j];
//             }
            
//             cout<<endl;
            
//         }
        
        
        
        for(int i=0;i<v.size();i++)
        {
            sort(v[i].begin(), v[i].end());
        }
        
        int maxii=INT_MIN;
        
        for(int i=0;i<v.size();i++)
        {
            int diff=abs(v[i][0]-v[i][v[i].size()-1]);
                         
            maxii=max(diff,maxii);
        }
        
        return maxii;
        
    }
};