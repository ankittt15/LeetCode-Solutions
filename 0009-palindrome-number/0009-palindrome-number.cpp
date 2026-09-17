class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) {
            return false;
        }

        long long ans = 0, rem, temp = x;

        while (temp != 0) {
            rem = temp % 10;
            temp = temp / 10;
            ans = ans * 10 + rem;
        }

        if (x == ans) {
            return true;
        }

        return false;
    }
};