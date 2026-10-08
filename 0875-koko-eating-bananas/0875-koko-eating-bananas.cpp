class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int left = 1;
        int right = *max_element(piles.begin(), piles.end());
        int answer = -1;

        while(left <= right){
            int mid = left + (right - left) / 2;

            long long totalHours = 0;

            for(int i = 0; i < piles.size(); i++){
                totalHours += (piles[i] + mid - 1) / mid;
            }

            if(totalHours <= h){
                answer = mid;
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }

        return answer;
    }
};