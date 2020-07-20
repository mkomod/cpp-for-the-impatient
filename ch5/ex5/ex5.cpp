#include <functional>
#include <iostream>


using std::function;
using std::cout;
using std::endl;


function<int(int, int)> gen_func() {
    int n = 10;
    return [n] (int a, int b) { return a + b + n; };
}

int
main() {
    auto f = gen_func();
    cout << f(1, 2) << endl;

    return 0;
}
