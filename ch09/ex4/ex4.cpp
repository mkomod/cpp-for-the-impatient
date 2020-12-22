#include <iostream>

using namespace std;

template<typename T>
class Vec2D {
    private:
	T x, y;
    public:
	Vec2D() {};
	Vec2D(T newx, T newy) { x = newx; y = newy; };
	void set(T newx, T newy) { x = newx; y = newy; };
	T get_x() { return x; };
	T get_y();
};

template<typename T>
T Vec2D<T>::get_y() {
    return y;
}


int
main() {
    
    Vec2D<double> coords(1.234, 4.321);
    cout << coords.get_x() << endl;
    cout << coords.get_y() << endl;

    return 0;
}
