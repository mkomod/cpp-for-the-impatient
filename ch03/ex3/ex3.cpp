#include <iostream>

using std::cin;
using std::cout;
using std::endl;


int
main() {
    int n = 0;		// counter
    unsigned int num = 1;
    unsigned mask = 0x80000000;
    
    cout << "Enter a number: ";
    cin >> num;

    while( n++ < sizeof(num) * 8) {
	cout << ((num & mask) != 0);
	mask >>= 1;
	if (n % 4 == 0) {
	    cout << " ";
	}
    }
    cout << endl;

    return 0;
}

