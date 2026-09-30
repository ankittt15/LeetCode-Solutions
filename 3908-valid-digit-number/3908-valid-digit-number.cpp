class Solution {
public:
    bool validDigit(int n, int x) {
        int check = 0, first = 0;

        while(n){
            first = n % 10;
            if(first == x) check = 1;
            n /= 10 ;
        }
        if(check == 1 && first != x) return 1;
        return 0;
    }
};