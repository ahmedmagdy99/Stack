#include "Stack.h"
#include <iostream>
const int SIZE = 20;
Stack::Stack()
{
    data = valarray<char>(SIZE);
    sizee = 0;
}
char Stack::pop()
{
    if (sizee == 0)
        error("Underflow");
    if (sizee!=0)
        return data[--sizee];
}
void Stack::clearr()
{
    for (int i=sizee ; i>=0 ; i--)
    {
        pop();
    }

}
void Stack::push(char v)
{
    if (sizee == SIZE)
        error("Overflow");
    data[sizee++] = v;
}
void Stack::error (string message)
{
    cout << message << "\n";
    //exit (1);
}

bool Stack::isEmpty ()
{
    if (sizee==0)
        return true;
    else
        return false;
}
int Stack::getSize()
{
    return sizee;
}
