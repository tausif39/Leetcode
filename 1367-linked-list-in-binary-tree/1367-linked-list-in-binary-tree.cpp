class Solution {
public:
    bool tra(ListNode* head, TreeNode* root)
    {
        if(head == NULL)
        {
            return true;
        }
        if(root == NULL)
        {
            return false;
        }

        if(root->val != head->val)
        {
            return false;
        }

        return (tra(head->next,root->left) or tra(head->next, root->right));
    }
    bool isSubPath(ListNode* head, TreeNode* root) 
    {
        if(root == NULL)
        {
            return false;
        }
        if(head == NULL)
        {
            return true;
        }
        if(tra(head,root))
        {
            return true;
        }
        return (isSubPath(head,root->left) or isSubPath(head,root->right));
    }
};