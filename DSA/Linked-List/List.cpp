#include "Node.cpp"

class List
{
private:
    Node *headNode;
    Node *currentNode, *lastCurrentNode;
    int size;

public:
    List()
    {
        headNode = new Node();
        headNode->setNext(nullptr);
        currentNode = nullptr;
        size = 0;
    }

    void add(int newObject)
    {
        Node *newNode = new Node();
        newNode->set(newObject);
        if (currentNode != nullptr)
        {
            newNode->setNext(currentNode->getNext());
            currentNode->setNext(newNode);
            lastCurrentNode = currentNode;
            currentNode = newNode;
        }
        else
        {
            newNode->setNext(nullptr);
            headNode->setNext(newNode);
            lastCurrentNode = headNode;
            currentNode = newNode;
        }
        size++;
    }

    int get()
    {
        if (currentNode != nullptr)
            return currentNode->get();
    }

    bool next()
    {
        if (currentNode == nullptr || size == 0)
            return false;

        lastCurrentNode = currentNode;
        currentNode = currentNode->getNext();
        return true;
    }

    void start()
    {
        lastCurrentNode = headNode;
        currentNode = headNode;
    }

    void remove()
    {
        if (currentNode != nullptr && currentNode != headNode)
        {
            lastCurrentNode->setNext(currentNode->getNext());
            delete currentNode;
            currentNode = lastCurrentNode->getNext();
            size--;
        }
    }

    int length() { return size; }
};