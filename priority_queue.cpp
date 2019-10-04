#include <iostream>
#include <queue>

using namespace std;

//function to display priority queue
void show(priority_queue <int> pq)
{
    while (!pq.empty())
    {
        cout << '\t' << pq.top(); //returns topmost element of priority queue
        pq.pop(); //removes element with highest priority
    }
    cout << '\n';
}

int main ()
{
    priority_queue <int> q; //note that a priority queue is max-heap by default
    q.push(70); //adding elements to the priority queue
    q.push(45);
    q.push(90);
    q.push(4);
    q.push(35);

    cout << "The priority queue is : ";
    show(q);

    cout << "\nq.size() : " << q.size(); //gives number of elements present
    cout << "\nq.top() : " << q.top();
    cout << "\nq.pop() : ";
    q.pop();
    show(q);

    return 0;
}
