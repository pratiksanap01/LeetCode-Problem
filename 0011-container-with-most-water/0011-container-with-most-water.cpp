class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int left = 0;
        int right = n - 1;
        int maxWater = 0;

        while (left < right) {
            // 1. Calculate width
            int width = right - left;

            // 2. Calculate minimum height
            int h = min(height[left], height[right]);

            // 3. Calculate current area
            int currentWater = width * h;

            // 4. Update maxWater
            maxWater = max(maxWater, currentWater);

            // 5. Move the pointer with smaller height
            if (height[left] < height[right]) {
                left++;
            } else {
                right--;
            }
        }

        return maxWater;
    }
};