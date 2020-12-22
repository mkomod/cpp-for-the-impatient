#include <iostream>

using std::cout;
using std::endl;


int
main() {

    int n = 0;

cheese:
    cout << "one two three" << endl;
    ++n;
    
    if (n < 3) {
	goto cheese;
    }

    cout << "cheese";

    return 0;
}
