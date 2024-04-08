#include <iostream>
#include "stack.h"

using namespace std;

void DecimalToBinary(int n)
{
    Stack* x = new Stack();
    while (n>0)
    {
        x->push(n % 2);
        n /= 2;
    }
    x->printStack();
}

int main()
{

    /*Stack* s = new Stack();
    s->push(7);
    s->push(10);
    s->push(18);
    s->push(20);
    cout << "\n";
    s->printStack();
    s->pop();
    s->pop();
    cout << "\n";
    s->printStack();
    s->pop();
    s->pop();
    cout << "\n";
    s->printStack();*/
    
    DecimalToBinary(5);

    return 0;
}

