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
    
    pair<int,int> order(TreeNode* root)
    {
        if(root==NULL) return {0,0};
        
        
        // v.push_back(root->val);       // data
        
        
        
        
        pair<int ,int> lh=order(root->left);
        pair<int, int> rh=order(root->right);
        
        
        
        int sum= lh.first+rh.first+root->val;
        int element= lh.second + rh. second +1 ;
        
        
        if((sum/element)==root->val)cnt++;
        
        return {sum,element};
 
        
    }
    
    int averageOfSubtree(TreeNode* root) 
    {
        // vector<int> v;
        
        order(root);
        
        // for(auto it:v)cout<<it<<" ";
        
        
        return cnt;
        // return 0;
        
        
    }
};