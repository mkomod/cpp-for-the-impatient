#include <iostream>
#include <algorithm>

using namespace std;

int
main() {
    int sum = 0;
    int arr[8] = {100, 1234, 4, 18, 1, 89, 43, 2};

    sort(arr, arr + 8);
    for_each(arr, arr +8, 
	[&sum] (int n) { 
	    sum += n;
	    cout << n << " ";
	}
    );
    cout << endl << "The total is: " << sum << endl << endl;

    // or just use
    for (int i : arr) {
	cout << i << " ";
    }

    return 0;
}
