// Online C compiler (editor)
// Write and run C online using this editor.

#include <stdio.h>
void areaSquare( int n);


int main() {
     int n;
     printf("please enter your side length in cm \n");
     scanf("%d", & n);
    areaSquare(n);
    

    return 0;
}

void areaSquare(int n) {
    n=n*n;
    printf("Area is %d cm", n); }
