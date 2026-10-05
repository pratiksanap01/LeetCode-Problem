class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left = 0;
        int maxLength = 0;
        unordered_set<char> chars;

        for(int i = 0; i < s.size(); i++){
            while(chars.find(s[i]) != chars.end()){
                chars.erase(s[left]);
                left++;
            }
            chars.insert(s[i]);
            maxLength = max(maxLength, i - left + 1);
        }

        return maxLength;
    }
};