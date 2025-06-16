#include <iostream>
#include "../include/Linked_List.h"

using namespace std;   

int main() {
    Linked_List list;

    // Insert elements
    list.append("10");
    list.append("20");
    list.append("30");

    list.print_list();

    // Insert at the beginning
    list.prepend("5");

    list.print_list();

    // Insert after a specific node
    list.append_after("20", "25");
    list.print_list();

    // Delete a node by value
    list.delete_node("20");

    list.print_list();
    // Delete a node by position
    list.delete_node(1); // Deletes the second node (25)
    list.print_list();

}