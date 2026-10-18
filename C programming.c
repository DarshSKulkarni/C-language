// Online C compiler (editor)
// Write and run C online using this editor.

#include <stdio.h>

int main() {

int age = 22;
int *ptr = &age;
printf("%u", &age);
printf("%u \n", ptr);
printf("%u \n", &ptr);
    return 0;
}