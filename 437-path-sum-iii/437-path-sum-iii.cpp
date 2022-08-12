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
    
    int cnt=0;
    
    int dfs(TreeNode* root, int targetSum , vector<int> v)
    {
        // int sum=0;
        if(root==NULL)return 0;
      
//         if(sum==root->val)
//         {
            
//             cnt=1;
//         }
        
        // sum=sum-root->val;
 
        v.push_back(root->val);
        dfs(root->left,targetSum, v);
        dfs(root->right,targetSum,v);
        
        int long long sum=0;
        for(int i=v.size()-1;i>=0;i--)
        {
            sum+=v[i];
            
            if(sum==targetSum)cnt++;
            
        }
        
        v.pop_back();
    
        return cnt;
        
    }
    
    int pathSum(TreeNode* root, int targetSum) 
    {
        
        vector<int> v;

        dfs(root,targetSum, v);
        
        return cnt;
    }
};