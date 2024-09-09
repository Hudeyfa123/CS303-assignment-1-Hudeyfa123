# Array Operations Project

## Project Description
This project reads integers from an input file into a one-dimensional array and performs the following operations:
1. Check if a certain integer exists in the array and return its index.
2. Modify the value of an integer at a given index and return both the old and new values.
3. Add a new integer to the end of the array.
4. Replace an integer with 0 or remove it from the array completely.

The program also implements exception handling using try-catch blocks.

## How to Compile and Run the Program

### Compilation:
1. Make sure you have a C++ compiler installed (e.g., `g++`).
2. In the terminal/command line, navigate to the folder where the files are located.
3. Run the following command to compile the program:

    ```bash
    g++ main.cpp array_operations.cpp -o array_operations
    ```

### Running:
1. After compilation, you can run the program with:

    ```bash
    ./array_operations
    ```

2. Ensure the input file `A1input.txt` is in the same directory as the executable or provide the correct path.

### Input File:
The input file `A1input.txt` should have 100 integers. Here is a sample of the output:
1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 ... 91 92 93 94 95 96 97 98 99 100
