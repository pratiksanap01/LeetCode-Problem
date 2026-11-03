class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left = 0;
        int maxLength = 0;
        unordered_set<char> seen;

        for (int right = 0; right < s.size(); right++) {

            // 1. While s[right] already exists in seen:
            while(seen.find(s[right]) != seen.end()){
                seen.erase(s[left]);
                left++;
            }
            // 2. Insert s[right] into seen
            seen.insert(s[right]);

            // 3. Update maxLength
            maxLength = max(maxLength, right - left + 1);

        }

        return maxLength;
    }
};