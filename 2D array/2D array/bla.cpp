#include<iostream>
using namespace std;
int main()
{

	/*
		 Quiz 1  Quiz 2  Quiz 3  Quiz 4    total

Abdullah      4        9       7       8         28
noor          5        6       9       3         23
ghaniya       8        8       8       5         29
fatima        6        7       7       7         27
ushana        6        6       8       8         28
ritaj         6        8       8       5         27


int quizez[6][4];  // 6*4=24

	*/

	int* ptr = new int[3];    // taking memory from heap

	cout << "input quizzes marks: " << endl;

	int quizzes[3][3];
	for (int r = 0; r < 3; r++)
	{
		for (int c = 0; c < 3; c++)
		{
			cin >> quizzes[r][c];

		}
	}
	cout << "showing quizzes marks: " << endl;
	int cnt = 0;
	ptr = 0;
	for (int r = 0; r < 3; r++)
	{
		for (int c = 0; c < 3; c++)
		{
			ptr[cnt] += quizzes[r][c];    // 0 0

		}
		cout << "------" << ptr[cnt] << endl;
		cnt++;

		cout << endl;
	}






	system("pause");
	return 0;

}  //end of main


