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
    ListNode* removeElements(ListNode* head, int val) 
    {
        if(head==NULL) return head;
        if(head->next==NULL )
        {
            if(head->val==val)
            {
                return nullptr;
            }
            else{
            return head;}
        }
         ListNode* p=head;
        vector<int> v;
            
        while(p)
        {
            if(p->val!=val)
            {
                v.push_back(p->val);
                p=p->next;
            }
            else
            {
            p=p->next;
            }
        }
            
            if(v.size()==0) return NULL;
            
           p=head;
        for(int i=0;i<v.size();i++)
        {
            p->val=v[i];
            p=p->next;
        }
        
        ListNode* q=head;
        while(q->next!=p)
        {
            q=q->next;
        }
        
        q->next=NULL;
        
        return head;
        
    }
};