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
    ListNode* swapNodes(ListNode* head, int k) 
    {
          ListNode* p=head;
        ListNode* q=head;
        ListNode* k1=head;
        ListNode* k2=head;
        
        
        
        
        int stop1=k-1;
        
        while(stop1--)
        {
            p=p->next;
            
            
        }
        k1=p->next;
        int l=0;
        
        while(q)
        {
           q=q->next; l++;
        }
        
        int stop2=l-k;
        
        q=head;
        
        while(stop2--)
        {
            q=q->next;
            
            
        }
        
        
        swap(q->val,p->val);
        
        return head;
        
//         int x=p->val;
        
//         p->val=q->val;
        
//         q->val=x;
        
//         return head;
        
        
        
        
    }
};