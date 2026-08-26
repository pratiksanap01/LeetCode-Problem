class Solution {
public:
    bool isPalindrome(string s) {
        string ns = "";
        for(int i = 0; i < s.length(); i++) {
            if(isalnum(s[i])){
                ns += tolower(s[i]);
            }
        }

        int start = 0;
        int end = ns.length() - 1;

        while(start < end){
            if(ns[start] != ns[end]){
                return false;
            }
            start++;
            end--;
        }

        return true;
    }
};