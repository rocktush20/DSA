// To get Middle element of stack in O(1) time we have to
// use Doubly Linked List because if we use single lisked list
// Then we are not able to main mid pointer or if we use 
// array then the complexity becomes O(n)

#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node* pre;
    Node* next;

    Node(int data)
    {
        this->data = data;
        next = NULL;
        pre = NULL;
    }
};

class Stack
{
    Node* head;
    Node* mid;
    int size;

    public:

    Stack()
    {
        head = NULL;
        mid = NULL;
        size = 0;
    }

    void push(int val)
    {
        size++;
        Node* newNode = new Node(val);

        if(head == NULL)
        {
            head = newNode;
            mid = newNode;
            return;
        }

        newNode->next = head;
        head->pre = newNode;
        head = newNode;

        if(size%2!=0)
        {
            mid = mid->pre;
        }

    }

    bool Empty()
    {
        if(size == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }


    void pop()
    {
        if(Empty())
        {
            return;
        }

        size--;

        if(size % 2 == 0)
        {
            mid = mid->next;
        }

        Node* temp = head;
        head = head->next;

        temp->next = temp->pre = NULL;
        delete(temp);

    }

    int getMiddle()
    {
        if(Empty())
        {
            return -1;
        }
        return mid->data;
    }

    void removeMiddle()
    {
        if(Empty())
        {
            return;
        }

        size--;

        Node* del = mid;
        if(size % 2 == 0)
        {
            mid = mid->next;
        }
        else
        {
            mid = mid->pre;
        }


        if(del->pre!=NULL)
        del->pre->next = del->next;
        if(del->next!=NULL)
        del->next->pre = del->pre;

        del->next = del->pre = NULL;

    }

    int Size()
    {
        return size;
    }

    void print()
    {
        Node* temp = head;
        while(temp!= NULL)
        {
            cout<<temp->data<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }

};

int main()
{

    Stack st;

    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);

    cout<<st.getMiddle()<<endl;
    st.removeMiddle();
    cout<<st.getMiddle()<<endl;
    st.removeMiddle();
    cout<<st.getMiddle()<<endl;
    st.removeMiddle();
    cout<<st.getMiddle()<<endl;
    st.removeMiddle();
    cout<<st.getMiddle()<<endl;
    st.removeMiddle();
    cout<<st.getMiddle()<<endl;
    st.removeMiddle();

}