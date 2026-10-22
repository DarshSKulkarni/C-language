// Online C compiler (editor)
// Write and run C online using this editor.

#include <stdio.h>

int main() {
float age = 22.00;
float *ptr = &age;
    printf("%u \n", ptr);
ptr++;

    printf("%u \n", ptr);
    ptr--;
    printf("%u \n", ptr);

    return 0;
}