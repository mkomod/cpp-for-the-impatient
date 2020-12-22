#define VERSION
#ifndef VERSION
#error VERSION symbol not defined
#endif

#define flag 4

#include <iostream>

using namespace std;

int
main() {
    
#if flag == 3
    cout << "flag is 3" << endl;
#else
    cout << "flat is not 3" << endl;
#endif

    return 0;
}
