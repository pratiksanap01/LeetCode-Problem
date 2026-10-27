class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();

        vector<int> left(n, 1);
        vector<int> right(n, 1);
        vector<int> answer(n);

        // 1. Build left products
        // Loop from index 1 to n-1
        for(int i = 1; i < n; i++){
            left[i] = left[i - 1] * nums[i - 1];
        }

        // 2. Build right products
        // Loop backwards from n-2 to 0
        for(int i = n - 2; i >= 0; i--){
            right[i] = right[i + 1] * nums[i + 1];
        }

        // 3. Calculate answer[i] = left[i] * right[i]
        for(int i = 0; i < n ; i++){
            answer[i] = left[i] * right[i];
        }

        return answer;
    }
};