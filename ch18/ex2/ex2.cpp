#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>

using namespace std;

int
main() {
    vector<int> vect_int;
    for (int i = 0; i < 10; ++i) {
	back_inserter(vect_int) = i; // insert new item at end
    }
    
    for (int j : vect_int) {
	cout << j << " ";
    }

    // an example of back_inserter being used with an algorithm
    vector<int> v_int0(5, 0); // Instantiated with 5 zeros 
    int a_int[5] = { 324, 4, 82, 21, 43 };
    copy(a_int, a_int + 5, v_int0.begin()); // copies a_int to v_int0
    // --- or ---
    vector<int> v_int;
    copy(a_int, a_int + 5, back_inserter(v_int)); // using back_inserter iterator
    cout << endl;

    vector<int> v_int_c;
    copy_if(a_int, a_int + 5,  back_inserter(v_int_c),
	    [] (int n) { return n > 5; }
    );
	   
    for (int v : v_int_c) {
	cout << v << " ";
    }
    cout << endl;

   
    // permuation
    sort(v_int.begin(), v_int.end()); // sort values
    cout << "Is v_int a permuation of a_int: " << boolalpha << 
	is_permutation(a_int, a_int + 5, v_int.begin(), v_int.end()) << endl;

    // reverse
    char str[] = "My name is Mike";
    reverse(str, str + 15);
    cout << str;

    return 0;
}
