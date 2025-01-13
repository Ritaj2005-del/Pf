#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main() {

	ofstream ofile;
	ofile.open("studmark.txt", ios::out);
	if (!ofile.is_open()) {

		cout << "Error opening the requested file." << endl;
	}
	else {
		cout << "The file has been opened successfully" << endl;
	}

	ofstream outfile;
	outfile.open("result.txt", ios::out);

	ifstream ifile;
	ifile.open("studmark.txt", ios::in);

	string name;
	double marks1, marks2, marks3;
	int total;

	for (int i = 0; i < 10; i++) {

		cout << "Enter the name of student and marks (marks 1 marks 2 marks 3):" << endl;
		getline(cin, name);
		cin >> marks1 >> marks2 >> marks3;
		ofile << name << " " << marks1 << " " << marks2 << " " << marks3 << endl;
	}
	
	for (int i = 0; i < 10; i++) {

		ifile >> name >> marks1 >> marks2 >> marks3;
		total = marks1 + marks2 + marks3;
		outfile<<name << " " << total << endl;
	}


			return 0;

}