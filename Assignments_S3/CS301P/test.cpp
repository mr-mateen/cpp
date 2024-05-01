#include <iostream>
#include <string>
using namespace std;

class Task
{
private:
    string description;

public:
    Task(string desc)
    {
        this->description = desc;
    }
    void setDescription(string newDesc) { this->description = newDesc; }
    string getDescription() { return this->description; }
    ~Task()
    {
        cout << "Task Destructor ==" << description << " is deleted" << endl;
    }
};

class Node
{
private:
    Task *task;
    Node *next;

public:
    Node(Task *t)
    {
        task = t;
        next = nullptr;
    }
    ~Node()
    {
        cout << "Destructor::Task == " << task->getDescription() << endl;
        delete task;
    }

    Task *getTask() { return this->task; }

    Node *getNext() { return next; }

    void setNext(Node *nextNode) { this->next = nextNode; }
};

class List
{
private:
    Node *head, *current;

public:
    List()
    {
        head = nullptr;
        current = head;
        /**
         * current will always points to the last node of the list
         * */
    }
    ~List()
    {
        while (head != nullptr)
        {
            Node *temp = head;
            head = head->getNext();
            delete temp;
        }
    }

    void addTask(Task *t)
    {
        Node *newNode = new Node(t);
        if (head == nullptr)
        {
            head = newNode;
            current = head;
        }
        else
        {
            current->setNext(newNode);
            current = newNode;
        }
    }
    void displayTasks()
    {
        Node *iterator = head;
        int numberOfTasks = 0;

        cout << "========== Display Tasks (BC230202833) ==========" << endl;
        while (iterator != nullptr)
        {
            cout << numberOfTasks + 1 << ". " << iterator->getTask()->getDescription() << endl;
            iterator = iterator->getNext();
            numberOfTasks++;
        }
        cout << "Total Tasks Entered: " << numberOfTasks << endl;
    }
    bool removeTask(string desc)
    {
        if (head == nullptr)
        {
            return false;
        }

        if (head->getTask()->getDescription() == desc)
        {
            Node *temp = head;
            head = head->getNext();
            delete temp;
            return true;
        }

        Node *temp = head;
        while (temp->getNext() != nullptr)
        {
            if (temp->getNext()->getTask()->getDescription() == desc)
            {
                Node *tempNode = temp->getNext();
                temp->setNext(tempNode->getNext());
                if (current == tempNode)
                {
                    current = temp;
                }
                delete tempNode;
                return true;
            }
            temp = temp->getNext();
        }

        return false;
    }
};

int main()
{
    List taskManager;
    Task *t1 = new Task("Task 1");
    Task *t2 = new Task("Task 2");
    Task *t3 = new Task("Task 3");
    Task *t4 = new Task("Task 4");
    Task *t5 = new Task("Task 5");

    taskManager.addTask(t1);
    taskManager.addTask(t2);
    taskManager.addTask(t3);
    taskManager.addTask(t4);
    taskManager.addTask(t5);

    taskManager.displayTasks();
    taskManager.removeTask("Task 2");
    taskManager.displayTasks();

    return 0;
}