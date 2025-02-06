#include <iostream>
using namespace std;

int main() {
    int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };


    cout << "The first array is displayed as:" << endl;
    // Displaying the first 2D array
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    cout << "Printing the diagonal elements" << endl << endl;
    cout << "Main diagonal elements:" << endl;
    for (int i = 0; i < 3; i++) {
        cout << arr[i][i] << " ";
    }
    cout << endl;
    cout << "Secondary diagonal elements:" << endl;
    for (int i = 0; i < 3; i++) {
        cout << arr[i][2 - i] << " ";
    }


    return 0;
}


