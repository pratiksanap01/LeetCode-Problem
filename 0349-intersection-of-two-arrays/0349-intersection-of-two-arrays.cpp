class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> seen1;
        unordered_set<int> seen2;
        vector<int> ans;

        for(int i = 0; i < nums1.size(); i++){
            seen1.insert(nums1[i]);
        }

        for(int i = 0; i < nums2.size(); i++){
            seen2.insert(nums2[i]);
        }

        for(int num : seen1){
            if(seen2.find(num) != seen2.end()){
                ans.push_back(num);
            }
        }

        return ans;
    }
};