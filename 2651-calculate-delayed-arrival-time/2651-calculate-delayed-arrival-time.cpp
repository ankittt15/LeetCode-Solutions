class Solution {
public:
    int findDelayedArrivalTime(int arrivalTime, int delayedTime) {
        int result = 0;
        result = arrivalTime + delayedTime;
        if(result == 24) return 0;
        if(result > 24) return result = result - 24;;

        return result;
    }
};