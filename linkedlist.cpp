/// File: linkedlist.cpp

#include "linkedlist.h"
#include <iostream>
using namespace std;
Linkedlist::Linkedlist()
{
    //ctor
    this->head = nullptr;
    this->tail = nullptr;
    this->nNum = 0;
}

Linkedlist::~Linkedlist()
{
    //dtor
}
void Linkedlist::InsertFirst(element* e) {
    if (this->head == nullptr)
        this->head = this->tail = e;
    else {
        e->Setpointer(this->head);
        this->head = e;
    }
    this->nNum++;

}
void Linkedlist::InsertTail(element* e) {
    if (this->head == nullptr)
        this->head = this->tail = e;
    else {
        this->tail->Setpointer(e);
        this->tail = e;
    }
    this->nNum++;
}
bool Linkedlist::DeleteTail()
{
    if (this->head == nullptr)
        return false;
    if (this->head->Getpointer() == nullptr)
    {
        delete head;
        this->head->Setpointer(nullptr);
        delete tail;
        this->tail->Setpointer(nullptr);
        return true;
    }
    else
    {
        element* p = this->head;
        while (p->Getpointer()->Getpointer() != nullptr)
            p = p->Getpointer();
        element* tmp = p->Getpointer();
        delete tmp;
        p->Setpointer(nullptr);
        this->tail = p;
        this->nNum--;
        return true;
    }
}
void Linkedlist::Travel() {
    element* p = this->head;
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
bool Linkedlist::DeleteFirst() {
    if (this->head == nullptr) return false;
    else {
        element* p = this->head;
        this->head = this->head->Getpointer();
        delete p;
        return true;
    }
}

