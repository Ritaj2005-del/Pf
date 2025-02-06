#include <iostream>
using namespace std;

int main() {
    int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int arr2[3][3] = {
        {9, 8, 7},
        {6, 5, 4},
        {3, 2, 1}
    };

    int sum[3][3]; // Array to store the sum of arr and arr2

    cout << "The first array is displayed as:" << endl;
    // Displaying the first 2D array
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    int rowsum[3] = { 0,0,0 };
    int colsum[3] = { 0,0,0 };

    cout << "The sum of each row is given as:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            rowsum[i] += arr[i][j];
        }
    }
    // Display the sum of each row
    cout << "Sum of each row:" << endl;
    for (int i = 0; i < 3; ++i) {
        cout << "Row " << i + 1 << ": " << rowsum[i] << endl;
    }
        return 0;
    }