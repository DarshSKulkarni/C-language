// Online C compiler (editor)
// Write and run C online using this editor.

#include <stdio.h>

int main()
{
    int x;
    printf("enter your number:");
    scanf("%d", &x);
    printf("%d", x % 3 == 0);

    return 0;
}