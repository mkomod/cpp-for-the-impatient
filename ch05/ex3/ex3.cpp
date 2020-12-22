#include <iostream> 

using std::cout;
using std::endl;

int
main() {

    int id = 500;
    auto f = [id] (int n) -> int { return id + n; };
    cout << f(5) << endl;

    auto g = [&id] (int n) -> void { id = id + n; };
    g(10);
    cout << id << endl;

    auto h = [&id, f] (int n) -> void { id = f(n); };
    h(5);
    cout << id << endl;
    
    int n = 5;
    auto i = [n] () mutable {
	while (n-- > 0)
	    cout << "Hi!" << endl;
    };
    i();

    cout << "n is still " << n << endl;

    cout << [] (int a, int b) { return a + b; } (4, 5) << endl;

    return 0;
}

