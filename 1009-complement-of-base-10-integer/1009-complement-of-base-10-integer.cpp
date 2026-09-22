class Solution {
public:
    int bitwiseComplement(int n) {
        int ans=0, rem, mul=1, var=0;

        if(n<1) return 1;

        while(n){
            rem = n%2;
            n = n/2;
            mul = rem^1;
            ans = ans+mul*pow(2,var++);
        }
        return ans;
        
    }
};