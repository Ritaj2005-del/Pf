#include<iostream>
#include<cmath>
using namespace std;
double power_function(double n, int p) {

	double power = pow(n, p);
	return power;

}
int main() {

	double n;
	cout << "Enter a number:" << endl;
	cin >> n;

	cout <<"The result is:"<< power_function(n, 2);

	return 0;
}