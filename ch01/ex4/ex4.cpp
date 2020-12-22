#include <iostream>

using namespace std;

int 
main() {
    double x;
    double y;
    double max_val;

    cout << "Enter a value for x: ";
    cin >> x;
    cout << "Enter a value for y: ";
    cin >> y;

    if (x > y) {
	max_val = x;
    } else {
	max_val = y;
    }

    cout << "The max. is " << max_val << endl;

    return 0;
}
