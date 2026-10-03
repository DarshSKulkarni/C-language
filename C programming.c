// Online C compiler (editor)
// Write and run C online using this editor.

#include <stdio.h>

int main() {
int age1;
    //her age
    int age2;
    //his age
    printf("enter her age:\n");
    scanf("%d",& age1);
        
        printf("enter his age:\n");
        scanf("%d", & age2);
  
    if(age1>age2){printf ("Her age is greater than his");
                 }
        else{printf("His age is greater than her");
            }
    return 0;
}