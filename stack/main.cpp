#include <iostream>
#include "stack.h"

using namespace std;

int main()
{
    Stack S;
    createStack_1301213092(S);

    push_1301213092(S, 'A');
    push_1301213092(S, 'Y');
    push_1301213092(S, 'A');
    push_1301213092(S, 'J');

    push_1301213092(S, 'B');
    push_1301213092(S, 'A');
    push_1301213092(S, 'L');
    push_1301213092(S, 'F');
    push_1301213092(S, 'I');
    cout << "Isi stack awal \n";
    print_1301213092(S);

    pop_1301213092(S);
    pop_1301213092(S);
    pop_1301213092(S);
    pop_1301213092(S);
    pop_1301213092(S);

    cout << "\n\nIsi stack sesudah Pop \n";
    print_1301213092(S);

    return 0;
}
