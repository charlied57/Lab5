//
// Created by Charlie Davis on 10/17/18.
// COSC 2030
// 10/19/18
//
# include "Lab5Header.h"

// Pushes a element to the top of the stack as long as the stack isn't full
bool myStack::push(int x)
{
    if (top >= (maxStackSize - 1))
    {
        return false;
    }
    {
        a[++top] = x;
        return true;
    }
}

// Pops the top element off the stack unless the stack is empty
int myStack::pop()
{
    if (top < 0)
    {
        return 0;
    }
    else
    {
        int x = a[top--];
        return x;
    }
}

// Checks if the stack is empty
bool myStack::isEmpty()
{
    return (top < 0);
}