#include <iostream>
using namespace std;

const int MAX_STUDENTS = 5;

int main() {
    int rollNumbers[MAX_STUDENTS];
    int marksCS[MAX_STUDENTS];
    int marksMath[MAX_STUDENTS];
    float percentages[MAX_STUDENTS];
    char grades[MAX_STUDENTS];
    int size = 0;

    char choice;
    do {
        // Input data for a student
        cout << "Enter Roll Number: ";
        cin >> rollNumbers[size];

        cout << "Enter Marks for Computer Science (<=100): ";
        do {
            cin >> marksCS[size];
        } while (marksCS[size] > 100);

        cout << "Enter Marks for Mathematics (<=100): ";
        do {
            cin >> marksMath[size];
        } while (marksMath[size] > 100);

        // Calculate percentage and grade
        percentages[size] = (marksCS[size] + marksMath[size]) / 2.0;
        if (percentages[size] < 50)
            grades[size] = 'F';
        else if (percentages[size] < 60)
            grades[size] = 'D';
        else if (percentages[size] < 75)
            grades[size] = 'C';
        else if (percentages[size] <= 90)
            grades[size] = 'B';
        else
            grades[size] = 'A';

        size++;

        cout << "Do you want to continue enrolling students? (Y/N): ";
        cin >> choice;
    } while ((choice == 'Y' || choice == 'y') && size < MAX_STUDENTS);

    // Display initial data
    cout << "\nInitial Data:\n";
    cout << "=======================================================================================================\n";
    for (int i = 0; i < size; ++i) {
        cout << "Roll Number: " << rollNumbers[i] << "\t";
        cout << "Marks CS: " << marksCS[i] << "\t";
        cout << "Marks Math: " << marksMath[i] << "\t";
        cout << "Percentage: " << percentages[i] << "\t";
        cout << "Grade: " << grades[i] << endl;
    }
    cout << "=======================================================================================================\n";

    // Advanced operations
    do {
        int operation;
        cout << "\nAdvanced Operations:\n";
        cout << "1. Update Roll Number of a particular Student\n";
        cout << "2. Update marks of a particular student for CS\n";
        cout << "3. Update marks of CS for all students who are already enrolled\n";
        cout << "4. Update marks for Mathematics\n";
        cout << "5. Update marks of Mathematics for all students who are already enrolled\n";
        cout << "6. Sort the data on the basis of generated percentages\n";
        cout << "7. Delete the record of a particular student\n";
        cout << "8. Exit\n";
        cout << "Enter your choice: ";
        cin >> operation;

        if (operation == 1) {
            int rollNumber, newRollNumber;
            cout << "Enter Roll Number of the student: ";
            cin >> rollNumber;
            cout << "Enter new Roll Number: ";
            cin >> newRollNumber;

            for (int i = 0; i < size; ++i) {
                if (rollNumbers[i] == rollNumber) {
                    rollNumbers[i] = newRollNumber;
                    break;
                }
            }
        }
        else if (operation == 2) {
            int rollNumber, newMarksCS;
            cout << "Enter Roll Number of the student: ";
            cin >> rollNumber;
            cout << "Enter new Marks for Computer Science (<=100): ";
            do {
                cin >> newMarksCS;
            } while (newMarksCS > 100);

            for (int i = 0; i < size; ++i) {
                if (rollNumbers[i] == rollNumber) {
                    marksCS[i] = newMarksCS;
                    percentages[i] = (marksCS[i] + marksMath[i]) / 2.0;
                    grades[i] = (percentages[i] < 50) ? 'F' : (percentages[i] < 60) ? 'D' : (percentages[i] < 75) ? 'C' : (percentages[i] <= 90) ? 'B' : 'A';
                    break;
                }
            }
        }
        else if (operation == 3) {
            int newMarksCS;
            cout << "Enter new Marks for Computer Science (<=100): ";
            do {
                cin >> newMarksCS;
            } while (newMarksCS > 100);

            for (int i = 0; i < size; ++i) {
                marksCS[i] = newMarksCS;
                percentages[i] = (marksCS[i] + marksMath[i]) / 2.0;
                grades[i] = (percentages[i] < 50) ? 'F' : (percentages[i] < 60) ? 'D' : (percentages[i] < 75) ? 'C' : (percentages[i] <= 90) ? 'B' : 'A';
            }
        }
        else if (operation == 4) {
            int rollNumber, newMarksMath;
            cout << "Enter Roll Number of the student: ";
            cin >> rollNumber;
            cout << "Enter new Marks for Mathematics (<=100): ";
            do {
                cin >> newMarksMath;
            } while (newMarksMath > 100);

            for (int i = 0; i < size; ++i) {
                if (rollNumbers[i] == rollNumber) {
                    marksMath[i] = newMarksMath;
                    percentages[i] = (marksCS[i] + marksMath[i]) / 2.0;
                    grades[i] = (percentages[i] < 50) ? 'F' : (percentages[i] < 60) ? 'D' : (percentages[i] < 75) ? 'C' : (percentages[i] <= 90) ? 'B' : 'A';
                    break;
                }
            }
        }
        else if (operation == 5) {
            int newMarksMath;
            cout << "Enter new Marks for Mathematics (<=100): ";
            do {
                cin >> newMarksMath;
            } while (newMarksMath > 100);

            for (int i = 0; i < size; ++i) {
                marksMath[i] = newMarksMath;
                percentages[i] = (marksCS[i] + marksMath[i]) / 2.0;
                grades[i] = (percentages[i] < 50) ? 'F' : (percentages[i] < 60) ? 'D' : (percentages[i] < 75) ? 'C' : (percentages[i] <= 90) ? 'B' : 'A';
            }
        }
        else if (operation == 6) {
            for (int i = 0; i < size - 1; ++i) {
                for (int j = 0; j < size - i - 1; ++j) {
                    if (percentages[j] > percentages[j + 1]) {
                        swap(rollNumbers[j], rollNumbers[j + 1]);
                        swap(marksCS[j], marksCS[j + 1]);
                        swap(marksMath[j], marksMath[j + 1]);
                        swap(percentages[j], percentages[j + 1]);
                        swap(grades[j], grades[j + 1]);
                    }
                }
            }
        }
        else if (operation == 7) {
            int rollNumberToDelete;
            cout << "Enter Roll Number of the student to delete: ";
            cin >> rollNumberToDelete;

            for (int i = 0; i < size; ++i) {
                if (rollNumbers[i] == rollNumberToDelete) {
                    for (int j = i; j < size - 1; ++j) {
                        rollNumbers[j] = rollNumbers[j + 1];
                        marksCS[j] = marksCS[j + 1];
                        marksMath[j] = marksMath[j + 1];
                        percentages[j] = percentages[j + 1];
                        grades[j] = grades[j + 1];
                    }
                    size--;
                    break;
                }
            }
        }
        else if (operation == 8) {
            break;
        }
        else {
            cout << "Invalid choice! Please enter a valid option.\n";
        }

        // Display updated data
        cout << "\nUpdated Data:\n";
        cout << "=======================================================================================================\n";
        for (int i = 0; i < size; ++i) {
            cout << "Roll Number: " << rollNumbers[i] << "\t";
            cout << "Marks CS: " << marksCS[i] << "\t";
            cout << "Marks Math: " << marksMath[i] << "\t";
            cout << "Percentage: " << percentages[i] << "\t";
            cout << "Grade: " << grades[i] << endl;
        }
        cout << "=======================================================================================================\n";

        if (operation == 8)
            break;

        cout << "Do you want to continue with other advanced operations? (Y/N): ";
        cin >> choice;
    } while (choice == 'Y' || choice == 'y');
    return 0;
}