class Solution {
public:
    int mySqrt(int x) {
        int left = 0, right = x, ans = 0;

        while(left <= right){
            int mid = left + (right - left) / 2;
            long long square = (long long)mid * mid;
            if(square <= x){
                ans = mid;
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }

        return ans;
    }
};