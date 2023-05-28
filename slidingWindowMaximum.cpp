
// Sliding Window Maximum
//-> precess first 'k' elements before pushing into result arr.
//  -> if dq.front() == i-k then pop front (out of boundary case)
//-> if nums[dq.back()]<nums[i] then pop-back
//  -> if i>=k-1 then push nums[dq.front()]

#include <iostream>
#include <vector>
#include <stack>
using namespace std;

class Solution
{
public:
    vector<int> maxSlidingWindow(vector<int> &nums, int k)
    {
        dequeue<int> dq;
        vector<int> ans;

        for (int i = 0; i < nums.size(); i++)
        {

            if (!dq.empty() && dq.front() == i - k)
            {
                dq.pop_front();
            }
            while (!dq.empty() && nums[dq.back()] < nums[i])
            {
                dq.pop_back();
            }
            dq.push_back(i);

            if (i >= k - 1)
                ans.push_back(nums[dq.front()]);
        }
        return ans;
    }
};