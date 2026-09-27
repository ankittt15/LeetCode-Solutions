class Solution {
public:
    bool isSameAfterReversals(int num) {
        int reversed1 = 0, reversed2 = 0;
        int num1 = num;

        while(num1){
            int rem;
            rem = num1 % 10;
            if(reversed1 > INT_MAX/10 || reversed1 < INT_MIN/10) return 0;
            num1 = num1/10;
            reversed1= reversed1 * 10 + rem;
        }

        while(reversed1){
            int rem1;
            rem1 = reversed1 % 10;
            if(reversed2 > INT_MAX/10 || reversed2 < INT_MIN/10) return 0;
            reversed1 = reversed1/10;
            reversed2 = reversed2 * 10 + rem1;
        }

        if(reversed2 == num) return 1;
        return 0;
    }
};