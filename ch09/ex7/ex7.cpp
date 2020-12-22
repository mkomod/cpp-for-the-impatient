#include <iostream>
#include <tuple>

using namespace std;

// example - 1
template<typename T>
void printv(T val) {
    cout << val << endl;
}

template<typename T, typename... TArgs>
void printv(T val, TArgs... args) {
    cout << val;
    printv(args...);

}

// example - 2

void printvf(const char* s) { // Terminal version
    cout << s << endl;
}

template<typename T, typename... TArgs>
void printvf(const char* s, T val, TArgs... args) {
    while (*s) {
	if (*s == '%' && *(++s) != '%') {
	    cout << val;
	    printvf(s, args...);
	    return;
	}
	cout << *s++;
    }
}


int
main() {
    printv("Just one arg");

    int i = 10, j = 20; 
    printv("i: ", i, ", j: ", j);

    // example - 2
    printvf("i: %, j : %.", i, j);
    cout << endl;

    // example - 3, tuples
    tuple<int, string, double> my_tup(1, "cat", 3.14);
    cout << get<0>(my_tup) << endl;
    cout << get<1>(my_tup) << endl;
    cout << get<2>(my_tup) << endl;

    auto my_big_tup = make_tuple("hello", 1234, 1.244, 0);
    cout << "My big tuple size: ";
    cout << tuple_size<decltype(my_big_tup)>::value << endl;

    return 0;
}

