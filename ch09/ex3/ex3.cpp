#include <iostream>

using namespace std;

template<typename T>
class Multi {
    public:
	T a, b, c;
};

class Point {
    public:
	int x, y;
};

int
main() {
    
    Multi<Point> mp;
    mp.a.x = 3;
    mp.a.y = 4; 
    
    // pointer type
    Multi<int*> m_ptr_ints;
    
    // array
    Multi<int> big_int[10];
    big_int[1].a = 2;

    return 0;
}
