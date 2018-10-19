//
// Created by Charlie Davis on 10/17/18.
//


#ifndef LAB5_LAB5HEADER_H
#define LAB5_LAB5HEADER_H

#include <iostream>
#include <stdio.h>
#include <string.h>

#define maxStackSize 100

using namespace std;

// create a class called myStack
class myStack
{
// No private elements in this class

public:

    // Int for top of the stack and an array which is the stack
    int top;
    int a[maxStackSize];

    // Initialize the stack
    myStack()  { top = -1;}

    //stack functions
    bool push(int x);
    int pop();
    bool isEmpty();
};

#endif //LAB5_LAB5HEADER_H