#include <iostream>

namespace my_namespace {
    double x = 0;
    double pi = 3.14159265359;
}


int main() {
    using namespace std;
    using namespace my_namespace;

    cout << "The value of pi is " << pi << endl;
}
