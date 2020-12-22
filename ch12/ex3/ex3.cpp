#include <iostream>
#include <cstdlib>

using namespace std;

int
main() {
    double a = atof("3.14159");
    cout << a << endl;
    
    char str[] = "24.1234 3.1234";
    char *p;
    double x = strtod(str, &p);
    double y = strtod(p, NULL);

    cout << "x: " << x << "\ty: " << y << endl;


    return 0;
}
