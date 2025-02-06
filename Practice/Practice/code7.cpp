#include<iostream>
using namespace std;
void reversef(int arr[], int n);
int main()
{
	int arr[5];
	for (int i = 0; i < 5; i++)
	{
		cout << "Enter the element in array : ";
		cin >> arr[i];
	}
	int n = sizeof arr / sizeof arr[0];
	cout << "Reverse of Array is : ";
	reversef(arr, n);

	return 0;

}
void reversef(int arr[], int n) {

	for (int i = n - 1; i >= 0; i--) {

		cout << arr[i] << " ";
	}

}