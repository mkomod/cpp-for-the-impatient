#include <iostream>
#include <ctime>

using namespace std;

int
main() {
    long x1 = clock(); // start of clock

    time_t now = time(NULL);
    cout << ctime(&now) << endl; // display time in timestamp format

    long x2 = clock(); // end of clock
    cout << (x2 - x1) << endl;
    return 0;
}
