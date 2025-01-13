#include<iostream>
#include<fstream>
using namespace std;
int main() {

	float num;

	ofstream ofile;
	ofile.open("float.txt", ios::out);

	if (!ofile.is_open())
	{
		cout << "Error opening the requested file." << endl;

	}

	else {

		cout << "The file has been opened successfully." << endl;
	}

	for (int i = 0; i < 5; i++) {

		cout << "Enter the integer" << " " << i + 1 << ":" << endl;
		cin >> num;
		ofile << num << " ";

	}
	ofile.close();
	return 0;
}