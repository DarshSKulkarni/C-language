// Online C compiler (editor)
// Write and run C online using this editor.

#include <stdio.h>

int main() {
int age = 22;
int *ptr = &age;
printf("%d \n", *ptr);
printf("%d\n", *(&age));
    return 0;
}