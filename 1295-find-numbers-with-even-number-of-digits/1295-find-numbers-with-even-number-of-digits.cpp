class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count = 0, digicount = 0;
        for(int i = 0; i < nums.size(); i++){
            while(nums[i] > 0){
                nums[i] = nums[i] / 10;
                digicount++;
            }
            if(digicount % 2 == 0) count++;
            digicount = 0;
        }
        return count;
    }
};