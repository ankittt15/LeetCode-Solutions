class Solution {
public:
    int reverse(int x) {

        int ans = 0, rem;

        while(x != 0){

            rem = x % 10;
            if(ans>=INT_MAX/10+rem) return 0;
            else if(ans<=INT_MIN/10+rem) return 0;
            else
            ans = ans * 10 + rem;
            x = x / 10;
        }
            
            return ans;
        
    }
};