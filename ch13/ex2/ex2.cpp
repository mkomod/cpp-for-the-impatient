#include <iostream>
#include <iomanip>

using namespace std;

int
main() {
    
    int n = 1234;
    cout << showbase << uppercase;
    cout << "hex of " << dec << n << hex << " = " << n << endl;

    // Stream format flags
    cout << setiosflags(ios_base::fixed | ios_base::showpoint);
    cout << 1234.1234;

    return 0;
}
