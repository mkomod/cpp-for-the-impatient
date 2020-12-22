#include <iostream>

using namespace std;

template<typename T, int size_n>
class my_arr {
    private:
	T data[size_n];
    public:
	T get_elem(int i) { return data[i]; };
	void set_elem(int i, T new_val) { data[i] = new_val; };
};


int
main() {
    
    my_arr<int, 10> arr;
    arr.set_elem(4, 0);
    cout << arr.get_elem(4) << endl;

    return 0;
}
