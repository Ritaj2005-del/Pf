#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int return_records(const string& fname) {

	ifstream ifile;
	ifile.open("document.txt", ios::in);
	if (!ifile.is_open()) {

		cout << "The requested file has not been opened." << endl;
	}

	else {
		cout << "The file has been opened successfully." << endl;
	}
	string line;
	int countrecords = 0;
	while (getline(ifile, line)) {

		countrecords++;
	}


	ifile.close();
	return countrecords;
}


int main() {

	string fname = "document.txt";

	int records = return_records(fname);
	cout << "The file contains the following records:" << records << endl;
	return 0;
}
