#include "../Linked-List/List.cpp"

class Stack{
    private:
    List list;

    public:
    void push(int newObject){
        list.start();
        list.add(newObject);
    }
    int pop(){
        list.start();
        list.next();
        int value = list.get();
        list.remove();
        return value;

    }
    int top(){
        list.start();
        list.next();
        return list.get();

    }
    bool isEmpty(){
        list.length() < 1 ? true : false;
    }
};