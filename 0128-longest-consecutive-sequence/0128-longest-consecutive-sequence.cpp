class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> seen;
        int maxLength = 0;

        for (int num : nums) {
            seen.insert(num);
        }


        for(int num : seen){
            if(seen.find(num - 1) == seen.end()){
                int currentLength = 1;
                int currentNumber = num;
                while(seen.find(currentNumber + 1) != seen.end()){
                    currentNumber += 1;
                    currentLength++;
                }

                maxLength = max(maxLength, currentLength);
            }
        }

        return maxLength;
    }
};