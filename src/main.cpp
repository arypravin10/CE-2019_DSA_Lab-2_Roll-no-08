#include "stack.h"
#include "queue.h"
#include <iostream>

int main()
{

    stack<int> s;
    std::cout << s.isempty() << std::endl;
    s.top_info();
    s.pop();
    s.push(7);
    s.pop();
    s.push(9);
    s.push(8);

    s.top_info();
    s.pop();

    s.top_info();
    s.push(5);
    s.push(3);
    s.push(2);
    s.push(1);
    s.top_info();
    s.push(11);
    s.top_info();
    s.push(0);

    s.top_info();
    std::cout << s.isempty() << std::endl;

    //For queue

    std::cout << std::endl;
    std::cout << "Queue with array" << std::endl;

    queue<int> q;
    std::cout << q.is_empty() << std::endl;
    std::cout << q.is_full() << std::endl;
    q.enqueue(5);
    q.enqueue(10);
    q.dequeue();
    std::cout << q.is_full() << std::endl;
    std::cout << q.is_empty() << std::endl;
    q.enqueue(23);
    q.dequeue();
    q.display_front();
    q.enqueue(4);
    q.display_back();
}
