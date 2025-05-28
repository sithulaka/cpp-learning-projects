#pragma once

using namespace std;

class Stack() {

    string *stack;
    int index;
    int size;

    public:
    Stack ();
    Stack (int size);
    void push(string item);
    string pop();
    string peek();
    void get_stack();
    bool isEmpty();
    bool isFull();
    int get_size();
    void clean();
    ~Stack();
}