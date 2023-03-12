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
    
   TreeNode* createBinaryTree(vector<vector<int>>& descriptions) {
        
        unordered_map<int, TreeNode*> mp;
        unordered_map<int,int> P, C;
        
        for(auto it : descriptions)
        {
            if(mp.find(it[0]) == mp.end())
                mp[it[0]] = new TreeNode(it[0]);
            
            if(mp.find(it[1]) == mp.end())
                mp[it[1]] = new TreeNode(it[1]);
            
            if(it[2])
                mp[it[0]]->left = mp[it[1]];
            else
                mp[it[0]]->right = mp[it[1]];
            
            P[it[0]]++;
            C[it[1]]++;
        }
        
        for(auto it : mp)
        {
            if(P.find(it.first) != P.end() and C.find(it.first) == C.end())
                return it.second;
        }
        
        return nullptr;
    }
};