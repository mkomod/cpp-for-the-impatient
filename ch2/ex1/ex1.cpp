#include <iostream>

using std::cout;
using std::endl;


int
main() {
    char c = 0;
    unsigned char uc = 0;
    int si = 0;
    unsigned int ui = 0;
    float f = 0;
    double d = 0;

    d = ui = si = c = uc;

    if (typeid(c + c) == typeid(int)) {
	cout << "type of (char + char) is int" << endl;
    }

    if (typeid(si + ui) == typeid(unsigned)) {
	cout << "type of (int + unsigned int) is unsigned" << endl;
    }

    if (typeid(si + d) == typeid(double)) {
	cout << "type of (int + double) is double" << endl;
    }

    if (typeid(f * f) == typeid(float)) {
	cout << "type of (float * float) is float" << endl;
    }

    if (typeid(f + f) == typeid(float)) {
	cout << "type of (float + float) is float" << endl;
    }

    if (typeid(uc + si) == typeid(int)) {
	cout << "type of (unsigned char + int) is int" << endl;
    } else if (typeid(uc + si) == typeid(unsigned)) {
	cout << "type of (unsigned char + int) is unsigned int" << endl;
    }

    return 0;
}
