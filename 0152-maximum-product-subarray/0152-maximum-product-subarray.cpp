class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxEnding = nums[0];
        int minEnding = nums[0];
        int result = nums[0];

        for (int i = 1; i < nums.size(); i++) {

            // 1. Calculate three candidates
            int a = nums[i];
            int b = maxEnding * nums[i];
            int c = minEnding * nums[i];

            // 2. Update maximum and minimum
            // Both must use the same three candidates
            maxEnding = max(a, max(b, c));
            minEnding = min(a, min(b, c));

            // 3. Update overall maximum
            result = max(result,max(maxEnding, minEnding));
        }

        return result;
    }
};