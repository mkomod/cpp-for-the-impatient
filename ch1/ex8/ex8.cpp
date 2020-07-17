#include <iostream>

using std::cout;
using std::endl;

int
main() {
    int n = 1000;
    double a = 1;
    double b = 1;
    double tmp;

    cout.precision(15);

    while (n > 0) {
	tmp = a;
	a = a + b;
	b = tmp;

	n--;
    }

    cout << "Ratio: " << a / b << endl;
    return 0;
}

