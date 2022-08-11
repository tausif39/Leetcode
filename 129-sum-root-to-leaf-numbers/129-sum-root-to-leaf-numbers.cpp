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
    
    int number_to_ssum(vector<int> &nums)
    {
        int long long ans=0;
        
        int i=nums.size()-1;
        int  long long base=1;
        
        while(i>=0)
        {
            int long long digit=base*nums[i];
            ans+=digit;
            
            base*=10;
            
            i--;
        }
        
        // cout<<ans<<" ";
              
        return ans;
        
    }
    
    
    void dfs(TreeNode* root, int &ans,vector<int> nums )
    {
        if(root==NULL)return ;
        
        if(root->left==NULL and root->right==NULL)
        {
            nums.push_back(root->val);
            ans+=number_to_ssum(nums);
            
            nums.clear();
            return ;
        }
        
        
        nums.push_back(root->val);
        dfs(root->left,ans, nums);
        dfs(root->right,ans, nums);
        
        // nums.pop_back();
        
        
    }
    
    
    
    int sumNumbers(TreeNode* root) 
    {
        int ans=0;
        
        vector<int> nums;
        dfs(root,ans, nums);
        
       
        return ans;
    }
};