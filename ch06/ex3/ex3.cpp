#include <iostream>
#include <memory> // smart pointer C++11

using namespace std;

void reset_arr(int *p, int n);
void copy_arr(int*, int*, int);
int max(int, int);

int
main() {
    int i = 0;
    int *p = &i;
    *p = 10;
    cout << i << endl;
    
    int arr[100];
    reset_arr(arr, 100);
    cout << arr[0] << endl;

    int arr_1[5] = {0, 1, 2, 3, 4};
    int arr_2[5];
    reset_arr(arr_2, 5);
    copy_arr(arr_2, arr_1, 5);
    cout << arr_2[2] << endl;
    
    const double a = 0.0;
    const double *ptr;
    ptr = &a;
    // *ptr = 2.0; ERROR
    
    int (*ftr)(int, int);
    ftr = max;
    cout << (*ftr)(-5, -3) << endl;

    return 0;
}


void
reset_arr(int *p, int n) {
    for (int i = 0; i < n; ++i) {
	*p = 0;
	p++;
    }
}

void 
copy_arr(int *p1, int *p2, int n) {
   for (int i = 0; i < n; ++i) {
       *p1++ = *p2++;
   }
}


int
max(int a, int b) {
    if (a > b) return a;
    return b;
}

