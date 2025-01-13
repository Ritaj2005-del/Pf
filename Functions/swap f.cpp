#include<iostream>
using namespace std;
void swap(int& a, int& b) {

	int temp = a;
	a = b;
	int b = temp;



}
int main() {

	int num1, num2;
	cout << "Enter the first number:" << endl;
	cin >> num1;
	cout << "Enter the second number:" << endl;
	cin >> num2;

	cout << "Before swapping:" << endl;
	cout << "Num1=" << num1 << "Num2=" << num2 << endl;
	swap(num1, num2);

	cout << "After swapping: " << endl;
	cout << "num1 = " << num1 << ", num2 = " << num2 << endl;

	return 0;



}