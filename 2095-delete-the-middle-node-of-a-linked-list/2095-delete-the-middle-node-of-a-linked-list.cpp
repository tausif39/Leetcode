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
    ListNode* deleteMiddle(ListNode* head) 
    {
        
        if(head->next==NULL) return NULL;
        if(head->next->next==NULL)
        {
            head->next=NULL;
            return head;
        }
        int size=0;
        ListNode* q=head;
        while(q)
        {
            size++;
            q=q->next;
        }
        
         q=head;
        int middle=size/2 ;
          while(middle--)
          {
            q=q->next;
            
            
            
          } 
           
        
        ListNode* r=head;
        while(r->next!=q)
        {
            r=r->next;
            
            
            
        }
        
        r->next=q->next;
        
           
        
        
        
        
        
            return head;
            
            
    
        
    }
};