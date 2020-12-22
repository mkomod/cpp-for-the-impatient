#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int
main() {
    unsigned short num = 0x8000;
    unsigned short total = 0;
    string str = "0000 0000 0000 0000";
    
    cout << "Enter a 16 digit binary number: ";
    cin >> str;

    for (int i = 0; i < sizeof(str); ++i) {
	if (str[i] == '1') {
	    total += num;
	    num >>= 1;
	} else if (str[i] == '0') {
	    num >>= 1;
	}
    }

    cout << total << endl;

    return 0;
}

