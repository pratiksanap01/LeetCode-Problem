class Solution {
public:
    bool isPresent(vector<int>& arr, int d, int idx) {
        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] == d && i != idx) {
                return true;
            }
        }
        return false;
    }

    bool checkIfExist(vector<int>& arr) {
        for (int i = 0; i < arr.size(); i++) {
            if (isPresent(arr, arr[i] * 2, i)) {
                return true;
            }
        }

        return false;
    }
};