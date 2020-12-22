#include <iostream>
#include <random>

using namespace std;

void print_r(int n) {
    cout << " " << n;
}

int
main() {

    long seed = 2;
    default_random_engine eng(seed); // can be replaced with a different engine
    uniform_int_distribution<int> dist(1, 6);
    uniform_int_distribution<int> dist2(1, 1000);
    
    for(int i = 0; i < 10; ++i) {
	print_r(dist(eng));
	print_r(dist2(eng));
    } 
    cout << endl;

    int i = 0;
    while (dist(eng) < dist2(eng)) {
	i++; 
    }
    cout << "Attempts till smaller: " << i << endl;
    return 0;
}
