#include <iostream>
#include <stack>

using namespace std;

class MyStack
{
stack<int> mystack, minstack;
public:
    void push(int x)
    {
        mystack.push(x);
        if (minstack.empty() || x <= minstack.top())
        {
            minstack.push(x);
        }
    }

    int pop()
    {
        if (mystack.empty()) return -1;

        int top = mystack.top();
        mystack.pop();

        if (top == minstack.top())
        {
            minstack.pop();
        }

        return top;
    }

    int top()
    {
        if (mystack.empty()) return -1;
        else return mystack.top();
    }

    int GetMin()
    {
        if (minstack.empty()) return -1;
        else return minstack.top();
    }
};