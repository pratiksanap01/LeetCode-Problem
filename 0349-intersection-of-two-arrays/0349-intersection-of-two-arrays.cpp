class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> seen;
        vector<int> answer;
        for(int i = 0; i < nums1.size(); i++){
            seen.insert(nums1[i]);
        }

        for(int i = 0; i < nums2.size(); i++){
            if(seen.find(nums2[i]) != seen.end()){
                answer.push_back(nums2[i]);
                seen.erase(nums2[i]);
            }
        }

        return answer;
    }
};