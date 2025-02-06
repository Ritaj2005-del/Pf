#include <iostream>
using namespace std;

int main() {
    // Initialize the 3x3 matrix
    int matrix[3][3] = {
        {1, 2, 3},
        {4,5,6},
        {7,8,9}
    };

    // Display the matrix
    cout << "The matrix before rotation is displayed as:" << endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    int rotate[3][3];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {

            rotate[i][j] = matrix[j][2 - i];
        }
    }
    //Displaying the rotated matrix

    cout << "The matrix after rotation is given as:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << rotate[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}




