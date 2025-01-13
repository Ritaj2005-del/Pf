#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int return_records(const string& fname) {
    ifstream ifile;
    ifile.open(fname, ios::in); // Use fname instead of hardcoded filename
    if (!ifile.is_open()) {
        cout << "The requested file has not been opened." << endl;
        return -1; // Return -1 to indicate error
    }
    else {
        cout << "The file has been opened successfully." << endl << endl;
    }

    string line;
    int countrecords = 0;
    while (getline(ifile, line)) {
        countrecords++;
    }

    ifile.close();
    return countrecords;
}

int* dynamic_array(int size) {
    int* myarray = new int[size];
    cout << "Dynamic array created on heap." << endl;
    return myarray;
}

int* input_array(int* myarray, int size) {
    cout << "Input the values in the array" << endl << endl;
    for (int i = 0; i < size; i++) {
        cout << "Enter the value at index " << i + 1 << ":" << endl;
        cin >> myarray[i];
    }
    return myarray;
}

void show_array(int* myarray, int size) {
    cout << "The elements of the array are given as:" << endl;
    for (int i = 0; i < size; i++) {
        cout << myarray[i] << "  " << endl;
    }
}

int* get_array(int* myarray, int size) {
    return myarray;
}

int* even_array(int* myarray, int size, int& even_size) {
    int counter = 0;
    for (int i = 0; i < size; i++) {
        if (myarray[i] % 2 == 0) {
            counter++;
        }
    }

    int* arr = new int[counter];
    int j = 0; // Index for the new array
    for (int i = 0; i < size; i++) {
        if (myarray[i] % 2 == 0) {
            arr[j] = myarray[i];
            j++;
        }
    }

    even_size = counter;
    return arr;
}

int main() {
    string fname = "document.txt";

    cout << "STEP 1 COMPLETED" << endl;
    int records = return_records(fname);
    if (records == -1) {
        return 1; // Exit if file cannot be opened
    }
    cout << "The file contains the following records: " << records << endl << endl;

    // Step 2
    cout << "STEP 2 COMPLETED" << endl;
    int* myarray = dynamic_array(records);
    cout << endl;

    // Step 03
    cout << "STEP 3 COMPLETED" << endl;
    int* myptr = input_array(myarray, records);

    // Step 04
    cout << "STEP 4 COMPLETED" << endl << endl;
    show_array(myarray, records);

    // STEP 05
    cout << "STEP 05 COMPLETED" << endl << endl;
    cout << "Array returned to main function." << endl;
    int* pointer = get_array(myptr, records);

    // STEP 06 COMPLETED
    cout << "STEP 06 COMPLETED." << endl;
    int even_size;
    int* even = even_array(pointer, records, even_size);

    cout << "Even numbers in the array are given as:" << endl;
    for (int i = 0; i < even_size; i++) {
        cout << even[i] << "  " << endl;
    }

  
    return 0;
}
