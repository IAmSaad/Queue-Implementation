#include"Queue.h"
#include<iostream>

using namespace std

int main (){
	
	Queue people_outside_the_bank;
	
	people_outside_the_bank.enqueue(10);
	people_outside_the_bank.enqueue(20);
	people_outside_the_bank.enqueue(30);
	
	cout<<people_outside_the_bank.front()<<endl;
	cout<<people_outside_the_bank.back()<<endl;
	
	people_outside_the_bank.display();
	
	return 0;
}
