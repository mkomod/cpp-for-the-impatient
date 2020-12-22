#include <iostream>
#include <cmath>

using namespace std;

class Point {
    public:
	double x, y;

	Point() {};
	Point(double x, double y);

	Point operator + ();
	Point operator + (const Point &p2);

	friend Point operator *(int n, const Point &p);

	operator double () {
	    return sqrt(pow(x, 2) + pow(y, 2) );
	}
};

Point::Point(double x, double y) {
    this->x = x;
    this->y = y;
}

Point Point::operator + () {
    return Point(x + 1.0, y);
}

Point Point::operator + (const Point &p2) {
    Point np;
    np.x = x + p2.x;
    np.y = y + p2.y;
    return np;
}


Point operator * (int n, const Point &p) {
    Point np;
    np.x = n * p.x;
    np.y = n * p.y;
    return np;
}

class Compare {
    private:
	int val;
    public:
	Compare(int val) { this->val = val; };
	bool operator () (int i) { return i < val; };
};


int
main() {
    Point p1 = Point(2.0, 3.0);
    Point p2 = Point(5.0, 2.5);

    Point p3(+p1); // copy of +p1
    cout << p3.x << endl;
    
    Point p4 = p1 + p2;
    cout << p4.x << ", " << p4.y << endl;
    
    Point p5 = 5 * p1;
    cout << p5.x << ", " << p5.y << endl;
    
    // function obj
    int i = 7;
    Compare c1 = Compare(5);
    Compare c2 = Compare(10);
    
    cout << "i < 5:  " << c1(i) << endl;
    cout << "i < 10: " << c2(i) << endl;
    
    // Conversion function
    double x = p1;
    cout << x << endl; 

    return 0;
}
