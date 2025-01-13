#include<iostream>
using namespace std;
void character(char ch) {

	if (ch >= '0' && ch <= '9') {
		cout << "The given character" << ch << "is a number." << endl;

	}
	else if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {

		cout << "The given character" << ch << "is an alphabet." << endl;



		if (ch >= 'A' && ch <= 'Z') {

			cout << ch << "   is an uppercase letter." << endl;
		}

		else if(ch >= 'a' && ch <= 'z') {

			cout << ch << "It is a lowercase letter." << endl;
		}
	}

	else{

		cout << "It is a special case character." << endl;
	}

}
int main() {
	
	char ch;
	cout << "Enter any character:" << endl;
	cin >> ch;

	character(ch);
	return 0;


}