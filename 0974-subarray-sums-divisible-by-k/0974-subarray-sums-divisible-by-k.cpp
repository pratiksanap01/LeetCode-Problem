class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        int count = 0;
        int prefixSum = 0;
        freq[0] = 1;

        for(int num : nums){
            prefixSum += num;

            int remainder = ((prefixSum % k) + k) % k;

            if(freq.find(remainder) != freq.end()){
                count += freq[remainder];
            }

            freq[remainder]++;
        }

        

        return count;
    }
};