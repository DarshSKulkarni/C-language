#include <stdio.h>

int main() 
{  
    int a[10], i, j, temp;
    
    printf("Enter 10 numbers:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &a[i]); 
    }

    // Corrected Logic
    for (i = 1; i < 10; i++) {               // i acts as the step/gap size
        for (j = 0; j < 10 - i; j++) {       // Bound check ensures j+i is always < 10
            if (a[j] > a[j + i]) {
                temp = a[j];
                a[j] = a[j + i];             // Swapping j and j+i correctly
                a[j + i] = temp;
            }
        }
    }

    printf("Sorted array:\n");
    for (i = 0; i < 10; i++) {               // Semicolon removed from here
        printf("%d ", a[i]); 
    }

    return 0; 
}
