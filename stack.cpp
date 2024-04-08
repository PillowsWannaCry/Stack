//stack.cpp
#include "stack.h"
#include "linkedlist.h"
#include <iostream>

using namespace std;

void Stack::push(int x) {
    element* p = new element(x);
    this->linkedlist->InsertTail(p);
    this->nNum++;
}
int Stack::pop() {
    int p = this->linkedlist->Gethead()->Getdata();
    this->linkedlist->DeleteTail();
    this->nNum--;
    return p;
}
void Stack::printStack() {
    element* p = this->linkedlist->Gethead();
    if (p == nullptr)
    {
        cout << "STACK RONG, KHONG LAY DUOC PHAN TU";
    }
    else
    {
        while (p != nullptr) {
            cout << p->Getdata() << "\t";
            p = p->Getpointer();
        }
    }
}
Stack::Stack()
{
    //ctor
    this->nNum = 0;
    this->linkedlist = new Linkedlist();
}
Stack::~Stack()
{
    //dtor
}
