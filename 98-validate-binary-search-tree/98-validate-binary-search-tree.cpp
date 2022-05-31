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
    
 void inorder(TreeNode* root, vector<int> &v){
        if(root==NULL) return;
        
        inorder(root->left,v);   // left
        v.push_back(root->val);       // data
        inorder(root->right,v);   // right
    }
    
    
    // vector<int> inorderTraversal(TreeNode* root) {
    //     vector<int> v;
    //     inorder(root,v);
    //     return v;
    // }
    
    bool isValidBST(TreeNode* root) 
    {
        
        vector<int> v;
        inorder(root,v);
        
        // return helper(root);
        
        int left=0,node=1,right=2;
        
        while(right<v.size())
        {
            if(v[left]>=v[node] || v[right]<=v[node])return false;
            
            ++left,++node,++right;
        }
        
        
        while(node<v.size())
        {
             if(v[left]>=v[node])return false;
            ++left,++node;
        }
        
        
        return true;
     
        
        
        
        
        
    }
};