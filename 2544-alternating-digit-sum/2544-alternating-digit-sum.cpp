class Solution {
public:
    int alternateDigitSum(int n) {
        int result = 0, count = 0, sign;

        int number = n;
        while(number){
            number = number / 10;
            count++;
        }
        if(count % 2 == 0) sign = -1;
        else sign = 1;

        while(n){
            int rem;
            rem = n % 10;
            n /= 10;
            result = result + rem * sign;
            sign *= -1;
        }
        return result;
    }
};