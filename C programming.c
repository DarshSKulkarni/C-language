// Online C compiler (editor)
// Write and run C online using this editor.

#include <stdio.h>
int calcPercentage(int hindi, int math, int sanskrit);

int main() {
    int hindi; int math; int sanskrit;
printf("please enter hindi marks out of 100");
scanf("%d", & hindi);
printf("please enter math marks out of 100");
scanf("%d", & math);
printf("please enter sanskrit marks out of 100");
scanf("%d", & sanskrit);
printf("your percentage is %d", calcPercentage( hindi, math, sanskrit));

return 0;
}

int calcPercentage(int hindi, int math, int sanskrit)
{ return ((hindi+sanskrit+math)/3);
    
}
5