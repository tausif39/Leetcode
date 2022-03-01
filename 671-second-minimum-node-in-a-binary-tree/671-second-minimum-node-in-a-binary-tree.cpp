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
    
    void helper(TreeNode* root,vector<int > &v) 
    {
        if(root==NULL)return;
        v.push_back(root->val);
        helper(root->left,v);
        helper(root->right,v);
        
    }
    
    
    int findSecondMinimumValue(TreeNode* root) 
    {
        vector<int > v;
        
        helper(root, v) ;
        
        sort(v.begin(),v.end());
        int ans=v[0];
        int cnt=1;
        
        for(int i=1;i<v.size();i++)
        {
            if(v[i]!=ans)
            {
                cnt++;
                ans=v[i];
            }
//             else
//             {
                
//             }
            
            if(cnt==2)
            {
                return ans;
            }
            
        }
        
        return -1;
        
    }
};