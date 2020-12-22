#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

struct EmpRec {
    char name[30];
    char addr[40];
    short salary;
    short level;
};

int
main() {

    EmpRec my_rec;
    strcpy(my_rec.name, "Michael K");
    strcpy(my_rec.addr, "Wimbledon");
    my_rec.salary = 21000;
    my_rec.level = 1;

    char *p = reinterpret_cast<char*>(&my_rec);
    ofstream recs("records");
    recs.write(p, sizeof(my_rec));

    recs.close(); 
    
    return 0;
}
