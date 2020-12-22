#include <iostream>

using namespace std;


int
main() {
    int scores[5] = {1, 2, 3, 4, 5};
    /* int scores_[] = {1, 2, 3, 4, 5}; */

    for (int i = 0; i < 5; ++i) {
	cout << scores[i] << endl;
    }
    
    // range based for loop
    for (auto x : scores) {
	cout << x << endl;
    }

    return 0;
}
