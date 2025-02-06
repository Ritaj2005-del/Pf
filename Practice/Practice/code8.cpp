#include<iostream>
using namespace std;
void shiftarr(int arr[], int size) {

	for (int i = size - 1 - 1; i >= 0; i--) {

		int temp = arr[i];
		arr[i] = arr[i + 1];
		arr[i + 1] = temp;
	}

	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
}



int main() {


	int arr[5] = { 2, 5, 8, 9, 6 };
	int n = sizeof(arr) / sizeof(arr[0]);
	cout << "Element of array is :";
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	cout << "Element in array after shift : ";
	shiftarr(arr, n);
	cout << endl;
	system("pause");
	return 0;
}