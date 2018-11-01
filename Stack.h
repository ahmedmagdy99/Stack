#ifndef STACK_H
#define STACK_H
#include <iostream>
#include <valarray>
using namespace std;
class Stack
{
    public:
        Stack();
        char pop();
        void push(char v);
        void error (string message);
        void clearr();
        bool isEmpty();
        int getSize();
    protected:

    private:
        valarray<char> data;
        int sizee;
};

#endif // STACK_H
