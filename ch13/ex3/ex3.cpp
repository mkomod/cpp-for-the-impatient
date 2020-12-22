#define LL 80

#include <iostream>
#include <iomanip>

using namespace std;

int
main() {
    
    // Input stream functions

    char c;
    c = cin.get();
    if (c == EOF) {
	cout << "Emd of file" << endl; 
    } else {
	cout << "Not the end" << endl;
    }

    int n;
    n = cin.gcount();
    cout << "cin.gcount(): " << n << endl;

    char cstr[LL];
    cin.get(cstr, LL);
    cout << "cin.gcount(): " << cin.gcount() << endl;
    
    return 0;
}
