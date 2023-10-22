#include <iostream>


class Node {
public:
	double data;
	Node* next;

public: 
	Node(double data) {
		this->data = data;
		this->next = NULL;
	}
};

class OneLinkedList {
public:
	Node* head, * tail;

public:
	OneLinkedList() {
		this->head = this->tail = NULL;
	}
	
	~OneLinkedList()
	{
		while (head != NULL) {
			pop_front();
		}
	}

	void pop_front() {
		if (head == NULL) {
			return;
		}
		if (head == tail) {
			delete tail;
			head = tail = NULL;
			return;
		}

		Node* node = head;
		head = node->next;
		delete node;
	}




};


int main() {

	return 0;
}