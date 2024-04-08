//stack.h
#ifndef STACK_H
#define STACK_H
#include "linkedlist.h"

class Stack
{
private: 
    int nNum;
    Linkedlist* linkedlist;
public:
    Stack();
    virtual ~Stack();
    void push(int);
    int pop();
    void printStack();
};

#endif // STACK_H
