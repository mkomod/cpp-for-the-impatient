#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int N = 50;

int
main() {
    int lower = 1;
    int upper = N;
    int input = 0;
    int guess;
    bool cont_game = true;
    
    cout << "Think if a number between 1 and " << N << ". Then press EMTER"
	<< endl;
    cin.ignore();

    cout << "Enter one of three responses" << endl <<
	"1: Correct, 2: Too low, 3: Too high" << endl << endl;

    while (cont_game) {

	guess = (upper + lower) / 2;
	cout << "The computer guessed: " << guess << endl;

	cin >> input;

	switch (input) {
	    case 1:
		cout << "The computer guessed correct!" << endl;
		cont_game = false;
		break;
	    case 2:
		lower = guess + 1;
		break;
	    case 3:
		upper = guess - 1;
	}
    }

    return 0;
}
