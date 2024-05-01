#include "Node.cpp"

class Stack
{
private:
    Node *headNode, *topNode;
    int size;

public:
    Stack()
    {
        headNode = new Node();
        headNode->setNext(nullptr);
        size = 0;
    }
    void push(int newObject)
    {
        Node *newNode = new Node();
        newNode->set(newObject);
        newNode->setNext(headNode->getNext());
        headNode->setNext(newNode);
        size++;
        return;
    }

    int pop()
    {
        topNode = headNode->getNext();
        headNode->setNext(topNode->getNext());
        int value = topNode->get();
        delete topNode;
        size--;
        return value;
    }

    int top()
    {
        return headNode->getNext()->get();
    }

    bool isEmpty()
    {
        return size < 1 ? true : false;
    }
};