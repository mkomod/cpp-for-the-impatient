#include <iostream>
#include <string>

using namespace std;

class Point {
    public:
	double x, y;
};

// members public by default
struct Point_2 {
    double x, y;
    string name;
};


int
main() {
    Point p1;
    Point_2 p2;

    p1.x = 0.0;
    p1.y = 0.0;

    p2.name = "cheese";
    Point_2 *ptr = &p2;

    cout << p2.name << endl;
    cout << ptr->name << endl; // equiv to (*ptr).name

    return 0;
}
