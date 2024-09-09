#include <iostream>
#include "array_operations.h"

using namespace std;

int main() {
    int arr[SIZE];
    int size = 100; // Since the input file has 100 numbers

    // Read data from file
    readArrayFromFile(arr, "A1input.txt");

    // Check if a number exists in the array
    int numberToFind = 42;
    int index = findIndex(arr, size, numberToFind);
    if (index != -1) {
        cout << "Number " << numberToFind << " found at index: " << index << endl;
    } else {
        cout << "Number " << numberToFind << " not found!" << endl;
    }

    // Modify a value in the array
    try {
        int oldValue;
        modifyValue(arr, 5, 999, oldValue);
        cout << "Modified value at index 5, old value: " << oldValue << ", new value: " << arr[5] << endl;
    } catch (exception &e) {
        cout << "Error: " << e.what() << endl;
    }

    // Add a new value to the array
    try {
        addValue(arr, size, 101);
        cout << "Added new value 101, new size: " << size << endl;
    } catch (exception &e) {
        cout << "Error: " << e.what() << endl;
    }

    // Replace or remove a value
    try {
        replaceOrRemove(arr, size, 10, true);
        cout << "Removed value at index 10, new size: " << size << endl;
    } catch (exception &e) {
        cout << "Error: " << e.what() << endl;
    }

    return 0;
}
