class Solution {
public:
    int mirrorDistance(int n) {
        int reverse = 0;
        int num = n;

        while(num){
            int rem;
            rem = num % 10;
            num = num / 10;
            reverse = reverse * 10 + rem;
        }
        return abs(n - reverse);
    }
};