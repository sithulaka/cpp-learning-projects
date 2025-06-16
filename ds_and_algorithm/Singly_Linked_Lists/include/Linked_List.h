#pragma once
#include <iostream>
#include <memory>
#include "Node.h"
using namespace std;

class Linked_List {
private:
    shared_ptr<Node> head;
    shared_ptr<Node> new_node;
    shared_ptr<Node> prev;

public:
    void append(const string& data);
    void prepend(const string& data);
    void append_after(const string& prev_node_data, const string& data);
    void delete_node(const string& data);
    void delete_node(int position);
    void print_list();
};