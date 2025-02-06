#include<iostream>
#include<fstream>
using namespace std;
int* getAges(int* p)
{
	return p;
}
void showAges(int* t)
{
	for (int i = 0; i < 5; i++)
	{
		cout << t[i] << " ";
	}
}

//int* getAges(int []);
int main()
{
	int ages[5] = { 23,45,6,22,12 };
	int* s = getAges(ages);
	showAges(s);
	system("pause");
	return 0;
}//end of main

