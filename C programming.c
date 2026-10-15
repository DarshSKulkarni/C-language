// Online C compiler (editor)
// Write and run C online using this editor.

#include <stdio.h>
void areaCircle( float n);


int main() {
     float n;
     printf("please enter your radius in cm \n");
     scanf("%f", & n);
    areaCircle(n);
    

    return 0;
}

void areaCircle(float n) {
    n=(3.14)*n*n;
    printf("Area is %f cm", n); }
