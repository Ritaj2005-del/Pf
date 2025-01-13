
#include<iostream>
#include<fstream>
using namespace std;
int main() {
	char arr[15] = { 'A','B','D','F','A','C','D','B','F','E','C','A' };
	ofstream ofile;
	ofile.open("gradecount.txt", ios::out);
	if (!ofile.is_open()) {

		cout << "Error opening the requested file." << endl;
		return 1;

	}
	char count = 0;
	char gradeA, gradeB, gradeC, gradeD, gradeE;
	if (count == 'A') {
		count++;
	}

	else if (count == 'B') {

		count++;
	}
	else if (count == 'C') {

		count++;
	}
	else if (count == 'D') {

		count++;
	}
	else {
		count++;
	}
	ofile << count<< endl;
	ofile.close();
	return 0;
} 