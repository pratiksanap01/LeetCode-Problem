class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> seen;
        int sum = 0;

        while(sum != 1){
            while(n != 0){
                int digit = n % 10;
                n = n / 10;
                sum += digit*digit;
            }
            if(sum == 1){
                return true;
            }
            if(seen.find(sum) != seen.end()){
                return false;
            }
            seen.insert(sum);
            n = sum;
            sum = 0;
        }

        return false;
    }
};