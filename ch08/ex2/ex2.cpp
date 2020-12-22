#define ARR_SIZE 253
#define MAX(A, B) (A > B ? A : B)
#define print_it(X) ( cout << #X )

#include <iostream>

using namespace std;

int
main() {
    
    int my_array[ARR_SIZE];

    for (int i = 1; i < ARR_SIZE; ++i) {
	my_array[i] = 1;
    }

    cout << "ARR_SIZE set to " << ARR_SIZE << endl;
    cout << MAX(2,3) << endl;

    print_it(DA); // stringify DA

    return 0;
}
