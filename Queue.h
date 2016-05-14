#pragma once

struct node {				//a node class
public:
	double data;
	node* nextPtr;
	node();
};

struct queue {				//a queue class
private:
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
