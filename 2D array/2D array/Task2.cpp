#include<iostream>
using namespace std;
int main() {

	int arr[3][3] = {
		{1,2,3},
		{4,5,6},
		{7,8,9}
	};

	cout << "The array is displayed as:" << endl;
	//Displaying the  2Darray
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {

			cout << arr[i][j] << " ";
		}

		cout << endl;

	}
	cout << endl;

	//Displaying the transposed array
	cout << "The transposed array is given as:" << endl;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {

			cout << arr[j][i] << " ";
		}

		cout << endl;

	}





	return 0;
}