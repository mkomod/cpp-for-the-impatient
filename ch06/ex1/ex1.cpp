#include <iostream>

using namespace std;

void ref(int &a);
void display(const double &a);

int
main() {
    int a = 8;
    double large_obj = 2.0;

    ref(a);
    cout << a << endl;

    display(large_obj);

    return 0;
}

void
ref(int &a) {
    a += 2;
}

void display(const double &a) {
    cout << a << endl;
}
