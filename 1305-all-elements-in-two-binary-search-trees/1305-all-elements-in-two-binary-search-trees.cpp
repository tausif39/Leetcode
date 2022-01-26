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
    
     void prrint(TreeNode* root ,vector<int> & arr)
     {
         if(root==NULL) return ;
         
         prrint( root->left ,arr);
         arr.push_back(root->val);
         prrint( root->right ,arr);

     
     }
    
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) 
    {
        vector<int>  arr;
        
        prrint( root1, arr);
        prrint( root2, arr);
        
        sort(arr.begin(),arr.end());
        
        
        return arr;
    }
};