/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    
     bool hasCycle(ListNode *head) 
    {
        ListNode *fast=head;
        ListNode *slow=head;
        if(head==NULL)
        {
            return false;
        }
        if(head->next==NULL)
        {
            return false;
        }
        
        while(fast && fast->next )
        {   
            
            fast=fast->next->next;
            slow=slow->next;
            if(slow==fast)
            {
                return true;
            }
            
            
        }
        
        
        
        return false;
    }
    
    ListNode *detectCycle(ListNode *head) 
    {
        if(hasCycle(head)==false)return NULL;
        
        unordered_map< ListNode *, int > mp;
        
        ListNode *p=head;
        
        while(mp[p]==0)
        {
            mp[p]=1;
            p=p->next;
        }
        
        
        return p;
        
        
        
        
    }
};