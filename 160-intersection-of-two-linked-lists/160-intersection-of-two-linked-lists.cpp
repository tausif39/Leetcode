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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) 
    {
        ListNode *  p=headA;
        ListNode *  q=headB;
        
        
        unordered_map<ListNode *, int> mp;
        
        
        while(p)
        {
            mp[p]=p->val;
            p=p->next;
            
        }
        
        while(q)
        {
            if(mp[q]!=0)return q;
            q=q->next;
            
        }
        
        
        
        return NULL;
        
        
    }
};