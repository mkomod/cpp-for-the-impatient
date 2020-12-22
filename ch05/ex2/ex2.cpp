#include <iostream>
#include <cstdarg>

using namespace std;

void print_ints(int n ...);

int
main() {
    print_ints(4, 100, 200, 300, 400);
    return 0;
}

void
print_ints(int n ...) {
    va_list(arglist); // reading of variable argument list
    va_start(arglist, n); // at least one names argument
    for (int i = 0; i < n; ++i) {
	cout << va_arg(arglist, int) << endl;
    }
    va_end(arglist);
}
