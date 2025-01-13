#include<iostream>
#include<fstream>
using namespace std;
int main() {

	int sum = 0;

	ofstream ofile;
	ofile.open("odd_numbers.txt", ios::out);
	if (!ofile.is_open()) {

		cout << "Error opening the requested file." << endl;
		return 1;
	}

	for (int i = 1; i <= 100; i += 2)
	{
		cout << i << " ";
		 sum += i;
		 ofile << i << endl;
	}

	cout << "The sum of the number is:" << sum << endl;
	ofile << "The sum of the number is:" << sum << endl;
	ofile.close();
	return 0;

}