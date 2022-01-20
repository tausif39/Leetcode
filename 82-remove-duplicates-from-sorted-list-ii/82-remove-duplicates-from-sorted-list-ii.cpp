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
    ListNode* deleteDuplicates(ListNode* head) 
    {
        if(head==NULL) return NULL;
        if(head->next==NULL) return head;
        if(head->next->next==NULL)
        {
            if(head->val==head->next->val)
            {
                return NULL;
            }
            else
            {
                return head;
            }
        }
        ListNode* p=head;
        vector<int> v;
        if(p->next->val!=p->val)
        {
            v.push_back(p->val);
            p=p->next;   
        }
        else
        {
            p=p->next;   
        }
        
         // p=p->next;
        ListNode* q=head;
        while(p->next)
        {
            if(p->val!=p->next->val and q->val!=p->val)
            {
                v.push_back(p->val);
                p=p->next;
                q=q->next;
            }
               
            else
            {
                p=p->next;
                q=q->next;
                
            }
        }
        
       if(p->val!=q->val)v.push_back(p->val); 
        
        if(v.size()==0) return NULL;
        p=head;
        for(int i=0;i<v.size();i++)
        {
            p->val=v[i];
            p=p->next;
            
        }
        
        q=head;
        while(q->next!=p)
        {
            q=q->next;
        }
        
        
        q->next=NULL;
        
        return head;
    }
};