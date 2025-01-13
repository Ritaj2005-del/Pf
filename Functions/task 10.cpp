#include<iostream>
using namespace std;
int hrstomin(int hrs) {

	return hrs * 60;
}
int minstohrs(int mins) {
	return mins / 60;

}
int hrstosecs(int hrs) {
	return hrs * 3600;

}
int secstohrs(int secs) {
	return secs / 3600;

}
int main() {
	int hrs, mins, secs;
	cout << "Enter the number of hours:" << endl;
	cin >> hrs;
	cout << "Enter the number of minutes:" << endl;
	cin >> mins;
	cout << "Enter the number of seconds:" << endl;
	cin >> secs;

	cout << "The hour conversion to minutes is:" << hrstomin(hrs) << endl;
	cout << "The minutes conversion to hours is:" << minstohrs(mins) << endl;
	cout << "The hours to seconds conversion is:" << hrstosecs(hrs) << endl;
	cout << "The second to hours conversion is:" << secstohrs(secs) << endl;

	return 0;


}