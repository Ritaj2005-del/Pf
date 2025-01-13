#include <iostream>
#include <string>

using namespace std;

int getNumAccidents(const string& region) {
    int accidents;
    cout << "Enter the number of automobile accidents reported in the " << region << " region: ";
    cin >> accidents;

    while (accidents < 0) {
        cout << "Please enter a non-negative number of accidents: ";
        cin >> accidents;
    }

    return accidents;
}

void findLowest(int north, int south, int east, int west, int central) {
    int minAccidents = min({ north, south, east, west, central });
    cout << "The fewest reported automobile accidents: " << minAccidents << endl;
}

int main() {
    int north, south, east, west, central;

    north = getNumAccidents("North");
    south = getNumAccidents("South");
    east = getNumAccidents("East");
    west = getNumAccidents("West");
    central = getNumAccidents("Central");

    findLowest(north, south, east, west, central);

    return 0;
}
