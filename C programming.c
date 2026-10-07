// Online C compiler (editor)
// Write and run C online using this editor.

#include <stdio.h>

int main() {
int i;
    do{ printf("please enter your number \n");
        scanf("%d", & i);
        printf("%d \n", i);

            if (i%7==0) {
                break;
            }
    }
        while(1);
    return 0;
}