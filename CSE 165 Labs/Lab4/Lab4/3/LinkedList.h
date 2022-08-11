#ifndef LinkedList_h
#define LinkedList_h

#include <iostream>

using namespace std;

class LinkedList {      
public:
    struct Link { 
		void* data;
		Link* next;
		
		void initialize(void* dat) {
			data = dat;
			next = NULL;
		} 
	} *head, *tail;

    void initialize() {
        head = 0;
    }
	
    void add(void* dat) {
        Link* new_node = new Link();
        new_node->initialize(dat);
        if (head == 0) {
            head = new_node;
            tail = new_node;
        }
        else {
            tail->next = new_node;
            tail = tail->next;
        }
    }
	
    void print() {
        Link* temp = head;
        while (temp->data != NULL) {
            cout << *(double*) (temp->data) << endl;
            temp = temp->next;
        }
    }
	
    void cleanup() {
        Link* temp = head;
        while(temp != NULL){
		    head = head->next;
		    delete temp;
            temp = head;
        }
    }
};

#endif