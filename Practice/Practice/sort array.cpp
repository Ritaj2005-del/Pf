#include<iostream>
using namespace std;

void sortarray(int arr[], int size) {
	for (int i = 0; i < size; i++) {

		for (int j = i + 1; j < size; j++) {
			if (arr[i] > arr[j]) {

				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;

			}
		}

	}
	//Now to display the output
	for (int i = 0; i < size; i++) {

		cout << arr[i] << endl;
	}
}

int main() {

	int arr[5];

	for (int i = 0; i < 5; i++) {
		cout << "Enter th element of the array" << endl;
		cin >> arr[i];
	}
	int size = sizeof(arr) / sizeof(arr[0]);
	sortarray(arr, size);
	return 0;
}
