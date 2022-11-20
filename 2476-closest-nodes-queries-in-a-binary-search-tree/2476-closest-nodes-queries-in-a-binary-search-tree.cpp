class Solution {
private:
    void inorder(TreeNode* root, vector<int> &nums) {
        if (root == NULL) 
            return;
        
        inorder(root->left, nums);
        nums.push_back(root->val);
        inorder(root->right, nums);
    }
public:
    vector<vector<int>> closestNodes(TreeNode* root, vector<int>& queries) {
        vector<int> nums;
        inorder(root, nums);
        vector<vector<int>> res;
        
        for (auto &num: queries) {
            int ind = upper_bound(nums.begin(), nums.end(), num) - nums.begin();
            int ind2 = lower_bound(nums.begin(), nums.end(), num) - nums.begin();
            
            int leftAns = -1, rightAns = -1;
            
            if (ind - 1 >= 0) leftAns = nums[ind -1];
            if (ind2 < nums.size()) rightAns = nums[ind2];
            
            res.push_back({leftAns, rightAns});
        }
        
        return res;
    }
};