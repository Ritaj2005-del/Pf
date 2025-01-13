#include<iostream>
#include<fstream>

using namespace std;

int main() {

    ofstream ofile;
	ofile.open("even_num.txt", ios::out);

	if (!ofile.is_open())
	{
		cout << "Error opening the requested file." << endl;

	}

	else {

		cout << "The file has been opened successfully." << endl;
	}

	for (int i = 2; i <= 20; i+=2) {
		
			cout << i << endl;
		
		ofile << i << " ";
	}
	ofile.close();
	return 0;
}