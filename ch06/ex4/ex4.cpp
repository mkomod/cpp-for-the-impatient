#include <iostream>

using namespace std;

void set_true(bool*, int);
void proc_primes(bool*, int, int);

int
main() {
    int max_n = 0;
    int total = 0;

    cout << "Max value: ";
    cin >> max_n;

    bool *primes = new bool[max_n + 1];
    set_true(primes, max_n);
    
    for (int i=2; i <= max_n; ++i) {
	if (primes[i]) {
	    ++total;
	    proc_primes(primes, max_n, i);
	}
    }
    cout << endl << "Total primes :" << total << endl;
    delete [] primes;

    return 0;
}

void set_true(bool *p, int n) {
    for (int i = 0; i < n; ++i) {
	*p++ = true;
    }
}

void proc_primes(bool *p, int max_n, int n) {
    cout << n << "\t";
    for (int i = n + n; i < max_n; i += n) {
	p[i] = false;	
    }
}

