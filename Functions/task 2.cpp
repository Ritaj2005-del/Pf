#include<iostream>
#include<cmath>
using namespace std;
int main() {

	int num1, num2;
	cout << "Enter any number:" << endl;
	cin >> num1;
	cout << "Enter any second number:" << endl;
	cin >> num2;



	double result=pow(num1, num2);
	cout << "The result of first argument raised to power of second argument is given as: " << result << endl;

}