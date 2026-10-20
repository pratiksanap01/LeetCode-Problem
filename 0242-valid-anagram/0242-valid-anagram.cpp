class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()){
            return false;
        }
        unordered_map<char, int> freq;

        for(char ch : s){
            freq[ch]++;
        }

        for(int i = 0; i < t.size(); i++){
            if(freq[t[i]] == 0){
                return false;
            } else if(freq.find(t[i]) != freq.end()){
                freq[t[i]]--;
            }
        }

        for(auto entry : freq){
            if(entry.second != 0){
                return false;
            }
        }

        return true;
    }
};