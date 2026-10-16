// Online C compiler (editor)
// Write and run C online using this editor.

#include <stdio.h>
int fact( int n);


int main() {
    int n;
    printf("please enter your number");
    scanf("%d", & n);
printf("factorial is : %d", fact(n));

    return 0;
}

//recursion
int fact(int n) {
if (n==1){
    return 1;
}

int prodNm1 = fact(n-1);
int prodN = (prodNm1 * n);
}