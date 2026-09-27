class Solution {
public:
    int numberOfMatches(int n) {
        int count = 0, n2 = 0;
        while(n > 1){
            n2 = n;
            if(n % 2 == 0){
                n = n/2;
                count += n2/2;
            }
            else{
                n = n/2 + 1;
                count += n2/2;
            }
        }
        return count;
    }
};