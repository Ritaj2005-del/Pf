#include<iostream>
using namespace std;
void myFunction(double a, double b) {
	int program;

	cout << "Enter your choice (1-6) to perform operations:" << endl;
	cin >> program;

	switch (program) {

	case 1:
	cout << "The result of addition is:" << a + b << endl;
	break;


	case 2:
	
		cout << "The result of subtraction is:";
		if (a > b) {
			cout << a - b << endl;
		}
		else {
			cout << b - a << endl;
		}
		break;

	case 3:
	
		cout << "The result of multiplication is:" << a * b << endl;
		break;


	case 4:

		cout << "The result for division is:";
		if (b == 0) {
			cout << "Error.Division by 0 is not allowed.";
		}
		else {
			cout << a / b << endl;
		}
		break;

	case 5:
		cout << "The result of power is:" << pow(a, b) << endl;
		break;

	case 6:

		cout << "The program has exit." << endl;
		break;

	default:
		cout << "Invalid operation.";

	}

	}
int main() {

	double a, b;
	cout << "WELCOME TO THE CALCULATOR PROGRAM" << endl;

	cout << "Enter any number:" << endl;
	cin >> a;

	cout << "Enter another number:" << endl;
	cin >> b;

	cout << "Press 1 for Addition" << endl;

	cout << "Press 2 for Subtraction" << endl;

	cout << "Press 3 for Multiplication" << endl;

	cout << "Press 4 for Division" << endl;

	cout << "Press 5 for Power" << endl;

	cout << "Press 6 for exit" << endl;



	myFunction(a, b);

	return 0;
}