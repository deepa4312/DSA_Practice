
// problem on Next Greater Element

// 1.Iterate from last & compare its value with top of stack.
// 2. if stack is greater then its the next greater element.
// 3. else keep poping till the next greater element is found.
#include <iostream>
#include <vector>
#include <stack>
using namespace std;

class Solution
{
public:
    vector<long long> nextGreaterElement(vector<long long> arr, int n)
    {

        stack<long long> st;
        vector<long long> res(n);

        for (int i = n - 1; i >= 0; i--)
        {
            long long currVal = arr[i];

            while (!st.empty() && st.top() <= currVal)
            {
                st.pop();
            }
            res[i] = st.empty() ? -1 : st.top();
            st.push(currVal);
        }
        return res;
    }
};