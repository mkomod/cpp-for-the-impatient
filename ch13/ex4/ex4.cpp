#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int
main() {
    
    ifstream file_in("text_in.txt");
    if (!file_in) { // check if file exists
	cout << "text_in.txt not found" << endl;
	file_in.open("text_in.txt", ios_base::app);
	file_in.close();
	file_in.open("text_in.txt");
	if (file_in) {
	    cout << "text_in.txt created" << endl;
	}
    }

    ofstream file_out("text_out.txt"); // created if does not exist
    file_out << "something in the file" << endl; // write to file
    
    // created if does not exist
    ofstream b_file_out("bin_out", ios_base::app | ios_base::binary);
    if (!b_file_out) {
	cout << "File failed to be created";
    }
    b_file_out << "1234aafsa "; 
    
    // close files
    file_in.close();
    file_out.close();
    b_file_out.close();
    
    // Reading from files
    ifstream read_txt("text_out.txt");
    if (!read_txt) {
	cout << "File not found" << endl;
	return -1;
    }

    string line;
    getline(read_txt, line);    
    cout << line << endl;
    
    read_txt.close();
    
    return 0;
}

