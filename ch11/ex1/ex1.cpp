#define SCAN_WIDTH 80

#include <iostream>
#include <cstdio>

using std::cout;
using std::endl;

int
main() {
    
    char s = getchar(); // reads single char
    putchar(s); // outputs char

    puts("something else"); // outputs string to console
    
    int a = 1, b = 2, c = 3;
    printf("a: %d, b: %d, c: %d", a, b, c); // formatted output
    cout << endl;

    int d, e;
    scanf("%i %i", &d, &e); // formatted input
    cout << "d: " << d << " e: " << e << endl;

    int f = 0xffff;
    printf("%#010x\n", f);
    
    double temp = 37.58;
    printf("%10.3f", temp);
    cout << endl;
    
    char my_name[100];
    scanf("%s", my_name);
    cout << my_name << endl;

    return 0;
}
