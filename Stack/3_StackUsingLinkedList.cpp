#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};

class Stack
{
    int size;
    int min;
    Node *dummy;
    Node *head;

public:

    Stack()
    {
        size = 0;
        min = INT_MAX;
        dummy = new Node(-1);
        head = NULL;
        dummy->next = head;
    }


    void push1(int data)
    {
        Node *newNode = new Node(data);
        newNode->next = dummy->next;
        dummy->next = newNode;
        head = dummy->next;
    }

    void push(int data)
    {
        if (data <= min)
        {
            push1(min);
            min = data;
        }

        size += 1;
        push1(data);
    }

    int top()
    {
        return dummy->next->data;
    }

    void pop1()
    {
        if(dummy->next == NULL)
        {
            return;
        }

        Node* temp = dummy->next;
        dummy->next = dummy->next->next;
        temp->next = NULL;
        delete(temp);
        head = dummy->next;
    }
    void pop()
    {
        if(top() == min)
        {
            pop1();
            min = top();
        }

        pop1();
        size -= 1;
    }
    int Size()
    {
        return size;
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

    cout<<"Size: "<<st1.Size()<<endl;
    cout<<"Min element : "<<st1.getMin()<<endl;
    st1.pop();
    cout<<"Min element : "<<st1.getMin()<<endl;
    st1.pop();
    cout<<"Min element : "<<st1.getMin()<<endl;;
    st1.pop();
    cout<<"Min element : "<<st1.getMin()<<endl;
    cout<<"Size: "<<st1.Size()<<endl;
    st1.pop();
    cout<<"Min element : "<<st1.getMin()<<endl;
    st1.pop();

    cout<<"Size: "<<st1.Size()<<endl;
    cout<<"Min element : "<<st1.getMin()<<endl;
    

    return 0;
}