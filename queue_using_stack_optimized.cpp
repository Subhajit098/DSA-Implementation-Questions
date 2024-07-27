#include <bits/stdc++.h>
using namespace std;

class MyQueue
{
public:
    stack<int> s1, s2;
    MyQueue()
    {
    }

    void push(int x)
    {
        s1.push(x);
    }

    int pop()
    {
        int x = -1;
        if (s2.size() != 0)
        {
            x = s2.top();
            s2.pop();
            return x;
        }
        else
        {
            while (s1.size())
            {
                s2.push(s1.top());
                s1.pop();
            }
            if (s2.size() != 0)
            {
                x = s2.top();
                s2.pop();
            }
        }
        return x;
    }

    int peek()
    {
        if (s2.size() != 0)
        {
            return s2.top();
        }
        int x = -1;
        while (s1.size())
        {
            s2.push(s1.top());
            s1.pop();
        }
        if (s2.size() != 0)
        {
            x = s2.top();
        }
        return x;
    }

    bool empty()
    {
        // if (s2.size() != 0)
        //     return false;
        // while (s1.size() != 0)
        // {
        //     s2.push(s1.top());
        //     s1.pop();
        // }
        // return s2.empty();

        // better code below
        if (s1.size() != 0 || s2.size() != 0)
            return false;
        return true;
    }
};

int main()
{

    return 0;
}