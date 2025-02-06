#include <iostream>
using namespace std;

int main() {
    // Initialize the 3x3 matrix
    int matrix[3][3] = {
        {1, 2, 3},
        {2, 5, 6},
        {3, 6, 9}
    };

    // Display the matrix
    cout << "The matrix is displayed as:" << endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    // Check if the matrix is symmetric
    bool isSymmetric = true;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            if (matrix[i][j] != matrix[j][i]) {
                isSymmetric = false;
                break;
            }
        }
        if (!isSymmetric) {
            break;
        }
    }

    // Print the result
    if (isSymmetric) {
        cout << "The matrix is symmetric." << endl;
    }
    else {
        cout << "The matrix is not symmetric." << endl;
    }

    return 0;
}
