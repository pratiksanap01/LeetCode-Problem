class Solution {
public:

    int findFirst(vector<int>& nums, int target){
    int firstPosition = -1;
    int left = 0;
    int right = nums.size() - 1;

    while(left <= right){
        int mid = left + (right - left) / 2;

        if(nums[mid] == target){
            firstPosition = mid;
            right = mid - 1;
        }
        else if(nums[mid] < target){
            left = mid + 1;
        }
        else{
            right = mid - 1;
        }
    }
     return firstPosition;
    }

    int findLast(vector<int>& nums, int target){
        int lastPosition = -1;
        int left = 0;
        int right = nums.size() - 1;

        while(left <= right){
            int mid = left + (right - left) / 2;

            if(nums[mid] == target){
                lastPosition = mid;
                left = mid + 1;
            } else if(nums[mid] < target){
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        return lastPosition;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        return {findFirst(nums, target), findLast(nums, target)};
    }
};