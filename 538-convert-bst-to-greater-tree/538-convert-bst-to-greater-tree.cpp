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
    
    unordered_map<int,int> mp;
    
     void inorde(TreeNode* root){
        if(root==NULL) return;
        
        inorde(root->left);   // left
        root->val=mp[root->val];       // data
        inorde(root->right); 
         // right
    }
    
    
    
    void inorder(TreeNode* root, vector<int> &v){
        if(root==NULL) return;
        
        inorder(root->left,v);   // left
        v.push_back(root->val);       // data
        inorder(root->right,v);   // right
    }
    
    TreeNode* convertBST(TreeNode* root) 
    {
        if(!root)return root;
        
        // unordered_map<int,int> mp;
        
        vector<int> v;
        inorder(root,v);
        
        int n=v.size();
        sort(v.begin(),v.end());
        
        vector<int> suff(n);
        
        suff[n-1]=v[n-1];
        
        
        
       
        
        
        for(int i=n-2;i<v.size();i--)
        {
            
            suff[i]=suff[i+1]+ v[i];
            
        }
        
        
        for(int i=0;i<n;i++)
        {
            
            mp[v[i]]=suff[i];
            
        }
        
        inorde(root);
        // for(int i:)cout<<i<<" ";
        
        return root;
        
    }
};