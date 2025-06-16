#pragma once
#include <iostream>
#include <memory>
#include <string>

using namespace std;

struct Node {
    string data;
    shared_ptr<Node> next;

    Node(const string& data) : data(data), next(nullptr) {}
};
