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
    ListNode* swapPairs(ListNode* head) 
    {
        if(head==NULL || head->next==NULL)
        {
            return head;
        }
        
        ListNode* p=head;
        ListNode*q= head; 
        // tmep
        
        q=q->next;
        q=q->next;
        head=p->next;
        p->next=q;
        head->next=p;
        ListNode* temp=p;
        
       
        while(q!=NULL && q->next!=NULL)
        { q=q->next;
          q=q->next;
          temp=p;  
          p=p->next;  
            temp->next=p->next;
            p->next=q;
            temp->next->next=p;
         
            
        }
       
        return head;
        
    }
};