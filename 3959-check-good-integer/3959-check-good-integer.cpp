class Solution {
public:
    bool checkGoodInteger(int n) {
        int digitSum = 0, squareSum = 0;

        while(n){
            int rem;
            rem = n % 10;
            digitSum += rem;
            squareSum = squareSum + rem * rem;
            n/= 10;
        }
        if(squareSum - digitSum >= 50) return 1;
        return 0;
    }
};