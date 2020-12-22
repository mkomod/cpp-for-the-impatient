#include <iostream>

using std::cout;
using std::endl;

void print_fillers(int n);
void print_fillers(int n, char c);

int 
main() {
    print_fillers(10);
    cout << endl;
    print_fillers(10, '+');
    return 0;
}

void print_fillers(int n) {
    char c = '-';
    for (int i = 0; i < n; ++i) {
	cout << c;
    }
}

void print_fillers(int n, char c) {
    for (int i = 0; i < n; ++i) 
	cout << c;
}
