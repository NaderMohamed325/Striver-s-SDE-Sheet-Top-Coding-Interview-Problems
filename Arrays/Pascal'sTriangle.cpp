//
// Created by xcite on 10/13/2024.
//
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:

    int nCr(int n, int r) {
        if (r == 0 || r == n) {
            return 1;
        }


        long long result = 1;


        for (int i = 1; i <= r; ++i) {
            result *= (n - i + 1);
            result /= i;
        }

        return result;
    }

    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> result;

        for (int i = 0; i < numRows; ++i) {
            vector<int> row;
            for (int j = 0; j <= i; ++j) {
                row.push_back(nCr(i, j));
            }
            result.push_back(row);
        }

        return result;
    }
};