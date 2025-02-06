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

    int min = arr[0][0];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {

            if (min> arr[i][j]) {
                min= arr[i][j];
            }
        }
        cout << endl;
    }
    cout << "The min element is given as:" << min << endl;
    int max = arr[0][0];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {

            if (max < arr[i][j]) {
                max = arr[i][j];
            }
        }
        cout << endl;
    }
    cout << "The max element is given as:" << max << endl;

    
    return 0;
}





