class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if(matrix.empty() || matrix[0].empty()){
            return false;
        }

        int rows = matrix.size();
        int columns = matrix[0].size();

        int left = 0;
        int right = rows * columns - 1;

        while(left <= right){
            int mid = left + (right - left) / 2;
            int row = mid / columns;
            int col = mid % columns;
            if(matrix[row][col] < target){
                left = mid + 1;
            } else {
                right = mid - 1;
            }

            if(matrix[row][col] == target){
                return true;
            }
        }

        return false;
    }
};