class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        int sum = 0;
        int num = x;

        while(num){
            int rem = 0;
            rem = num % 10;
            sum += rem;
            num = num / 10;
        }
        if(x % sum == 0) return sum;
        else return -1;
    }
};