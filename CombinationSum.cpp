
// Combination sum - repitation is allowed we can use one element many times
#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    void totalways(vector<int> &candidates, int target, int curr, vector<vector<int>> &ans, vector<int> &temp)
    {
        if (curr == candidates.size())
        {
            if (target == 0)
            {
                ans.push_back(temp);
            }

            return;
        }
        // feasible only if curr value is less that the target
        if (candidates[curr] <= target)
        {
            temp.push_back(candidates[curr]);
            totalways(candidates, target - candidates[curr], curr, ans, temp);
            temp.pop_back();
        }

        // backtracking
        totalways(candidates, target, curr + 1, ans, temp);
    }

    vector<vector<int>> CombinationSum(vector<int> &candidates, int target)
    {
        vector<vector<int>> ans;
        vector<int> temp;
        totalways(candidates, target, 0, ans, temp);
        return ans;
    }
};

// Combination 2

class Solution
{
public:
    void totalways(vector<int> &candidates, int target, int curr, vector<vector<int>> &ans, vector<int> &temp)
    {
        if (curr == candidates.size())
        {
            if (target == 0)
            {
                ans.push_back(temp);
            }

            return;
        }

        for (int i = curr; i < candidates.size(); i++)
        {

            // avoiding duplicates

            if (i > curr && candidates[i] == candidates[i - 1] continue;)
                // feasible only if curr value is less that the target
                if (candidates[curr] <= target)
                {
                    temp.push_back(candidates[i]);
                    totalways(candidates, target - candidates[i], i + 1, ans, temp);
                    temp.pop_back();
                }

            // backtracking
            // totalways(candidates, target, curr + 1, ans, temp);
        }
    }
    vector<vector<int>> CombinationSum(vector<int> &candidates, int target)
    {
        vector<vector<int>> ans;
        sort(candidates.begin(), candidates.end());
        vector<int> temp;
        totalways(candidates, target, 0, ans, temp);
        return ans;
    }
};
