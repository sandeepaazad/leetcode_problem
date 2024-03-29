class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        list<int> res;
        int row = matrix.size(), col = matrix[0].size(), up = 0, down = row - 1, left = 0, right = col - 1;
        while (res.size() < row * col) {
            for (int j = left; j <= right; j++) { 
                res.push_back(matrix[up][j]);
            }
            for (int i = up + 1; i <= down; i++) { 
                res.push_back(matrix[i][right]);
            }
            if (up != down) {
                for (int j = right - 1; j >= left; j--) { 
                    res.push_back(matrix[down][j]);
                }
            }
            if (left != right) {
                for (int i = down - 1; i > up; i--) { 
                    res.push_back(matrix[i][left]);
                }
            }
            left++;
            right--;
            up++;
            down--;
        }
        return vector<int>(res.begin(), res.end()); 
    }
};
