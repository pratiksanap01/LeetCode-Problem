class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> seen;

        for(int i = 0; i < nums.size(); i++){
           if(seen.find(nums[i]) != seen.end()){
            if(i - seen[nums[i]] <= k){
                return true;
            } else {
                seen[nums[i]] = i;
            }
           } else{
            seen[nums[i]] = i;
           }
        }

        return false;
    }
};