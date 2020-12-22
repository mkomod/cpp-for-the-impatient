#include <iostream>

using namespace std;

class Point {
    public:
	double x, y;
	Point(double x);
	Point retObj();
};

Point::Point(double x) {
    // this keyword gives access to objects member
    this->x = x;
    y = 0.0;
}

Point Point::retObj() {
    return *this;
}


int
main() {
    Point p = Point(2.0); 
    cout << p.x << endl;
    return 0;
}
