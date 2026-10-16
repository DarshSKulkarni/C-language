#include<stdio.h>
float convert(float m);

int main () { 
    float m,n;
    printf("please enter your temperature in C");
    scanf("%f", & m);
    printf("your temperature in farheneit is %f", convert(m)) ;
    
    
return 0;
}

    float convert( float m) { float n;
    n = ((m*(0.18))+32); 
    return n;
}