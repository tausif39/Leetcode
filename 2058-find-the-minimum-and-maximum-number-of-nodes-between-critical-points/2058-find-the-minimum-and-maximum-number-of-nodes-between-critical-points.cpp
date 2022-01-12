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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) 
    {
        vector<int> ans(2);
        ans[0]=-1;
        ans[1]=-1;
        if(head->next->next==NULL) return ans;
        ListNode * p=head;
        ListNode * q=head;
       p= p->next;
        int cnt=2;
        vector<int> v;
        
        while(p->next)
        {
            if(p->next->val<p->val and p->val >q->val)
            {
                v.push_back(cnt);
                
            }
            
           if(p->next->val>p->val and p->val <q->val)
            {
                v.push_back(cnt);
                
                
            }
            
            p=p->next;
            cnt++;
            q=q->next;
            
        }
        
        if(v.size()==0)return ans;
        if(v.size()==1)return ans;
        
        int minDistance=INT_MAX;
        
        for(int i=0;i<v.size()-1;i++)
        {
           minDistance = min(minDistance,abs(v[i]-v[i+1]));
        }
                              
        int maxDistance=abs(v[0]-v[v.size()-1]);
         
        ans[0] = minDistance;              
        ans[1]=maxDistance;
        return ans;   
        
    }
};