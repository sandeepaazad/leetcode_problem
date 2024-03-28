
class Solution {
public:
    int dfs(bool visited[], int skip[][10], int curr, int remain) {
        if (remain < 0) return 0;
        if (remain == 0) return 1;
        visited[curr] = true;
        int res = 0;
        for (int i = 1; i <= 9; i++) {
            if (!visited[i] && (skip[curr][i] == 0 || visited[skip[curr][i]])) {
                res += dfs(visited, skip, i, remain - 1);
            }
        }
        visited[curr] = false;
        return res;
    }

    int numberOfPatterns(int minLen, int maxLen) {
        int skip[10][10] = {0};
        skip[1][3] = skip[3][1] = 2;
        skip[1][7] = skip[7][1] = 4;
        skip[3][9] = skip[9][3] = 6;
        skip[7][9] = skip[9][7] = 8;
        skip[1][9] = skip[9][1] = skip[2][8] = skip[8][2] = skip[3][7] = skip[7][3] = skip[6][4] = skip[4][6] = 5;

        bool visited[10] = {false};
        int res = 0;
        for (int len = minLen; len <= maxLen; len++) {
            res += dfs(visited, skip, 1, len - 1) * 4;
            res += dfs(visited, skip, 2, len - 1) * 4;
            res += dfs(visited, skip, 5, len - 1);
        }
        return res;
    }
};