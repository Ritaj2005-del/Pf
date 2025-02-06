//Creating dynamic array using functions
#include<iostream>
using namespace std;


int* cda(int);
void showarray(int*, int);
int*bubblesort(int*, int);
int main() {

	int s;
	cout << "Enter the size of the array:" << endl;
	cin >> s;
	int* store = cda(s);
	 showarray(store, s);
	 int* sort = bubblesort(store, s);
	 cout << "Elements for the sorted array are:" << endl;
	 cout << "Elements for the sorted array are:" << endl;
	showarray(sort, s);

	return 0;
}

int* cda(int s) {

	int* ptr = new int[s];
	for (int i = 0; i < s; i++) { 

		cout<<"Enter Elements of the array :"<< endl;
		cin >> ptr[i];
	}

	return ptr;
}

void showarray(int* ptr, int s) {

	cout << "The elements of array are:" << endl;
	for (int i = 0; i < s; i++) {

		cout << ptr[i] << endl;


	}

}

int* bubblesort(int* ptr, int s) {

	int i, j;
	bool swapped;
	for (i = 0; i < s - 1; i++) {
		swapped = false;
		for (j = 0; j < s - i - 1; j++) {
			if (ptr[j] > ptr[j + 1]) {
				swap(ptr[j], ptr[j + 1]);
				swapped = true;
			}
		}

		// If no two elements were swapped
		// by inner loop, then break
		if (swapped == false)
			break;
	}

	return ptr;

}