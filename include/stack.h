#define stack_h
#include <iostream>

template <typename T>

class stack
{

private:
    int top;
    T stack_size[6];
    int max_size;

public:
    stack()
    {
        top = -1;
        max_size = 6;
    }

    bool isempty()
    {

        if (top == -1)
        {
            return true;
        }

        return false;
    }

    bool isfull()
    {

        if (top == max_size - 1)
        {
            return true;
        }

        return false;
    }

    void push(T element)
    {

        if (isfull())
        {
            std::cout << "The stack is full" << std::endl;
        }

        else
        {
            top++;
            stack_size[top] = element;

            std::cout << "The pushed element is " << element << std::endl;
        }
    }

    void pop()
    {

        if (top == -1)
        {

            std::cout << "Stack empty" << std::endl;
        }

        else
        {
            T data;

            data = stack_size[top];
            top--;
            std::cout << "The popped element is " << data << std::endl;
        }
    }

    void top_info()
    {

        if (!isempty())
        {
            std::cout << "The element at top is " << stack_size[top] << std::endl;
            ;
        }
        else
        {
            std::cout << "Stack is empty" << std::endl;
        }
    }
};
