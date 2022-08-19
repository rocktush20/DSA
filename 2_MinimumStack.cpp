#include<bits/stdc++.h>
using namespace std;

class Stack
{
    public:

    int min;
    stack<int> st;

    Stack()
    {
        min = INT_MAX;
    }

    void push(int data)
    {
        if(data<=min)
        {
            st.push(min);
            min = data;
        }
        st.push(data);
    }

    void pop()
    {
        if(st.size() == 0)
        {
            return;
        }
        if(st.top() == min)
        {
            st.pop();
            min = st.top();
        }

        st.pop();
    }

    int top()
    {
        if(st.size() == 0)
        {
            return INT_MAX;
        }
        return st.top();
    }

    bool empty()
    {
        return st.empty();
    }

    int size()
    {
        return st.size();
    }

    int getMin()
    {
        return min;
    }
};

int main()
{
    Stack st1;
    st1.push(19);
    st1.push(20);
    st1.push(25);
    st1.push(17);
    st1.push(15);

    cout<<"Min element : "<<st1.getMin()<<endl;
    st1.pop();
    cout<<"Min element : "<<st1.getMin()<<endl;
    st1.pop();
    cout<<"Min element : "<<st1.getMin()<<endl;;
    st1.pop();
    cout<<"Min element : "<<st1.getMin()<<endl;
    st1.pop();
    cout<<"Min element : "<<st1.getMin()<<endl;
    st1.pop();

    cout<<"Min element : "<<st1.getMin()<<endl;
    

    return 0;
}