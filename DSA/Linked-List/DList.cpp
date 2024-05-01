#include <iostream>
#include "DNode.cpp"
using namespace std;

class DList
{
private:
    DNode *headNode;
    DNode *currentNode, *lastCurrentNode;
    int size;

public:
    DList()
    {
        headNode = new DNode();
        headNode->setNext(nullptr);
        headNode->setPrev(nullptr);
        currentNode = nullptr;
        size = 0;
    }

    void add(int newObject)
    {
        cout << "ADD " << newObject << endl;
        DNode *newNode = new DNode();
        newNode->set(newObject);

        if (currentNode != nullptr)
        {
            newNode->setNext(currentNode->getNext());
            newNode->setPrev(currentNode);
            if (currentNode->getNext())
                currentNode->getNext()->setPrev(newNode);
            currentNode->setNext(newNode);
            lastCurrentNode = currentNode;
            currentNode = newNode;
        }
        else
        {
            newNode->setNext(nullptr);
            newNode->setPrev(headNode);
            headNode->setNext(newNode);
            lastCurrentNode = headNode;
            currentNode = newNode;
        }
        size++;
    }

    void remove(){
        if(currentNode != nullptr && currentNode != headNode){
            (currentNode->getPrev())->setNext(currentNode->getNext());
            (currentNode->getNext())->setPrev(currentNode->getPrev());
            delete currentNode;
            currentNode = lastCurrentNode;
            size--;
        // The pointer will move to the LastCurrentNode.    
        // If anything is added after back() and then remove() the new object will be added after the lastCurrentNode
        }
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

    bool back()
    {
        if (currentNode == nullptr || size == 0)
            return false;

        lastCurrentNode = currentNode;
        currentNode = currentNode->getPrev();
        return true;        
    }

    void start()
    {
        lastCurrentNode = headNode;
        currentNode = headNode;
    }

    int length()
    {
        return size;
    }
};
