#include <iostream>
#include <fstream>

using namespace std;

int main() {
    // Create a file object
    ofstream marksFile;

    // Open the file in write mode
    marksFile.open("marks.txt");

    // Check if the file is opened successfully
    if (!marksFile.is_open()) {
        cout << "Error: Unable to open the file.";
        return 1;
    }

    // Ask user to enter marks of 10 students one by one
    for (int i = 0; i < 10; ++i) {
        int marks;
        cout << "Enter marks of student " << (i + 1) << ": ";
        cin >> marks;

        // Write the marks to the file
        marksFile << marks << endl;
    }

    // Close the file
    marksFile.close();

    cout << "Marks have been written to marks.txt file successfully." << endl;

    return 0;
}
