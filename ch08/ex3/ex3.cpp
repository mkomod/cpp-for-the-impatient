#define NDEBUG

#include <iostream>
#include <cassert>

using namespace std;

int
main() {
    
    // static_assert(1 == 0, "1 is not 0"); // compile time assertion

    // disabled by defining NDEBUG
    assert(1 == 0); // terminates assertion failed 

    
    cout << "Something" << endl;
    cout << __DATE__ << endl;
    cout << __FILE__ << endl;
    cout << __LINE__ << endl;
    cout << __STDC__ << endl;
    cout << __TIME__ << endl;
    cout << __cplusplus << endl;

    return 0;
}
