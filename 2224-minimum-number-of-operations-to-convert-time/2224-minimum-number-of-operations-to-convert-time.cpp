class Solution {
public:
    int convertTime(string current, string correct) {
        int totalCurMin = 0;
        int totalTarMin = 0;
        
        int curHour = stoi(current.substr(0, 2));
        int curMin = stoi(current.substr(3));
        
        totalCurMin = curHour * 60 + curMin;
        
        int tarMin = stoi(correct.substr(3));
        int tarHour = stoi(correct.substr(0,2));
        
        totalTarMin = tarHour * 60 + tarMin;
        
        int diff = totalTarMin - totalCurMin;
        int result = 0;
        while (diff > 0){
            if (diff >= 60){
                result += (diff/60);
                diff = diff % 60;
            }
            else if (diff >= 15){
                result += (diff / 15);;
                diff = diff % 15;
            }
            else if (diff >= 5){
                result += (diff / 5);;
                diff = diff % 5;
            }
            else{
                result++;
                diff--;
            }
        }
        return result;
    }
};
