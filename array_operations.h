#ifndef ARRAY_OPERATIONS_H
#define ARRAY_OPERATIONS_H

const int SIZE = 100;

void readArrayFromFile(int arr[], const char* filename);
int findIndex(int arr[], int size, int target);
void modifyValue(int arr[], int index, int newValue, int &oldValue);
void addValue(int arr[], int &size, int newValue);
void replaceOrRemove(int arr[], int &size, int index, bool remove);

#endif






