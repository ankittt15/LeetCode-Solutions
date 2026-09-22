class Solution {
public:
    int countOdds(int low, int high) {
        if(low <= 0 && high <= 0) return false;
        int total = 0;
        for(int i = low; i <= high; i++){
            if(i % 2 != 0) total++;
        }
        return total;
    }
};