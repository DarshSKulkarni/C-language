#include <stdio.h>

int main() {
    // 1. Declare and initialize an array of 5 integers
    int numbers[5] = {10, 20, 30, 40, 50};

    // 2. Access and print a single element (Index starts at 0)
    printf("The first element is: %d\n", numbers[0]);
    printf("The third element is: %d\n\n", numbers[2]);

    // 3. Modify an element using its index
    numbers[1] = 25; // Changes 20 to 25

    // 4. Loop through the array to print all elements
    printf("All elements in the array:\n");
    for (int i = 0; i < 5; i++) {
        printf("Element at index %d: %d\n", i, numbers[i]);
    }

    return 0;
}