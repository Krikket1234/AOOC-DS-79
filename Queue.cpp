#include <iostream>
using namespace std;

int queue[5];
int front = -1, rear = -1;

void enqueue(int x) {
    if (rear == 4)
        cout << "Queue Full\n";
    else {
        if (front == -1) front = 0;
        queue[++rear] = x;
    }
}

void dequeue() {
    if (front == -1 || front > rear)
        cout << "Queue Empty\n";
    else
        front++;
}

void display() {
    for (int i = front; i <= rear; i++)
        cout << queue[i] << " ";
    cout << endl;
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    enqueue(60);
    enqueue(70);
    display();

    dequeue();
    display();

    return 0;
}