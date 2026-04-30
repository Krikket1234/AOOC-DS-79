#include <iostream>
using namespace std;
struct Node 
{
    int data;
    Node* next;
};

Node* top = NULL;

void push(int val) 
{
    Node* temp = new Node;
    temp->data = val;
    temp->next = top;
    top = temp;
}

void pop() 
{
    if (top == NULL) 
	{
        cout << "Stack Underflow\n";
        return;
    }
    Node* temp = top;
    cout << "Popped: " << temp->data << endl;
    top = top->next;
    delete temp;
}

void displayStack() 
{
    if (top == NULL) 
	{
        cout << "Stack is empty\n";
        return;
    }
    Node* t = top;
    cout << "Stack: ";
    while (t != NULL) 
	{
        cout << t->data << " ";
        t = t->next;
    }
    cout << endl;
}

Node* front = NULL;
Node* rear = NULL;

void enqueue(int val) 
{
    Node* temp = new Node;
    temp->data = val;
    temp->next = NULL;

    if (rear == NULL) 
	{
        front = rear = temp;
        return;
    }
    rear->next = temp;
    rear = temp;
}

void dequeue() 
{
    if (front == NULL) 
	{
        cout << "Queue Underflow\n";
        return;
    }
    Node* temp = front;
    cout << "Dequeued: " << temp->data << endl;
    front = front->next;

    if (front == NULL)
        rear = NULL;

    delete temp;
}

void displayQueue() 
{
    if (front == NULL) 
	{
        cout << "Queue is empty\n";
        return;
    }
    Node* t = front;
    cout << "Queue: ";
    while (t != NULL) 
	{
        cout << t->data << " ";
        t = t->next;
    }
    cout << endl;
}
int main() 
{
    int ch, val;
    while (1) 
	{
        cout << "\n--- MENU ---\n";
        cout << "1. Push (Stack)\n";
        cout << "2. Pop (Stack)\n";
        cout << "3. Display Stack\n";
        cout << "4. Enqueue (Queue)\n";
        cout << "5. Dequeue (Queue)\n";
        cout << "6. Display Queue\n";
        cout << "7. Exit\n";
        cout << "Enter choice: ";
        cin >> ch;
    switch (ch) 
	{
        case 1:
		    cout << "Enter value: ";
		    cin >> val;
		    push(val);
		    break;
		case 2:
            pop();
            break;
		case 3:
            displayStack();
            break;
		case 4:
            cout << "Enter value: ";
            cin >> val;
            enqueue(val);
            break;
		case 5:
            dequeue();
            break;
		case 6:
            displayQueue();
            break;
		case 7:
            return 0;
			default:
			cout << "Invalid choice!\n";
        }
    }
}
