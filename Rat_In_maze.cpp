
// generate all the ways to go from (0,0) to (n-1. n-1)

// at any cell we have to move in D, L, R, U
// (r,c) D-> (r+1, c), L ->(r, c-1), R -> (r, c+1), U -> (r-1, c)

#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    void allPaths(int row, int col, int n, vector<vector<int>> &m, string ans, vector<string> &res)
    {
        // base condition
        if (row < 0 || row >= n || col < 0 || col >= n || m[row][col] == 0)
            return;
        if (row == n - 1 && col == n - 1)
        {
            res.push_back(ans);
            return;
        }

        m[row][col] = 0;
        allPaths(row + 1, col, n, m, ans + "D", res);
        allPaths(row, col - 1, n, m, ans + "L", res);
        allPaths(row, col + 1, n, m, ans + "R", res);
        allPaths(row - 1, col, n, m, ans + "U", res);
        m[row][col] = 1;

        return;
    }

    vector<string> findPath(vector<vector<int>> &m, int n)
    {
        string ans = "";
        vector<string> res;
        allPaths(0, 0, n, m, ans, res);
        sort(res.begin(), res.end());
        return res;
    }
};