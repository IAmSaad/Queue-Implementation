#include"Queue.h"
#include<iostream>

node::node() {						//ctor of node class
	this->data = 0;
	this->nextPtr = NULL;
}

queue::queue() {					//ctor of queue class
	headPtr = NULL;
	rearPtr = NULL;
}

queue::~queue() {					//dtor of queue class
	node* currentPtr = this->headPtr;
	node* temp = NULL;

	while (currentPtr != NULL) {
		temp = currentPtr->nextPtr;
		delete currentPtr;
		currentPtr = temp;
	}
}

void queue::enqueue(double insertThis) {		//adds the element after the recently added element
	node* temp = new node();
	temp->data = insertThis;
	temp->nextPtr = NULL;

	if (headPtr == NULL&&rearPtr == NULL) {
		this->headPtr = temp;
		this->rearPtr = temp;
	}
	else {
		this->rearPtr->nextPtr = temp;
		this->rearPtr = temp;
	}
}

void queue::dequeue() {							//deletes the first element in the queue
	if (headPtr == NULL&&rearPtr == NULL) {
		std::cout << "Queue already empty" << std::endl;
	} else if (headPtr == rearPtr) {
		delete headPtr;
		headPtr = NULL;
		rearPtr = NULL;
	}else {
		node* secondNode = headPtr->nextPtr;
		delete headPtr;
		headPtr = secondNode;
	}
}

double queue::front() {							//displays the 1st element in queue 
	return headPtr->data;
}

double queue::back() {							//displays the last element in queue
	return rearPtr->data;
}

void queue::display() {							//displays the whole queue element by element
	node* currentPtr = this->headPtr;

	while (currentPtr != NULL) {
		std::cout << currentPtr->data << std::endl;
		currentPtr = currentPtr->nextPtr;
	}
	std::cout << std::endl;
}