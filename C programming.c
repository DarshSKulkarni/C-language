#include<stdio.h>
void printNamaste();
void printBonjour();

int main() {
int i;
printf("If indian type 1, if french type 2 \n");
    scanf("%d", & i);

    if (i==1) {printNamaste();}
    else if(i==2) {printBonjour();}
 return 0; }

void printNamaste()
{  printf("Namaste \n");
    
    }
void printBonjour()
{ printf ("bonjour \n"); }