class Solution {
public:
    int differenceOfSums(int n, int m) {
        int nondivsum = 0, divsum = 0;

        for(int i = 1; i <= n; i++){
            if(i % m != 0) nondivsum += i;
            if(i % m == 0) divsum += i;
        }
        return nondivsum - divsum;
    }
};