#include <iostream>

using namespace std;

union Vdat {
    int n;
    double x;
    char* name[20];
};

int
main() {
    Vdat v1;
    v1.n = 5;
    
    // all members share the same place in memory
    cout << v1.n << endl;
    cout << v1.x << endl;
    
    v1.x = 3.14159;
    cout << v1.x << endl;


    return 0;
}
