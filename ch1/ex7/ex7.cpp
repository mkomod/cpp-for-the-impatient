#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int
main() {
    double n = 1.0;
    double sum = 0.0;

    cout << "Type in a list of numbers, terminate with 0" << endl;
    while (n != 0) {
	cin >> n;
	if (!cin) {
	    n = 0;
	}
	sum = sum + n;
    }

    cout << "The total is " << sum << endl;
    return 0;
}
