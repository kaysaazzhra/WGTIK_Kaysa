#include "stack.h"

void createStack_1301213092(Stack &S){
    S.Top = 0;
}

bool isEmpty_1301213092(Stack S){
    return S.Top == 0;
}

bool isFull_1301213092(Stack S){
    return S.Top == MAX;
}


void push_1301213092(Stack &S, infotype x){
    if(isFull_1301213092(S)){
        return;
    } else {
        S.Top++;
        S.info[S.Top] = x;
    }
}

infotype pop_1301213092(Stack &S){
    infotype data;
    if(isEmpty_1301213092(S)){
        return NULL;
    } else {
        data = S.info[S.Top];
        S.info[S.Top] = NULL;
        S.Top--;
        return data;
    }
}

void print_1301213092(Stack S){
    if(isEmpty_1301213092(S)){
        cout << "Stack Kosong" << endl;
        return;
    } else {
        for(int n = S.Top; n >= 1; n--){
            cout << S.info[n] << " ";
        }
    }
}
