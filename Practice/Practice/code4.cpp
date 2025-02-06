#include<iostream>
#include<fstream>
using namespace std;
int main() {

	char words[100];
	int count = 0;
	ifstream ifile;
	ifile.open("paragraph.txt", ios::in);

	while (!ifile.eof()) {

		ifile.getline(words, 80);
		count++;
	}
	cout << "Number of words in the paragraph is:" << count << endl;
	ifile.close();

	return 0;
}