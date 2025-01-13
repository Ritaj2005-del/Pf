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
		cout << "The file has been opened successfully." << endl << endl;
	}
	string line;
	int countrecords = 0;
	while (getline(ifile, line)) {

		countrecords++;
	}


	ifile.close();
	return countrecords;
}

int* dynamic_array(int size) {

	int* myarray = new int[size];
	cout << "Dynamic array created on heap." << endl;
	return myarray;

}

int* input_array(int* myarray, int size) {

	cout << "Input the values in the array" << endl << endl;
	for (int i = 0; i < 10; i++) {
		cout << "Enter the value at index" << " " << i + 1 << ":" << endl;
		cin >> myarray[i];

	}
	return myarray;
}
int main() {

	string fname = "document.txt";

	cout << "STEP 1 COMPLETED" << endl;
	int records = return_records(fname);
	cout << "The file contains the following records:" << records << endl << endl;

	//Step 2
	cout << "STEP 2 COMPLETED" << endl;
	int* myarray = dynamic_array(records);
	cout << endl;

	//Step 03
	cout << "STEP 3 COMPLETED" << endl;
	int* myptr = input_array(myarray, records);
	return 0;
}
