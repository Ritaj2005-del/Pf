#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void searchBooks(const string& query) {
    ifstream inputFile("books.txt");

    if (!inputFile) {
        cerr << "Error opening file!" << endl;
        return;
    }

    string title;
    while (getline(inputFile, title)) {
        if (title.find(query) != string::npos) {
            cout << title << endl;
        }
    }

    inputFile.close();
}

int main() {
    string query;
    cout << "Enter the book title to search for: ";
    getline(cin, query);

    searchBooks(query);

    return 0;
}
