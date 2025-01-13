#include<iostream>
using namespace std;
float calculatedistance(float x1,float y1,float x2,float y2) {

	float dx = x2 - x1;
	float dy = y2 - y1;
	return sqrt(dx * dx + dy * dy);

}
int main() {

	cout << "The distance is given as:" << endl;
	cout << calculatedistance(1, 3, 5, 7);

	return 0;

}