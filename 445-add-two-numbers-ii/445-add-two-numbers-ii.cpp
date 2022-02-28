class Solution {
public:
    
     ListNode* reverseList(ListNode* head) 
    {   
       ListNode* p=head;
       ListNode* q=NULL;
      ListNode* r=NULL;         
      while(p!=NULL)
      {
          r=q;
          q=p;
          p=p->next;
          q->next=r;
          
      }
        
         
         
        head=q;
        
        
       return head;
        
        
        
        
    }
    
    
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
       l1= reverseList(l1);
        
       l2= reverseList(l2);
        
        ListNode* dummy=new ListNode();
        ListNode* temp=dummy;
        int c=0;
        while(l1!=NULL || l2!=NULL || c)
        {
            int s=0;
            if(l1)
            {
                s+=l1->val;
                l1=l1->next;
            }
            if(l2){
                s+=l2->val;
                l2=l2->next;
            }
            s+=c;
            c=s/10;
            ListNode* node=new ListNode(s%10);
            temp->next=node;
            temp=temp->next;
            
        }
        
        dummy=reverseList(dummy);
        
        ListNode*z=dummy;
        
        
            while(z->next->next)
            {
                z=z->next;
                
            }
            
            z->next=NULL;
        
        
        return dummy;
    }
};