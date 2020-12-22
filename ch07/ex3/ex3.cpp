#include <iostream>

using namespace std;

class Point {
    public:
	static int npoints;
	double x, y;

	Point();
	Point(double nx, double ny);
	Point(double nx);
	Point(const Point &p);
	~Point();
};

// default constructor, defined without any args
Point::Point() {
    x = y = 0;
    npoints++;
}

Point::Point(double nx, double ny) {
    x = nx; y = ny;
    npoints++;
}

Point::Point(double nx) {
    x = nx; y = 0;
    npoints++;
}

Point::Point(const Point &p) {
    x = p.x;
    y = p.y;
    npoints++; // copies but also updates npoints
}

int Point::npoints = 0;

void print_point(Point p);

Point::~Point() {
    npoints--;
    cout << "Obj deleted" << endl;
}

int
main() {

    Point p = Point(1, 2);
    cout << p.x << endl;

    Point p2;
    cout << p2.x << endl;
    
    // double passed, but point can be constructor using a double
    print_point(100.0);
    // copy constructor
    Point p3 = p2;
    cout << p3.x << endl;

    return 0;
}

void print_point(Point p) {
    cout << "x: " << p.x << endl;
    cout << "y: " << p.y << endl;
}
