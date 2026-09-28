class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        long long result = 0, sum = 0, elesum = 0;

        for(int i = 0; i < nums.size(); i++){
            sum += nums[i];
            int n = nums[i];

            while(n){
                int rem = 0;
                rem = n % 10;
                elesum += rem;
                n = n / 10;
            }
        }

        return sum - elesum;
        
    }
};