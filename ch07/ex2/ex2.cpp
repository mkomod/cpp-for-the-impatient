#include <iostream>
#include <cmath>

using namespace std;


class Point {
    public:
	static int n_points;
	void set_x(double nx) { x = nx; };
	void set_y(double ny) { y = ny; };
	double get_x() { return x; };
	double get_y();
	double distance();
    private:
	double x, y;
	double add() { return x + y; };
};

// Can also be declared outside the class
double Point::get_y() {
    return y;
}

double Point::distance() {
    return add();
}

// creates a global static varaible
int Point::n_points = 2;

int
main() {
    Point p;
    p.set_x(3.0);
    p.set_y(4.0);

    cout << p.get_x() << endl;
    cout << p.distance() << endl;

    cout << p.n_points << endl;

    return 0;
}

