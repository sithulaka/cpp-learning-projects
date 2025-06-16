#include "Linked_List.h"
#include "Node.h"

using namespace std;

void Linked_List::append (const string& data){
	new_node = make_shared<Node>(data);

	if (!head) {
		head = new_node;
		return;
	}

	prev = head;
	while (prev->next) {
		prev = prev->next;
	}

	prev->next = new_node;
};

void Linked_List::prepend (const string& data) {
	new_node = make_shared<Node>(data);
	new_node->next = head;
	head = new_node;
};

void Linked_List::append_after (const string& prev_node, const string& data) {
	new_node = make_shared<Node>(data);

	prev = head;
	while (prev && prev->data != prev_node) {
		prev = prev->next;
	}

	if (!prev) return;

	new_node->next = prev->next;
	prev->next = new_node;
};

void Linked_List::delete_node(const string& data) {
	if (head && head->data == data) {
		head = head->next;
		return;
	}

	prev = head;
 	shared_ptr<Node> current = head ? head->next : nullptr;

    while (current) {
        if (current->data == data) {
            prev->next = current->next;
            return;
        }
        prev = current;
        current = current->next;
    }
};

void Linked_List::delete_node(int position) {
	if (position == 0 && head) {
		head = head->next;
		return;
	}

	prev = head;
 	shared_ptr<Node> current = head ? head->next : nullptr;
 	int count = 1;

    while (current) {
        if (count == position) {
            prev->next = current->next;
            return;
        }
        prev = current;
        current = current->next;
        count++;
    }
};

void Linked_List::print_list() {
	if (!head) {
		cout << "List is empty" << endl;
		return;
	}

	prev = head;
	while (prev) {
		cout << prev->data;
		if (prev->next) {
			cout << " -> ";
		}
		prev = prev->next;
	}
	cout << endl;
};