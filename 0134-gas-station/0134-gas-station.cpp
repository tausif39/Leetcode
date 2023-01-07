class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int ng=gas.size();
        int i,tgas=0,tcost=0,curgas=0,index;
        for(i=0;i<ng;i++){
            tgas+=gas[i];
            tcost+=cost[i];
            curgas=curgas+gas[i]-cost[i];
            if(curgas<0){
                index=i+1;
                curgas=0;
            }
        }

        return (tgas<tcost)?-1:index;

    }
};