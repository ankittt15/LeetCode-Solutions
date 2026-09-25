class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int mul1 = 1, mul2= 1, max= 0;
        sort(nums.begin(), nums.end(), greater<int>());
        max = nums[0];

        for(int i = 0; i <= 2; i++){
            mul1 = mul1 * nums[i];
        }

        sort(nums.begin(), nums.end());

        for(int i = 0; i <= 1; i++){
            mul2 = mul2 * nums[i];
        }
        max = max * mul2;
        if(max > mul1) return max;
        return mul1;
    }
};