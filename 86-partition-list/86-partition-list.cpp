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
public:
    ListNode* partition(ListNode* head, int x) 
    {
        ListNode*first= new ListNode(-1);
        
        ListNode*second= new ListNode(-2);
        
        ListNode*p=head;
        
        ListNode*q=first;
        
        ListNode*z=second;
        
        while(p)
        {
            
            if(p->val<x)
            {
                ListNode*ok= new ListNode(p->val);
                
                q->next=ok;
                q=q->next;
                
                
            }
            else 
            {
                ListNode*ok= new ListNode(p->val);
                z->next=ok;
                z=z->next;
                
            }
 
         p=p->next;            
            
        }
        
        second=second->next;
        
        q->next=second;
        
        first=first->next;
        
        return first;
        
        
        
        
        
        
        
        
        
        
        
        
        
    }
};