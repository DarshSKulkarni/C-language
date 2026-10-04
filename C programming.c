// Online C compiler (editor)
// Write and run C online using this editor.

#include <stdio.h>

int main() {

   int a; char b;
    printf("Please enter your marks out of 100 \n");
    scanf("%d", & a);
    printf("please enter the student's gender (M/F) \n");
        scanf(" %c", &b);

    if (a<30 && b== 'M') {
        printf("sorry your son has got a C ");
    }
    
    else if (a<30 && b=='F') {
        printf("sorry your daughter has got a C");
    }

    else if (30<=a && a<70 && b=='M') {
        printf("sorry your son has got a B");
    }

    else if (30<=a && a<70 && b=='F') {
        printf("sorry your daughter has got a B");
    }

    else if (70<=a && a<90 && b=='M') {
        printf("sorry your son has got a A");
    }

    else if (70<=a && a<90 && b=='F') {
        printf("sorry your daughter has got a A");

    }
    
else if (90<=a && a<=100 && b=='M') {
        printf("somehow your son has got a A+");
    }

    else if (90<=a && a<=100 && b=='F') {
        printf("somehow your daughter has got an A+");

    }

        
        

    
    return 0;
}