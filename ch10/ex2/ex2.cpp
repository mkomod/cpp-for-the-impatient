#include <iostream>
#include <cctype>

using namespace std;

int
main() {
    // functions begining with "is" return a bool  
    char c1 = 'a';
    char c2 = '1';
    
    cout << isalnum(c1) << endl; // alpha-numeric
    cout << isalpha(c2) << endl; // letter
    cout << iscntrl(c1) << endl; // control character
    cout << isdigit(c2) << endl; // digit
    cout << islower(c1) << endl; // lowercase letter
    cout << isupper(c1) << endl; // uppercase letter
    cout << isprint(c1) << endl; // printable character
    cout << ispunct(c2) << endl; // punctuation
    cout << isspace(c2) << endl; // space
    cout << isxdigit(c1) << endl; // hex digit

    cout << tolower('K') << endl; // lowercase as int
    cout << toupper(c1) << endl; // uppercase as int

    return 0;
}
