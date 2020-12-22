#define MC 256

#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int
main() {

    // cout << hex << 255 << " " << 0x8c92 << endl;
    
    int i, j;
    float x;
    
    // cout << "Enter two ints and a float: ";
    // cin >> i >> j >> x;
    // cout << dec << "i: " << i << " j: " << j << " x: " << x << endl;
    
    // char cstr[MC]; // C-string
    // cin.getline(cstr, MC);
    // cout << cstr << endl;

    // string str; // string
    // getline(cin, str);
    // cout << str << endl;
   
    char cstr[MC];
    cout << "Enter an integer: ";
    cin.getline(cstr, MC);
    i = atoi(cstr); // string to int
    cout << "You enter: " << i << endl;


    return 0;
}
