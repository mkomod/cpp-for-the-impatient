#include <iostream>

using std::cout;
using std::endl;

int
main() {
    int a = 1;
    double b = 2.0;
    float c = 3.0;

    cout << "int to double: " << static_cast<double>(a) << endl;
    cout << "double to int: " << static_cast<int>(b) << endl;

    return 0;
}
