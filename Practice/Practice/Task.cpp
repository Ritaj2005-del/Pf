#include<iostream>
using namespace std;

int* dynamicarr(int s){

	int* ptr = new int[s];
	for (int i = 0; i < s; i++) {

		cout << "Enter the elements of the array:" << endl;
		cin >> ptr[i];

	}
	return ptr;
}

void showarray(int* ptr, int s) {

	cout << "The elements of array are given as:" << endl;
	for (int i = 0; i < s; i++) {

		cout << ptr[i];
	}

}

int* bubblesort(int* ptr, int s) {

	for (int i = 0; i < s; i++) {

		for (int j = i + 1; j < s; j++) {

			if (ptr[i] > ptr[j]) {


				int temp = ptr[i];
				ptr[i] = ptr[j];
				ptr[j] = temp;
			}


		}


	}

	return ptr;

}

int main() {
	int size;
	cout << "Enter the size of the array:" << endl;
	cin >> size;

	int* store = dynamicarr(size);
	showarray(store, size);
	int* sort = bubblesort(store, size);
	showarray(sort, size);



	return 0;
}