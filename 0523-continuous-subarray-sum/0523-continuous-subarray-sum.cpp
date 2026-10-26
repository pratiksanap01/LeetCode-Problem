class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> firstIndex;
        firstIndex[0] = -1;

        int prefixSum = 0;

        for (int i = 0; i < nums.size(); i++) {
            // 1. Update prefixSum
            prefixSum += nums[i];

            // 2. Calculate remainder
            int remainder = prefixSum % k;

            // 3. If remainder exists:
            if(firstIndex.find(remainder) != firstIndex.end()){
                //    Check whether i - firstIndex[remainder] >= 2
                //    If yes, return true 
                if(i - firstIndex[remainder] >= 2){
                    return true;
                } 
            }else {
                // 4. Otherwise, store the remainder's first index
                firstIndex[remainder] = i;
            }
        }

        return false;
    }
};