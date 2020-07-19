#include <iostream>

using std::cout;
using std::endl;

int 
main() {
    int i = 1;
    int n = 1;
    n = i++;
    cout << "n: " << n << " i: " << i << endl;

    n = ++i;
    cout << "n: " << n << " i: " << i << endl;

    short a, b;
    a = 0x0070;
    b = a >> 4;
    cout << "a: " << a << " b: " << b << endl;
    b = a >> 2;
    cout << "a & b " << (a & b) << endl;

    cout << "a > b ? " << (a > b ? "true" : "false") << endl;
    
    return 0;
}

