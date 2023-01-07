#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED
#include <iostream>

using namespace std;

const int MAX = 15;

typedef char infotype;

struct Stack {
    infotype info[MAX];
    int Top;
};

void createStack_1301213092(Stack &S);
bool isEmpty_1301213092(Stack S);
bool isFull_1301213092(Stack S);

void push_1301213092(Stack &S, infotype x);
infotype pop_1301213092(Stack &S);
void print_1301213092(Stack S);

#endif // STACK_H_INCLUDED
