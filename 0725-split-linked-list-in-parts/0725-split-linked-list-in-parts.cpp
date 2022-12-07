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
    
    vector<ListNode*> splitListToParts(ListNode* head, int k) 
    {
        
        vector<ListNode*> v;
        
        int len=0;
        
        ListNode*p=head;
        
        while(p)
        {
            len++;
            p=p->next;
        }
        
        
        int rem=len%k;
        
        int split_size=len/k;
        
        
        if(len<=k)
        {
            p=head;
            
            int i=0;
            while(p)
            {
                ListNode*temp=new ListNode(p->val);
                v.push_back(temp);
                i++;
                p=p->next;
                k--;
            }
            
            while(k--)
            {
                v.push_back(NULL);
            }
           
        }
        else
        {
            
            p=head;
            
            while(p)
            {
                
                v.push_back(p);
                int curren_len=1;
                
                while(curren_len<split_size)
                {
                    curren_len++;
                    p=p->next;
                    
                }
                
                if(rem)
                {
                    // curren_len++;
                    
                    p=p->next;
                    rem--;
                }
                
                ListNode*temp=p->next;
                p->next=NULL;
                
                p=temp;
                
                
            }
            
            
        }
        
        
        
        return v;
        
        
        
    }
};