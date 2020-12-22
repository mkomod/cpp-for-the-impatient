#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

class fract {
    private:
	int num;
	int den;
    public:
	fract() { num = 0; den = 1; };
	fract(int nnum, int nden) {
	    num = nnum;
	    den = nden;
	}
	friend ostream& operator<< (ostream &os, fract &fr);
	friend istream& operator>> (istream &is, fract &fr);
};

ostream& operator<< (ostream &os, fract &fr) {
    os << fr.num << "/" << fr.den;
    return os;
}

istream& operator>> (istream &is, fract &fr) {
    string s;
    is >> s;
    fr.num = atoi(s.c_str());
    int pos = s.find('/');
    if (pos >= 0) {
	fr.den = atoi(s.c_str() + pos + 1);
	if (fr.den == 0) {
	    fr.den = 1;
	}
    } else {
	fr.den = 1;
    }
    return is;
}

int
main() {
    fract fr(5, 2);
    cout << fr << endl;
    cin >> fr;
    cout << fr << endl;

    return 0;
}
