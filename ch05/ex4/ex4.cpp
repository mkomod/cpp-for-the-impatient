#include <algorithm>
#include <iostream>

using namespace std;

int
main() {
    int arr[5] = {5, 10, 15, 20, 25};
    int sum = 0;

    for_each(arr, arr + 5, [] (int n) { cout << n << " ";} );
    cout << endl;

    for_each(arr, arr + 5, [&sum] (int n) { sum += n; } );
    cout << "Sum: " << sum << endl;

    return 0;
}
