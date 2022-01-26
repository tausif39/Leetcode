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
    int pairSum(ListNode* head) 
    {
        ListNode* p=head ;
        
//         int cnt=0;
//         while(p)
//         {
//           cnt++;
//           p=p->next;
    
//         }
        
        vector<int> v;
        // int i=0;
        for(auto p=head; p!=NULL;p=p->next)
        {
           v.push_back(p->val) ;
            
        }
        
        int twin=(v.size()/2)-1;
        
        int maxii=0;
        
        for(int i=0;i<=twin;i++)
        {
            
            maxii=max(maxii,(v[i]+v[v.size()-1-i]));
            
            
        }
        
        return maxii;
        
        
        
    }
};