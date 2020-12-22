#include <iostream>

using std::cout;
using std::endl;
using std::cin;


int 
main() {
    int err;
    
    cout << "Enter a number: ";
    cin >> err;

    switch (err) {
	case 1: 
	    cout << "One" << endl;
	    break;
	case 2:
	    cout << "Two" << endl;
	    break;
	default:
	    cout << "Default" << endl;
    }

    return 0;
}




