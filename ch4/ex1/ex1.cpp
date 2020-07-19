#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;


int
main() {
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    for (int i: arr) {
	cout << i << " ";
    }

    for (int &i: arr) {
	i = 0; // &i references the address, allowing us to set the value to 0
    }

    cout << endl;

    for (auto i: arr) { // auto keyword, deduces type form container base type
	cout << i << " ";
    }

    cout << endl;

    string str = "this is a test";
    for (char c: str) {
	cout << c << " ";
    }

    return 0;
}
