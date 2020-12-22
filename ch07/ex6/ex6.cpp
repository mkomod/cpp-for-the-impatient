#include <iostream>
#include <string>

using namespace std;

enum sex {male, female};

class Mammal {
    public:
	string name;
	double life_span;
	sex gender;

	Mammal() : name(""), life_span(0.0), gender(female) {}
	Mammal(string n, double l, sex g) : name(n), life_span(l), gender(g) {}
};


class Dog : public Mammal {
    public:
	string bark;
	using Mammal::Mammal; // mammal constructors inherited
};


int
main() {
    Dog dg = Dog(); 
    dg.name = "Jerry";
    cout << dg.name << endl;

    // upcasting
    Mammal *ptrMammal;
    ptrMammal = &dg;
    cout << ptrMammal->name << endl;

    return 0;
}


