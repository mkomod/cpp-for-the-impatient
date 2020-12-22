#include <iostream>

using namespace std;

template<typename T>
class Vec2D {
    public:
	T x, y;
};


int
main() {
    
    Vec2D<int> vec_of_ints;
    Vec2D<double> vec_of_doubles;

    vec_of_ints.x = 1;
    vec_of_ints.y = 2;

    cout << vec_of_ints.x << endl;
    return 0;
}
