class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_map<int, int> freq;
        vector<int> ans;

        for(int num : nums){
            freq[num]++;
        }

        for(auto entry : freq){
            if(entry.second != 1){
                ans.push_back(entry.first);
            }
        }

        return ans;

    }
};