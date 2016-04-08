#pragma once

class node {				//a node class
public:
	double data;
	node* nextPtr;
	node();
};

class queue {				//a queue class
	node* headPtr;
	node* rearPtr;
public:
	queue();
	~queue();
	void enqueue(double);
	void dequeue();
	double front();
	double back();
	void display();			//displays all the data in the queue
};