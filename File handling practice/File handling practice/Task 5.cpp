#include<iostream>
#include<fstream>

using namespace std;

int main() {

	char grades;
	ofstream ofile;
	ofile.open("grades.txt", ios::out);

	if (!ofile.is_open())
	{
		cout << "Error opening the requested file." << endl;

	}

	else {

		cout << "The file has been opened successfully." << endl;
	}

	for (int i = 1; i <= 5; i++) {

		cout << "Enter five grades" << endl;
		cin >> grades;

		ofile << grades << endl;
	}
	ofile.close();
	return 0;
}