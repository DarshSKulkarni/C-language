#include<stdio.h>
void PrintHW(int count);

int main(){
    PrintHW(5);
    return 0;
}

void PrintHW (int count) {
    if (count ==0) {
    return;
    }
    printf("hello world \n");
    PrintHW(count-1);
}