#include <iostream>
#include "Node.cpp"

using namespace std;

/**
 * @todo fix currentNode and lastCurrentNode in start();
 * 
 * @problem
 * When start() is called currentNode and lasCurrentNode both points to the headNode
 * Which creates a problem when adding or removing elements;
 * 
 * @solutions
 * 1. A solution to this problem is to add a tailNode which will keep the reference 
 * of the last element in the list.
*/
class CList
{
private:
    Node *headNode, *tailNode;
    Node *currentNode, *lastCurrentNode;
    int size;

    bool setTailNode() {
        if(currentNode->getNext() == headNode){
            tailNode = currentNode;
            return true;
        }
        return false;
    }
public:
    CList()
    {
        headNode = new Node();
        /**
         * For circular nature of the list it is necessary
         * to point headNode towards itself 
         * 👇👇👇
         */
        headNode->setNext(headNode); 
        currentNode = headNode;
        size = 1;
    }

    void add(int newObject)
    {
        if (size == 1 && !headNode->get())
        {
            headNode->set(newObject);
            currentNode = headNode;
            setTailNode();
            return;
        }

        Node *newNode = new Node();
        newNode->set(newObject);

        if (currentNode != nullptr)
        {
            newNode->setNext(currentNode->getNext());
            currentNode->setNext(newNode);
            lastCurrentNode = currentNode;
            currentNode = newNode;
            size++;
            setTailNode();
            return;
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

    void start()
    {
        lastCurrentNode = headNode;
        currentNode = headNode;
    }

    void remove()
    {
        if (currentNode != nullptr && size > 1)
        {

            if(lastCurrentNode == headNode && currentNode == headNode) {
                tailNode->setNext(headNode->getNext());
                delete currentNode;
                headNode = tailNode->getNext();
                currentNode = headNode;
                size--;
                return;

            }
            /**
             * It Will retain the circular list
             * because (iff) headNode is pointing to itself in the constructor
            */

            lastCurrentNode->setNext(currentNode->getNext());
            /**
             * We must need to set headNode explicitly
             * otherwise it will return memory address of the last deleted headNode when start() is called;
             */
            if(currentNode == headNode)
                headNode = lastCurrentNode->getNext();

            delete currentNode;
            currentNode = lastCurrentNode->getNext();
            size--;

            /**
             * If List contains only 2 elements and headNode is the currentNode
             * then it will remove the headNode and pointer will shift to next element (2nd element - current element)
             * at that point the size of the list will be 1. Now the current element (2nd element) will become the head;
            */
            if (size == 1) 
                headNode = currentNode;
            return;
        }
    }

    int length() { return size; }
};