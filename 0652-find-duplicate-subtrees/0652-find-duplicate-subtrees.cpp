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
    
    
   map<string, int> mp;
    
    string dfs(TreeNode* root,vector<TreeNode*> &res) 
    {
        if(root==NULL)return "$";
        
        string s;
         
        s+=dfs(root->left,res)+ ';' ;
        s+=dfs(root->right,res)+ ';' ;
        s+=to_string(root->val);
        
        
        mp[s]++;
        
        if(mp[s]==2)
        {
            res.push_back(root);
        }
        
        
        cout<<s<<endl;
        
        return s;
        

    }
    
    
    
    
    vector<TreeNode*> findDuplicateSubtrees(TreeNode* root) 
    {
        vector<TreeNode*> res;
        
        dfs(root,res);
        
        // for(auto it:mp)
        
        
        return res;
        
    }
};