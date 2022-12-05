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
// class Solution {
//  public:
//      ListNode* middleNode(ListNode* head)
//      {
//          ListNode*fast=head->next;
//          ListNode*slow=head;
//          while(fast!=NUll)
//          {
//              fast=fast->next;
//              slow=slow->next;
//          }
//          return 
         
         
//      }
// };

class Solution {
public:
    ListNode* middleNode(ListNode* head) 
    {
        int length=0;
        ListNode*p=head;
       while(p)
           {
           p=p->next;
           length++;
           
           }
        p=head;
        int middle=length/2;
        for(int i=0 ;i<middle; i++)
            {
            
            
            p=p->next;
             }
        return p;
        
    }
};