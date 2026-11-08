class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        vector<vector<int>> result;

        for (int i = 0; i < n - 2; i++) {
            // Early termination: if the smallest number is > 0, sum can't be 0
            if (nums[i] > 0) {
                break;
            }

            // 1. Skip duplicate fixed values
            if (i > 0 && nums[i] == nums[i - 1]) {
                continue;
            }

            int left = i + 1;
            int right = n - 1;

            while (left < right) {
                int sum = nums[i] + nums[left] + nums[right];

                if (sum == 0) {
                    // 2. Store the triplet
                    result.push_back({nums[i], nums[left], nums[right]});

                    // 4. Skip duplicate left and right values
                    while (left < right && nums[left] == nums[left + 1]) {
                        left++;
                    }
                    while (left < right && nums[right] == nums[right - 1]) {
                        right--;
                    }

                    // 3. Move both pointers to the next unique elements
                    left++;
                    right--;

                } else if (sum < 0) {
                    // 5. Increase the sum
                    left++;
                } else {
                    // 6. Decrease the sum
                    right--;
                }
            }
        }
        return result;
    }
};
