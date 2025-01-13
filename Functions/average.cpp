#include<iostream>
using namespace std;
double calculateAverage(double x, int y) {

	double average = (x + y)/ 2;
	return average;

}
int main() {

	cout << "The average of the two numbers is given as:" << calculateAverage(63.1,45.9) << endl;


}