#include<iostream>
#include<fstream>

using namespace std;
int main()
{
	ifstream ifile;
	ifile.open("data_csv.txt", ios::in);
	if (!ifile.is_open()) {

		cout << "Error opening the requested file." << endl;
		return 1;
	}
	else {
		cout << "The file has been opened successfully." << endl;
	}
	ofstream ofile;
	ofile.open("data_csv.txt", ios::out);

	string sname, sage, sgrade;
	ifile >> sname >> sage >> sgrade;
	cout << sname << " " << sage << " " << sgrade << endl;
	cout << "--------------------------------" << endl;

	//Now to read the data from the file

	int age;
	char name, grade;
	char temp;
	while (!ifile.eof()) {

		ifile >> name >> temp >> age >> temp >> grade;
		cout << name << " " << age << " " << grade << endl;
		ofile << name << " " << age << " " << grade << endl;
	}
	ifile.close();
	return 0;
}