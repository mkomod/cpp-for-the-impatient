#include <iostream>
#include <cstdio>


using namespace std;

int
main() {
    FILE* fp;
    
    // if fopen rails return
    if (! (fp = fopen("./test_file.txt", "r"))) {
	puts("File could not be opened");
	return -1;
    }

    /* fputs("Hello world!", fp); */ 
    char c = getc(fp);
    while (c != -1) {
	putchar(c);
	c = getc(fp);
    }

    fclose(fp);
    
    return 0;
}
