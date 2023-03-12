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
   ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int>V;
        for(int i=0;i<lists.size();i++){
            while(lists[i]){
                V.push_back(lists[i]->val);
                lists[i] = lists[i]->next;
            }
        }
        sort(V.rbegin(),V.rend());
        ListNode* ans = nullptr;
        for(int i=0;i<V.size();i++){
            ans = new ListNode(V[i],ans);
        }
        return ans;
    }
};