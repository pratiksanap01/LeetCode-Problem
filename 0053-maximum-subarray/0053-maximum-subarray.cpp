class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currentSum = nums[0];
        int maxSum = nums[0];

        for (int i = 1; i < nums.size(); i++) {

            // Choose: start new or extend previous
            currentSum = max(nums[i], currentSum + nums[i]);

            // Update the overall maximum
            maxSum = max(maxSum, currentSum);
        }

        return maxSum;
    }
};