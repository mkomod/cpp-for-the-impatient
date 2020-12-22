#include <iostream>

using namespace std;

class Pack_bool {
    private:
	int max_n;
	int nbytes;
	unsigned char *ptr;
    public:
	Pack_bool(int max);
	~Pack_bool();
	void set_bit(int n);
	void clear_bit(int n);
	bool get_bit(int n);
	void set_all_true() {
	    for (int i = 0; i < nbytes; ++i) { ptr[i] = 0xff; }
	}
	void set_all_false() {
	    for (int i = 0; i < nbytes; ++i) { ptr[i] = 0x00; }
	}
};

// Constructor
Pack_bool::Pack_bool(int max) {
    max_n = max;
    nbytes = (max_n + 7) / 8;
    ptr = new unsigned char[nbytes];
}

// set bit to 1
void Pack_bool::set_bit(int n) { 
    int i = n / 8;
    int j = n % 8;
    ptr[i] |= (0x01 << j);
}

// clear bit to 0
void Pack_bool::clear_bit(int n) { 
    int i = n / 8;
    int j = n % 8;
    ptr[i] &= ~(0x01 << j);
}

bool Pack_bool::get_bit(int n) {
    int i = n / 8;
    int j = n % 8;
    return (ptr[i] & (0x01 << j)) != 0;
}

Pack_bool::~Pack_bool() {
    cout << "Deleting object";
}

int
main() {
    int total = 0;
    int max = 40;
    Pack_bool pb(max);
    pb.set_all_true();

    for (int i = 2; i <= max; ++i) {
	if (pb.get_bit(i)) {
	    ++total;
	    cout << i << "\t";
	    for (int j = i + i; j < max; j += i) {
		cout << j << " ";
		pb.clear_bit(j);
	    }
	    cout << endl;
	}
    }
    
    cout << endl << "Total primes: " << total << endl;
    return 0;
}

