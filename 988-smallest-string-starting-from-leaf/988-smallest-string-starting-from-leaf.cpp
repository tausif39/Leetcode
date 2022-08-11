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
    
    void helpe(TreeNode* root, vector<string> &ans , string s)
    {
        if(root==NULL)
        {
            return ;
        }
        
        if(root->left==NULL and root->right==NULL)
        {
            char c=root->val + 'a';
            s+=c;
        
            reverse(s.begin(),s.end());
            ans.push_back(s);
            s="";
            return;
            
        }
        
        char c=root->val + 'a';
        
        s+=c;
        
        helpe(root->left,ans, s);
        helpe(root->right,ans, s);
        
        
        
    }
    
    string smallestFromLeaf(TreeNode* root) 
    {
        
//         vector<string> letters(26,0)
        
//             for()
            
        
        
        vector<string> ans;
        string s="";
        helpe(root,ans,s);
        
        // ans.push_back("ab");
        // ans.push_back("aba");
        
        sort(ans.begin(),ans.end());
        // for(int i=0;i<ans.size();i++)
        // {
        //     cout<<ans[i]<<" ";
        // }
        
        return ans[0];
        
        
    }
};