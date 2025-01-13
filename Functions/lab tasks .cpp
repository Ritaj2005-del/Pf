#include<iostream>
#include<cmath>
double sqr_num();
using namespace std;
int main() {
	double squareroot;
	squareroot = sqr_num();
	cout << "The square root of the given number is:" << squareroot << endl;
	


}
double sqr_num() {
	int number;

	cout << "Enter an integer:" << endl;
	cin >> number;

	if (number < 0)
	{
		cout << "The square root of provided number is not possible:" << endl;
		return 1;
	}

	double result = sqrt(number);
	return result;


}