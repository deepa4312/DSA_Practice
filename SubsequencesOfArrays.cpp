
// given an integer array nums, generate all the substs(subsequences).
// if size of arry is n then no of subsets = 2 to power n

// including and excluding method(recursion)
// time and space complexity is bigo of 2 to power n which is very bad
#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
  void generateAllSubsets(vector<int> &nums, int currentIndex, vector<int> &temp, vector<vector<int>> &ans)
  {
    // base condition
    if (currentIndex >= nums.size())
    {
      ans.push_back(temp);
      return;
    }

    // to take the ith element
    int currentVal = nums[currentIndex];
    temp.push_back(currentVal);
    generateAllSubsets(nums, currentIndex + 1, temp, ans);

    // remove the currentval(not considering)
    temp.pop_back(); // backtracking

    // to ignore the ith element
    generateAllSubsets(nums, currentIndex + 1, temp, ans);
  }

  vector<vector<int>> subsets(vector<int> &nums)
  {
    vector<vector<int>> ans;
    vector<int> temp;
    generateAllSubsets(nums, 0, temp, ans);
    return ans;
  }
};