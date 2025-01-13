#include<iostream>
using namespace std;
double celcius_to_fah(double c);
double fah_to_celcius(double f);

int main() {

	double c, f;
	cout << "Enter the temperature in celcius:" << endl;
	cin >> c;
	double result1 = celcius_to_fah(c);
	
	cout << "The temperature converted to fahrenheit will be:" << result1 << endl;

	cout << "Enter the temperature in Fahrenheit:" << endl;
	cin >> f;
	double result2 = fah_to_celcius(f);
	cout << "The temperature conversion from fahrenheit to celcius is as given as:" << result2 << endl;

	return 0;
}
double celcius_to_fah(double c) {

	double f;
	f = (1.8 * c + 32);
	return f;

}
double fah_to_celcius(double f) {

	double c;
	c = (f - 32) / 1.8;
	return c;


}