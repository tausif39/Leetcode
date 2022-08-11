class Solution {
public:
    
    void find_ans(TreeNode* root,int sum,int &ans){
        if(root==NULL)return ;
        sum=sum*10+root->val;
        if(root->left==NULL and root->right==NULL){
            ans+=sum;
            return ;
        }
        find_ans(root->left,sum,ans);
        find_ans(root->right,sum,ans);
    }
    int sumNumbers(TreeNode* root) {
        int ans=0;
        find_ans(root,0,ans);
        return ans;
    }
};