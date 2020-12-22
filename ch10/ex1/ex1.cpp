#include <iostream>
#include <cstring>

using namespace std;

int
main() {
    char s[10] = "Kit";
    char s1[10] = "";
    char src[12] = "Hello World";
    char dest[12] = "";
    
    strcat(s, "Kat"); // Concatenate two strings
    strchr(s, 'a');  // pointer to first character matching 'a'
    strcmp(s, "KitKat");
    strcpy(s1, s); // copies s contents to s1
    strlen(s1); // string length
    strpbrk(s, " ,\ta"); // pointer to first match
    strrchr(s, 'K'); // reverse strchr
    strstr(s, "Kat"); // string search
    strtok(s, " "); // string tokeniser
    
    // memory block funcitons
    memccpy(dest, src, ' ', 12); // copy until char or n
    memcpy(dest, src, 12); // copy n bytes from src to dest
    
    return 0;
}
