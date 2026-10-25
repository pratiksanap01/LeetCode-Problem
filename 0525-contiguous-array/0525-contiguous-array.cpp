class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int, int> firstIndex;

        firstIndex[0] = -1;

        int prefixSum = 0;
        int maxLength = 0;

        for (int i = 0; i < nums.size(); i++) {

            // 1. Add -1 if nums[i] == 0,
            //    otherwise add +1
            if(nums[i] == 0){
                prefixSum += -1;
            } else{
                prefixSum += 1;
            }

            // 2. Check if prefixSum already exists
            //    in firstIndex
            if(firstIndex.find(prefixSum) != firstIndex.end()){
                // 3. If it exists, calculate the length
                //    and update maxLength
                int currentLength = i - firstIndex[prefixSum];
                maxLength = max(maxLength, currentLength);
            }else{
                // 4. Otherwise, store the current index
                //    as the first occurrence
                firstIndex[prefixSum] = i;
            }
        }

        return maxLength;
    }
};