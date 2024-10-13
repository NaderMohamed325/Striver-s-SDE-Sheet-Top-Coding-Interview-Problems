
#include <bits/stdc++.h>

using namespace std;


class Solution {
public:
    static void setZeroes(vector<vector<int>> &matrix) {
        int rows = matrix.size();
        int cols = matrix[0].size();
        vector<int> rowFlag(rows, 1);
        vector<int> colFlag(cols, 1);

        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                if (matrix[i][j] == 0) {
                    rowFlag[i] = 0;
                    colFlag[j] = 0;
                }
            }
        }


        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                if (rowFlag[i] == 0 || colFlag[j] == 0) {
                    matrix[i][j] = 0;
                }
            }
        }
    }
};