class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        int prefixSum = 0;
        int count = 0;

        freq[0] = 1;

        for (int num : nums) {

            // 1. Update prefixSum
            prefixSum += num;

            // 2. Find required prefix sum
            int required = prefixSum - k;

            // 3. Add its frequency to count
            if(freq.find(required) != freq.end()){
                count += freq[required];
            }
            
            // 4. Increase frequency of current prefixSum
            freq[prefixSum]++;
        }

        return count;
    }
};