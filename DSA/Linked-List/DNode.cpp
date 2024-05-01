class DNode
{
private:
    int object;
    DNode  *nextNode;
    DNode *prevNode;

public:
    int get() { return object; }

    void set(int object) { this->object = object; }

    DNode *getNext() { return nextNode; }

    DNode *getPrev() { return prevNode; }

    void setNext(DNode *nextNode) { this->nextNode = nextNode; }

    void setPrev(DNode *prevNode) { this->prevNode = prevNode; }
};