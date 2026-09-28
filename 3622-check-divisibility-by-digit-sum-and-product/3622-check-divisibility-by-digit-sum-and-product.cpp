class Solution {
public:
    bool checkDivisibility(int n) {
        int digisum = 0, digipro = 1, result;;
        int num = n;

        while(num){
            int rem;
            rem = num % 10;
            digisum += rem;
            digipro *= rem;
            num /= 10;
        }
        result = digisum + digipro;
        if(n % result == 0) return 1;
        return 0;
    }
};