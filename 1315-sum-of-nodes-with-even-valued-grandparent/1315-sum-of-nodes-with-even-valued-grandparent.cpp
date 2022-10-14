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
    
    int sum=0;
    
    
    
    void dfs(TreeNode* root , vector<int> v)
    {
        if(root==NULL)
        {
            
            v.pop_back();
            
            return ;
        }
        
        v.push_back(root->val);
        
        
        dfs(root->left , v);
        
        dfs(root->right , v);
        
        
        if(v.size()>2)
        {
            
            if(v[v.size()-3]%2==0)
            {
                sum+=v[v.size()-1];
                
            }
            
        }
        
        
        v.pop_back();
        
    }
    
    int sumEvenGrandparent(TreeNode* root)
    {
        
        vector<int> v;
        
        dfs(root, v);
        
        return sum;
    }
};