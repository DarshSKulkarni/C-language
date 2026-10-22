// Online C compiler (editor)
// Write and run C online using this editor.

#include <stdio.h>

int main() {
char age = '*';
char *ptr = &age;
    printf("%u \n", ptr);
ptr++;

    printf("%u \n", ptr);
    ptr--;
    printf("%u \n", ptr);

    return 0;
}