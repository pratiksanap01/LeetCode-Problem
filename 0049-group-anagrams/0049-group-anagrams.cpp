class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> groups;

        for (string str : strs) {
            string key = str;

            // 1. Sort key
            sort(key.begin(), key.end());

            // 2. Push original str into groups[key]
            groups[key].push_back(str);
        }

        vector<vector<string>> result;

        // 3. Push every map value into result
        for(auto entry : groups){
            result.push_back(entry.second);
        }

        return result;
    }
};