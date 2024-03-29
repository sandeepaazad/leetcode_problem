#include <vector>

using namespace std;

class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        if(mat.size()==0 || mat[0].size()==0)
            return {};

        int m=mat.size(), n=mat[0].size();
        vector<int> array;
        int row=0, col=0;
        bool up=true;
        while(row < m && col < n) {
            if(up) {
                array.push_back(mat[row][col]);
                if (col == n - 1) {
                    row++;
                    up = false;
                } else if (row == 0) {
                    col++;
                    up = false;
                } else {
                    row--;
                    col++;
                }
            } else {
                array.push_back(mat[row][col]);
                if (row == m - 1) {
                    col++;
                    up = true;
                } else if (col == 0) {
                    row++;
                    up = true;
                } else {
                    row++;
                    col--;
                }
            }
        }
        return array;
    }
};
