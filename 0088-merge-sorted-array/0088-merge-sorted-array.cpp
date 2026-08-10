class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m-1;
        for(int j = 0; j < nums2.size(); j++){
            i++;
            nums1[i] = nums2[j];
        }
        sort(nums1.begin(), nums1.end());
    }
};