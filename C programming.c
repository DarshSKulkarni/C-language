// Online C compiler (editor)
// Write and run C online using this editor.

#include <stdio.h>

int main()
{

    int a;
    int b;
    printf("please enter your first number");
    scanf("%d", &a);
    printf("please enter your second number");
    scanf("%d", &b);
    int max = (a > b) * a + (!(a > b)) * b;
    printf("the greater integer is: %d \n", max);
    return 0;
}