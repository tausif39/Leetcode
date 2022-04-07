class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        /*
            As we've to take max 2 elements, we'll use max-heap(priority_queue)
        */
        
        // step 1: storing the whole vector into priority queue
        priority_queue<int> pq(stones.begin(), stones.end());
        
        // we'll take top two elements and store their
        // differences untill the size becomes 1.
        while(pq.size() > 1)
        {
            int top1 = pq.top();
            pq.pop();
            int top2 = pq.top();
            pq.pop();
            int dif = top1 - top2;
            pq.push(dif);
        }
        
        // then we'll return the element
        return pq.top();
    }
};