#include <iostream>
#include <fstream>
using namespace std;


int return_Records_Step01(char* filename)
{
    ifstream file(filename);
    int count = 0;
    int temp;
    while (file >> temp)
    {
        count++;
    }
    file.close();
    return count;
}


int* dynamic_array_Step02(int size)
{
    return new int[size];
}


void input_Array_Step03(int* arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }
}


void show_Array_Step04(int* arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}


int* get_Array_Step05(int* arr, int size)
{
    return arr;
}


int* even_array_Step06(int* arr, int size, int& even_count)
{
    even_count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            even_count++;
        }
    }
    int* evenArr = new int[even_count];
    int index = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            evenArr[index++] = arr[i];
        }
    }
    return evenArr;
}


int* shrink_array_Step07(int* arr, int size) {
    int* shrunkArr = new int[size - 1];
    for (int i = 0; i < size - 1; i++) {
        shrunkArr[i] = arr[i];
    }
    return shrunkArr;
}

int main() {
    char filename[] = "Text.txt";

    // Step 1
    int recordCount = return_Records_Step01(filename);
    cout << "Step 01:" << endl;
    cout << "Number of records in file: " << recordCount << endl << endl;

    // Step 2
    int* myArray = dynamic_array_Step02(recordCount);
    cout << "Step 02:" << endl;
    cout << "Dynamic Heap created " << endl << endl;

    // Step 3
    cout << "Step 03:" << endl;
    cout << "Input your own values:" << endl;
    input_Array_Step03(myArray, recordCount);

    // Step 4
    cout << "Step 04:" << endl;
    cout << "Array elements: ";
    show_Array_Step04(myArray, recordCount);

    // Step 5
    cout << endl << "Step 05:" << endl;
    cout << "Array returned to the main function" << endl << endl;
    int* completeArray = get_Array_Step05(myArray, recordCount);

    // Step 6
    cout << endl << "Step 06:" << endl;
    int evenCount;
    int* evenArray = even_array_Step06(completeArray, recordCount, evenCount);
    cout << "Even elements: ";
    show_Array_Step04(evenArray, evenCount);

    // Step 7
    cout << endl << "Step 07:" << endl;
    int* shrunkArray = shrink_array_Step07(completeArray, recordCount);
    cout << "Shrunk array: ";
    show_Array_Step04(shrunkArray, recordCount - 1);

    // Cleanup
    delete[] myArray;
    delete[] evenArray;
    delete[] shrunkArray;

    return 0;
}
