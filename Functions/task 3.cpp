#include<iostream>
using namespace std;
int max(int x, int y) {
	if (x > y)
		return x;
	if (y > x)
		return y;

}
float maxx(float m, float n) {
	if (m > n)
		return m;
	if (m > n)
		return n;


}
char max(char &a, char &b) {
	if (a > b)
		return a;
	if (b > a)
		return b;


}
int main() {

	cout << "The maximum of two numbers is:" << endl;
	cout << max(86, 54) << endl;

	cout << "The maximum of two floating point number is:" << endl;
	cout << maxx(98.6, 32.5) << endl;


	cout << "The maximum character is:" << endl;
	cout << maxx('d', 'k') << endl;






	return 0;
}