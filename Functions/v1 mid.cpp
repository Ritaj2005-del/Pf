#include<iostream>
using namespace std;

int getNumacc(const string& region) {
    int accidents;
    cout << "Enter the number of accidents reported last year in " << region << ": ";
    cin >> accidents;
    if (accidents <= 0) {
        cout << "Invalid input. Please enter a number greater than zero." << endl;
        // You may want to handle this case differently, e.g., ask for input again.
        // For simplicity, I'll return -1 here to indicate an error.
        return -1;
    }
    else {
        return accidents;
    }
}

void findlowest(int north, int south, int east, int west, int central) {
    int min = north; // Initialize min with the first region
    if (south < min) {
        min = south;
    }
    if (east < min) {
        min = east;
    }
    if (west < min) {
        min = west;
    }
    if (central < min) {
        min = central;
    }
    cout << "The fewest reported automobile accidents: " << min << endl;
}

int main() {
    int north, south, east, west, central;
    north = getNumacc("North");
    south = getNumacc("South");
    east = getNumacc("East");
    west = getNumacc("West");
    central = getNumacc("Central");

        findlowest(north, south, east, west, central);
    return 0;
}
