#include <string>

class Solution {
public:
    char findTheDifference(std::string s, std::string t) {
        char result = 0;
        
        // XOR all characters in s and t
        for (char c : s) result ^= c;
        for (char c : t) result ^= c;
        
        return result;
    }
};
