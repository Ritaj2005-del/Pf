#include<iostream>
using namespace std;
double temperature(double c);
double fahrenheit(double f);
int main()
{
	double c, f;
	cout << "Temperature in Celcius is given as:" << endl;
	cin >> c;
	cout << "The temp in fahrenheit is given as:" << endl;
	cout << temperature(c) << endl;

	cout << "Enter the temperature in fahrenheit:" << endl;
	cin >> f;
	cout << "The temperature converted from fahrenheit to celcius is:" << endl;
	cout << fahrenheit(f);


	system("pause");
	return 0;
}
double temperature(double c) {

	double f = (1.8 * c + 32);
	return f;

}
double fahrenheit(double f) {

	double c = (f - 32) / 1.8;
	return c;

}
