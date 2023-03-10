/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
    int len=0;
    ListNode*h;
public:
    
    
    Solution(ListNode* head) 
    {
        h=head;
        ListNode* temp=head;
        
        while(temp)
        {
            temp=temp->next;
            len++;
        }
        
        
    }
    
    int getRandom() 
    {
        int random_indx= rand()%len;
        
        ListNode* temp=h;
        
        for(int i=0;i<random_indx;i++)
        {
            temp=temp->next;
        }
        
        
        return temp->val;
        
        
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(head);
 * int param_1 = obj->getRandom();
 */