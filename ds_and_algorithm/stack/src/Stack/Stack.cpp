#include "../../include/stack.h"

Stack::Stack() {
    stack = new string[100];
    index = 0;
    size = 100;
}

Stack::Stack(int size) : size(size) {
    stack = new string[size];
    index = 0;
}

Stack::~Stack() {
    delete[] stack;
}

void Stack::push(string item) {
    if (index == size) {
        cout << "Stack overflow! Cannot push item: " << item << endl;
        return;
    }
    stack[index] = item;
    index++;
}

string Stack::pop() {
    if (index == 0) return "";
    string item = stack[index];
    index--;
    return item;
}

string Stack::peek() {
    if (index == 0) return "";
    return stack[index];
}

void Stack::get_stack() {
    cout << "Stack: ";
    for (int i = 0; i < index; i++) {
        cout << stack[i] << " ";
    }
    cout << endl;
}

bool Stack::isEmpty() {
    return index == 0;
}

bool Stack::isFull() {
    return index == size;
}

int Stack::get_size() {
    return size;
}

void Stack::clean() {
    delete[] stack;
    stack = new string[size];
    index = 0;
}