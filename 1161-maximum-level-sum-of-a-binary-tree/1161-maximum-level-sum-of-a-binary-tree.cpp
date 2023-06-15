class Solution {
public:
    int maxLevelSum(TreeNode* root) {
        int lvl = 1, x = 1;
        int mx = root->val;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            int s = q.size();
            int sum = 0;
            for(int i = 0; i < s; i++){
                TreeNode* cur = q.front();
                q.pop();
                sum += cur->val;
                if(cur->left){
                    q.push(cur->left);
                }
                if(cur->right){
                    q.push(cur->right);
                }
            }
            if(mx < sum){
                mx = sum;
                lvl = x;
            }
            x++;
        }
        return lvl;
    }
};