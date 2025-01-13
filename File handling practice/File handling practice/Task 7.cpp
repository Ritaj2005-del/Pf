#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main() {

	ofstream ofile;
	ofile.open("uberprob.txt", ios::out);
	if (!ofile.is_open()) {

		cout << "Error opening the requested file." << endl;
		return 1;
	}

	string pName, dName;
	cout << "Enter the driver name:" << endl;
	getline(cin, dName);

	cout << "Enter the passenger name:" << endl;
	getline(cin, pName);

	int SR;
	char stars[5];

	cout << "Enter the satisfaction rating(1-5)" << endl;
	cin >> SR;
	
	cout << "Enter the stars for rating(out of 5)" << endl;
	cin >> stars;

	ofile << dName <<" "<< pName <<" "<< SR <<" "<< stars;
	ofile.close();

	return 0;
}