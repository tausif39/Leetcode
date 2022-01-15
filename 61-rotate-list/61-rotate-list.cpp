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
    ListNode* rotateRight(ListNode* head, int k)
    {
        if(head==NULL)return NULL;
        vector<int> v;
        
        ListNode* p=head;
         
        while(p)
        {
            v.push_back(p->val);
            p=p->next;
            
        }
        p=head;
        
        int r=k%v.size();
        
        
        reverse(v.begin(),v.end());
        reverse(v.begin(),v.begin()+r);
        reverse(v.begin()+r,v.end());
        int i=0;
         while(p)
        {
            p->val=v[i++];
            p=p->next;
            
        }
        return head;
        
    }
};