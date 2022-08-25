// implement queue using two Stacks

#include<stack>
#include<iostream>
using namespace std;


class Queue
{
    stack<int> pushStack,popStack;

    public:
    void _push(int data)
    {
        pushStack.push(data);
    }

    bool _empty()
    {
        return (pushStack.empty() && popStack.empty());
    }

    int _front()
    {
        if(_empty())
        {
            return -1;
        }

        if(popStack.empty())
        {
            while(!pushStack.empty())
            {
                popStack.push(pushStack.top());
                pushStack.pop();
            }
        }
        return popStack.top();
    }

    int _pop()
    {
        int ans = _front();
        if(ans!=-1)
        {
            popStack.pop();
        }
        return ans;
    }
};

int main()
{
    Queue q1;
    q1._push(10);
    q1._push(20);
    q1._push(30);
    q1._push(40);
    q1._push(50);

    cout<<q1._pop()<<endl;
    cout<<q1._front()<<endl;
    q1._push(60);

    cout<<q1._pop()<<endl;
    cout<<q1._front()<<endl;

    cout<<q1._pop()<<endl;
    cout<<q1._front()<<endl;

    cout<<q1._pop()<<endl;
    cout<<q1._front()<<endl;

    cout<<q1._pop()<<endl;
    cout<<q1._front()<<endl;

    cout<<q1._pop()<<endl;
    cout<<q1._front()<<endl;

}