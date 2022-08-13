class Solution {
public:
    TreeNode* construct_tree(ListNode* start, ListNode* end){
	 // base case
        if(start==end) return NULL;
        
           // find the mid using slow and fast pointer
        
        ListNode* slow = start;
        ListNode* fast = start;
        
        while(fast!=end && fast->next!=end){
            slow = slow ->next;
            fast = fast->next->next;
        }
        
        //slow poimter will retuen mid val 
        
        // create a node and put slow -> val as value
        
        TreeNode* root = new TreeNode(slow -> val);
        root->left = construct_tree(start, slow);
        
        root->right = construct_tree(slow->next,end);
        
        
        return root;
        
    }
    TreeNode* sortedListToBST(ListNode* head) {
         return construct_tree(head, NULL);
    }
};