#include <iostream>

using namespace std;

template<typename T>
T t_min(T a, T b) {
    if (a < b)
	return a;
    else
	return b;
}

template<>
bool t_min(bool a, bool b) {
    cout << "Using specialised version ";
    return a && b;
}


int
main() {
    
    bool a = true, b = false;
    int c = 4, d = 10;

    cout << t_min(a, b) << endl;
    cout << t_min(c, d) << endl;

    return 0;
}
