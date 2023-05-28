
// Implement a Queue using Stack
// use 2 stacks
// while pop(), shift all element in 1 stack to another  and return top value
#include <iostream>
#include <stack>
using namespace std;
class Queue
{
public:
    stack<int> in;
    stack<int> out;

    // push operation
    void push(int x)
    {
        in.push(x);
    }

    // pop operation
    int pop()
    {
        // shift in to out
        if (out.empty())
        {
            while (in.size())
            {
                out.push(in.top());
                in.pop();
            }
        }
        int x = out.top();
        out.pop();
    }

    // peek operation
    int Top()
    {
        if (out.empty())
        {
            while (in.size())
            {
                out.push(in.top());
                in.pop();
            }
        }
        return out.top();
    }

    int size()
    {
        return in.size() + out.size();
    }
};

int main()
{
}