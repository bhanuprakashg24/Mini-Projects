#include<stdio.h>
int main(){
void function1(){
int x=10;//local variable
static int y=10;//static variable
x=x+1;
y=y+1;
printf("%d,%d",x,y);
return 0;
}
}
