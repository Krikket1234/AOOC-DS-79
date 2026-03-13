#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
};

Node* top = NULL;

void push(int value)
{
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = top;
    top = newNode;
    cout << value << " pushed into stack" << endl;
}

void pop()
{
    if(top == NULL)
    {
        cout << "Stack Underflow" << endl;
        return;
    }

    Node* temp = top;
    cout << top->data << " popped from stack" << endl;
    top = top->next;
    delete temp;
}

void display()
{
    Node* temp = top;

    if(temp == NULL)
    {
        cout << "Stack is empty" << endl;
        return;
    }

    cout << "Stack elements are: ";

    while(temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;
}

int main()
{
    push(10);
    push(20);
    push(30);

    display();

    pop();
    display();

    return 0;
}