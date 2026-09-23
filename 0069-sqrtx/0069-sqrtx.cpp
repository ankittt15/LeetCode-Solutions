class Solution {
public:
    int mySqrt(int x) {
        if(x < 0 ) return false;
        for(long long i = 0; i <= x; i++){
            if(i*i == x) return i;
            if(i*i > x) return i-1;
        }
        return false;
    }
};