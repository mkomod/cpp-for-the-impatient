#include <iostream>
#include <cstdlib>

using std::cout; 
using std::cin; 
using std::endl;

int SEED = 1992;
int RANGE = 20;

int 
main() {
    srand(SEED);

    int guess;
    int num = 1 + rand() % RANGE;

    while (guess != num) {
	cout << "Enter a guess: ";
	cin >> guess;

	if (guess < num) {
	    cout << "Guess is too low" << endl;
	} else if (guess > num) {
	    cout << "Guess is too high" << endl;
	} else { 
	    cout << "Guess is correct" << endl;
	}
    }

    return 0;
}
