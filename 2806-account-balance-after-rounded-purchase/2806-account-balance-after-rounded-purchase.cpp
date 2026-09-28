class Solution {
public:
    int accountBalanceAfterPurchase(int purchaseAmount) {
        int last = 0;

        last = purchaseAmount % 10;
        if(last >= 5)
        purchaseAmount += (10 - last);
        else
        purchaseAmount -= last;

        return 100 - purchaseAmount;
    }
};