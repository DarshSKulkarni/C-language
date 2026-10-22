// Online C compiler (editor)
// Write and run C online using this editor.

#include <stdio.h>

int main() {
int marks[4];
    printf("enter phy. ");
    scanf("%d", & marks[0]);
    printf("enter math. ");
    scanf("%d", & marks[4]);
    printf("%d is phy and %d is math", marks[0], marks[4]);
    return 0;
}