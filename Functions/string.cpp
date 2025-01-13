#include<iostream>
using namespace std;
void strings(string& x, string& y) {

	x = x + y;

}
int main() {
	string x = "Good";
	string y = "work";

	strings(x, y);
	cout << x << endl;


	return 0;

}