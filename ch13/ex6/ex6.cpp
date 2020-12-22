#include <sstream>
#include <string>
#include <iostream>

using namespace std;

int
main() {
    
    stringstream s_out;
    int n = 253;
    s_out << n << " in hex is " << hex << showbase << n << ".";
    string s = s_out.str(); // must convert stringstream to string obj
    cout << s;

    return 0;
}
