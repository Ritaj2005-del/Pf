#include<iostream>
#include<fstream>
using namespace std;
int main() {

	int num;
	cout << "Enter any five integers" << endl;

	ofstream ofile;
	ofile.open("numbers.txt", ios::out);

	if (!ofile.is_open())

	{
		cout << "Error! The current file cannot be opened." << endl;
	}

	else {

		cout << "The file has been opened successfully." << endl;
	}
	for (int i = 0; i < 5; i++) {

		cout << "Enter integer number" << " " << i + 1 << ":" << endl;
		cin >> num;
		ofile << num << " ";
	}
	ofile.close();

	return 0;
}