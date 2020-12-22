#include <iostream>

using namespace std;

class Mammal {
    public:
	// virtual void sound();
	virtual void sound() = 0; // pure virtual functions
};

class Dog : public Mammal {
    public:
	void sound();
};

class Cat : public Mammal {
    public:
	void sound() override; // explicit override
};

// void Mammal::sound() { }
void Dog::sound() { cout << "Bark!" << endl; }
void Cat::sound() { cout << "Meow!" << endl; }

int
main() {
    Dog dog = Dog();
    Cat cat = Cat();

    dog.sound();
    cat.sound();

    Mammal *mammal;
    mammal = &dog;
    mammal->sound();
    mammal = &cat;
    mammal->sound();

    return 0;
}
