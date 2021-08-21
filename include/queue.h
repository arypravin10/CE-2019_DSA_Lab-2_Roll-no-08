#define queue_h
#include <iostream>
template <typename T>

class queue
{

private:
    int front;
    int rear;
    T queuesize[6];
    T max_queue_size;

public:
    queue()
    {
        front = -1;
        rear = -1;
        max_queue_size = 6;
    }

    bool is_empty()
    {

        if (front == rear)
        {
            return true;
        }

        else
        {
            return false;
        }
    }

    bool is_full()
    {
        if (rear == max_queue_size - 1)
        {
            return true;
        }

        else
        {
            return false;
        }
    }

    void enqueue(T data)
    {

        if (!is_full())
        {
            rear++;
            queuesize[rear] = data;

            std::cout << "Inserted element is " << data << std::endl;
        }

        else
        {
            std::cout << "Queue Overflow" << std::endl;
        }
    }

    void dequeue()
    {
        if (!is_empty())
        {
            front = front + 1;
            T data = queuesize[front];
            std::cout << "Dequeue element is " << data << std::endl;
        }
        else
        {

            std::cout << "Empty queue" << std::endl;
        }
    }

    void display_front()
    {
        if (!is_empty())
        {
            std::cout << queuesize[front + 1] << std::endl;
        }
        else
        {
            std::cout << "No front element" << std::endl;
        }
    }
    void display_back()
    {
        if (!is_empty())
        {
            std::cout << queuesize[rear] << std::endl;
        }
        else
        {
            std::cout << "No rear element" << std::endl;
        }
    }
};