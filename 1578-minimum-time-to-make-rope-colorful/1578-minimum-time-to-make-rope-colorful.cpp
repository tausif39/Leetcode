class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int sum = 0 ;
        
        for(int i = 1 ; i < neededTime.size() ; i++){
            int tempSum = neededTime[i-1] ; 
            int max = neededTime[i-1] , count = 1 ;
            
            
            while(colors[i]==colors[i-1]){
                tempSum += neededTime[i] ; 
                if(max <  neededTime[i])max =  neededTime[i] ;
                i++ ;
                count++;
                if(i==neededTime.size()) break ;
            }
            if(count ==1) continue ;
            sum +=tempSum - max ;
            
        }
        
        return sum ;
    }
};