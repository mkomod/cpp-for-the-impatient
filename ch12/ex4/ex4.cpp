#include <iostream>
#include <cstdlib>

using namespace std;

void e_func() {
    cout << "Exiting" << endl;
}

int
main() {
    atexit(e_func);

    int n = 101;
    void *p = calloc(sizeof(double), n);
    double *d_ptr = reinterpret_cast<double*>(p);
    d_ptr[0] = 1.243;
    d_ptr[1] = 41.243;
    d_ptr[2] = 0.243;
    d_ptr[100] = 0.243;
    
    p = realloc(p, 10 * sizeof(double));
    d_ptr = reinterpret_cast<double*>(p);
    cout << d_ptr[100] << endl;

    free(p);

    cout << getenv("EDITOR") << endl;

    system("echo \"Hello\"");

    exit(0);

    return 0;
}
