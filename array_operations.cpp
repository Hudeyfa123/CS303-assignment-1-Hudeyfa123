#include <iostream>
#include <fstream>
#include "array_operations.h"

using namespace std;

// Function to read data from file into array
void readArrayFromFile(int arr[], const char* filename) {
    ifstream inputFile(filename);
    if (!inputFile) {
        cout << "Error opening file!" << endl;
        return;
    }

    for (int i = 0; i < SIZE; i++) {
        inputFile >> arr[i];
    }

    inputFile.close();
}

// 1. Function to check if a certain integer exists in the array
int findIndex(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1; // return -1 if not found
}

// 2. Function to modify the value at a given index
void modifyValue(int arr[], int index, int newValue, int &oldValue) {
    if (index < 0 || index >= SIZE) {
        throw out_of_range("Index out of range");
    }
    oldValue = arr[index];
    arr[index] = newValue;
}

// 3. Function to add a new value at the end of the array
void addValue(int arr[], int &size, int newValue) {
    if (size >= SIZE) {
        throw overflow_error("Array is full");
    }
    arr[size] = newValue;
    size++;
}

// 4. Function to replace the value at a given index with 0 or remove the value altogether
void replaceOrRemove(int arr[], int &size, int index, bool remove) {
    if (index < 0 || index >= size) {
        throw out_of_range("Index out of range");
    }
    if (remove) {
        for (int i = index; i < size - 1; i++) {
            arr[i] = arr[i + 1];
        }
        size--;
    } else {
        arr[index] = 0;
    }
}
