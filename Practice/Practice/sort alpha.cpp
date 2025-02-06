#include<iostream>
using namespace std;

void sortarray(char arr[], int size) {

	for (int i = 0; i < size; i++) {

		for (int j = i+ 1; j < size; j++) {

		  if (arr[j] >= 'a' && arr[j] <= 'z' && arr[j + 1] >= 'A' && arr[j + 1] <= 'Z') {

				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}

		}
	}

	//To display the output

	for (int i = 0; i < size; i++) {

		cout << arr[i] << endl;
	}

}


int main() {

	char arr[7] = { 'A','b','d','F','t','a' };
	int size;
	size = sizeof(arr) / sizeof(arr[0]);

	for (int i = 0; i < size; i++) {

		cout << "Enter element of the array:" << endl;
		cin >> arr[i];
	}
	sortarray(arr, size);

	return 0;
}