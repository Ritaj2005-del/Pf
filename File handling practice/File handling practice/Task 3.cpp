#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main() {

	string name;

	ofstream ofile;
	ofile.open("names.txt", ios::out);

	if (!ofile.is_open())
	{
		cout << "Error opening the requested file." << endl;

	}

	else {

		cout << "The file has been opened successfully." << endl;
	}

	for (int i = 0; i < 5; i++) 
	{
		cout << "Enter any five names" << endl;
		getline(cin, name);
		ofile << name << " ";
	}

	ofile.close();
	return 0;


}