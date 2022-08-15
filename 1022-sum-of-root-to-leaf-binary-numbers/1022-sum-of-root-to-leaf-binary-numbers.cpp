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
    
    
//     int long long base=1;
    
//     int sum=0;
    
//     void dfs(TreeNode* root, vector<int> &v) 
//     {
//         if(root==NULL)
//             return;
        
//         if(root->left==NULL and root->right==NULL)
//         {
//             // base=1;
//             v.push_back(root->val);
//             reverse(v.begin(),v.end());
//             return;
            
//         }
        
//         dfs(root->left, v) ;
//         dfs(root->right, v) ;
        
//         // /v.push_back(root->val);        
        
//         sum+=base*root->val;
//         base*=2;
        
//     }
    
    // int val=0;
    
    int sumRootToLeaf(TreeNode* root , int val=0) 
    {
        if(root==NULL)
            return 0;
        val=val*2+root->val;
        
        // int lef=sumRootToLeaf(root->left,val);
        // int righ=sumRootToLeaf(root->right,val);
        
        return root->left==root->right ? val : sumRootToLeaf(root->left,val)+sumRootToLeaf(root->right,val);
        
        
        
        
    }
};