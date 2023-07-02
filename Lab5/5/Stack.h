#ifndef STACK_H
#define STACK_H

#include <iostream>

class Stack {
	public:
		Stack() {
			initialize();
		}

		Stack(int n) {
			push(1);
			for (int i = 0; i < n; ++i) {
				double temp = 0.1 * i;
				push(1 + temp);
			}
		}

		~Stack() { 
			while (head != NULL) {
				std::cout << pop() << ' ';
			} 
		}

		struct Link {
			double data;
			Link* next;
			
			void initialize(double dat, Link* nxt){
				data = dat;
				next = nxt;
			}
		}* head;
		
		void initialize(){
			head = 0;
		}
		
		void push(double dat){
			Link* newLink = new Link;
			newLink->initialize(dat, head);
			head = newLink;
		}
		
		double peek(){
			if (head == 0){
				std::cout << "Stack is empty";
			}
			return head->data;
		}
		
		double pop() {
			if(head == 0)
				return 0;
			
			double result = head->data;
			Link* oldHead = head;
			head = head->next;
			delete oldHead;
			return result;
		}
		
		void cleanup(){
			if (head == 0){
				std::cout << "Stack is empty" << std::endl;
			}
			else {
				std::cout << "Stack is not empty";
			}
		}
};
#endif