#include<iostream>
using namespace std;
void myline(char);
int main() {

	myline('$');



}
void myline(char t) {

	for (int i = 0; i < 5; i++)
	{
		cout << t;
	}

}