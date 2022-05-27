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
    
    void helper(TreeNode* root,unordered_map<int,int> &mp) 
    {
        if(root==NULL)return;
        helper(root->right,mp);
        mp[root->val]++;
        helper(root->left,mp);
        
        
    }
    
    
    vector<int> findMode(TreeNode* root) 
    {
        unordered_map<int,int> mp;
        
        helper(root, mp);
        
        vector<int> ans;
        
        int maxii=INT_MIN;
        
        for(auto it:mp)
        {
            maxii=max(maxii,it.second);
        }
        
        for(auto it:mp)if(it.second==maxii)ans.push_back(it.first);
        
                
        
        return ans;
        
        
        
    }
};