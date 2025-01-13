#include<iostream>
#include<cmath>

void Myfunction(int array[],int range) {

	int array[0] = max;
	for (int i = 1; i < range; i++) {

		if (array[i] > max) {

			max = array[i];

		}
	}
	cout << "The largest number in the array is:" << max << endl;
	while (max > 0) {

		cout << (max % 2);
		max /= 2;

	}

}
int main() {

	int range = size0f(array) / sizeof(array[0]);

	int array[size];
	size = 10;
	cout << "Enter  " << size << " elements for the array:" << endl;
	for (int i = 0; i < range; i++) {

		cout << "Enter " << " element no." << i + 1 << endl;
		cin >> array[i];

	}

	Myfunction(array, range);
	return 0;
}



}