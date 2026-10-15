// Online C compiler (editor)
// Write and run C online using this editor.

#include <stdio.h>
void areaRectangle( int a, int b);


int main() {
      int a; int b;
     printf("please enter your 1st side length in cm \n");
     scanf("%d", & a);
         printf("please enter your 2st side (breadth) in cm \n");
     scanf("%d", & b);
    
    areaRectangle(a, b);
    

    return 0;
}

void areaRectangle(int a, int b) {
int n;
    n=a*b;
    printf("Area is %d cm", n); }
