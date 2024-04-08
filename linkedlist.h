/// File: linkedlist.h
#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include "element.h"

class Linkedlist
{
private:
    element* head;
    element* tail;
    int nNum;
public:
    Linkedlist();
    virtual ~Linkedlist();
    element* Gethead() { return head; }
    void Sethead(element* val) { head = val; }
    element* Gettail() { return tail; }
    void Settail(element* val) { tail = val; }
    void InsertFirst(element*);
    void InsertTail(element*);
    bool DeleteFirst();
    bool DeleteTail();
    void Travel();

protected:


};

#endif // LINKEDLIST_H
