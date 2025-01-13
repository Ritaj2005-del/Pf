#include<iostream>
using namespace std;
int max(int x, int y)
{
	if (x > y)
		return x;
	if (x < y)
		return y;
}
float maxx(float c, float d)
{
	if (c > d)
		return c;
	if (c < d)
		return d;
}
char maximum(char a, char b)
{
	if (a > b)
		return a;
	if (a < b)
		return b;
}
int main()
{
	char a = 'a', b = 'j';
	int x = 2, y = 8;
	float c = 23.05, d = 35.8;
	cout << "Max number is : " << max(x, y) << endl;
	cout << "Max number is : " << maxx(c, d) << endl;
	cout << "Max character is : " << maximum(a, b) << endl;
	system("pause");
	return 0;
}
