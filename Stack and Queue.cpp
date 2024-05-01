#include<iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

class Stack {
    Node* top;
public:
    Stack() { top = NULL; }
    void push(int data);
    int pop();
};

void Stack::push(int data) {
    Node* newNode = new Node();
    if (!newNode) {
        cout << "Heap overflow";
        exit(1);
    }
    newNode->data = data;
    newNode->next = top;
    top = newNode;
}

int Stack::pop() {
    Node* temp;
    if (top == NULL) {
        cout << "Stack underflow" << endl;
        exit(1);
    }
    else {
        temp = top;
        top = top->next;
        temp->next = NULL;
        int popped_value = temp->data;
        delete temp;
        return popped_value;
    }
}

class Queue {
    Node *front, *rear;
public:
    Queue() { front = rear = NULL; }
    void enqueue(int data);
    void dequeue();
};

void Queue::enqueue(int data) {
    Node* newNode = new Node();
    if (newNode == NULL) {
        cout << "Queue is full";
        exit(1);
    }
    newNode->data = data;
    newNode->next = NULL;
    if (front == NULL)
        front = rear = newNode;
    else {
        rear->next = newNode;
        rear = newNode;
    }
}

void Queue::dequeue() {
    if (front == NULL) {
        cout << "Queue is empty";
        exit(1);
    }
    else {
        Node* temp = front;
        front = front->next;

        if (front == NULL)
            rear = NULL;

        delete(temp);
    }
}
int main() {
    Stack s;
    s.push(10);
    s.push(20);
    cout << "Stack: ";
    cout << s.pop() << " ";
    cout << s.pop() << endl;

    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    cout << "Queue: ";
    q.dequeue();
    q.dequeue();

    return 0;
}
