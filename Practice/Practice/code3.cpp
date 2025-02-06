#include<iostream>
using namespace std;
int getacc(const string& region) {

	int acc;
	cout << "Enter the number of accidents last year:" <<region<< endl;
	cin >> acc;
	if (acc == 0) {
		cout << "Invalid input. Please enter a number greater than zero." << endl;
	}
	else {
		return acc;
	}
}
void findlowest(int north, int south, int east, int west, int central) {

	int min = north;
	if (min == north) {
		cout << north;
	}
	else if (min == south) {
		cout << south;
	}
	else if (min == east) {
		cout << east;
	}
	else if (min == west) {
		cout << west;
	}
	else {
		cout << central;
	}
}
int main() {

	int north, south, east, west, central;
	cout << "The report of automobile accidents from last year in diff regions is given as:" << endl;

	north = getacc("north");
	south = getacc("south");
	east = getacc("east");
	west = getacc("west");
	central = getacc("central");

	cout << "To find the least number of accidents:" << endl;
	findlowest(north, south, east, west, central);
	return 0;
}
