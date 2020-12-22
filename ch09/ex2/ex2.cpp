#include <iostream>

using namespace std;


template<typename T>
void t_swap(T &x, T &y) {
    T z = x;
    x = y;
    y = z;
}

template<typename T>
T t_max(T a, T b) {
    if (a > b)
	return a;
    else
	return b;
}

int
main() {
    int a = 1, b =2;
    unsigned int i = 10, j = 20;
    double phi = 1.616, pi = 3.14159;

    t_swap(a, b);
    t_swap(i, j);
    t_swap(phi, pi);

    cout << "Phi: " << phi << ", Pi: " << pi << endl;

    // explicitly stated template param
    cout <<  t_max<double>(phi, 2) << endl;

    return 0;
}
