#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
    Node(int data, Node *next)
    {
        this->data = data;
        this->next = next;
    }
};

class Stack
{
    // Write your code here
    int size;
    Node *head;

public:
    Stack()
    {
        // Write your code here
        size = 0;
        head = NULL;
    }

    int getSize()
    {
        // Write your code here
        if (!head)
            size = 0;
        else if (head->next == NULL)
            size = 1;
        return size;
    }

    bool isEmpty()
    {
        // Write your code here
        if (head)
            return false;
        return true;
    }

    void push(int data)
    {
        // Write your code here
        size++;
        Node *temp = new Node(data);
        temp->next = head;
        head = temp;
    }

    void pop()
    {
        // Write your code here
        if(head){
            head=head->next;
            size--;
        }
    }

    int getTop()
    {
        // Write your code here
        if (size)
            return head->data;
        return -1;
    }
};

int main()
{
    Stack st = Stack();
    st.push(34);
    int size = st.getSize();
    cout << size << endl;
    st.pop();
    cout << st.getSize() << endl;
    cout << st.isEmpty() << endl;
    cout << st.getTop() << endl;
    st.pop();
    return 0;
}