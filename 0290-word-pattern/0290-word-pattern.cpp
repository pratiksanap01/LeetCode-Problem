class Solution {
public:
    bool wordPattern(string pattern, string s) {
        stringstream ss(s);

        string word;
        vector<string> words;

        while (ss >> word) {
            words.push_back(word);
        }

        if(words.size() != pattern.size()){
            return false;
        }

        unordered_map<char, string> mapPW;
        unordered_map<string, char> mapWP;

        for(int i = 0; i < pattern.size(); i++){
            if(mapPW.find(pattern[i]) != mapPW.end()){
                if(mapPW[pattern[i]] != words[i]){
                    return false;
                }
            }

            if(mapWP.find(words[i]) != mapWP.end()){
                if(mapWP[words[i]] != pattern[i]){
                    return false;
                }
            }

            mapPW[pattern[i]] = words[i];
            mapWP[words[i]] = pattern[i];
        }

        return true;
    }
};