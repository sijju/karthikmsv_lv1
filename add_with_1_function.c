//Write a program to add two user input numbers using one function.
#include<stdio.h>
int main(){
int a,b,sum;
printf("Enter first number: ");
scanf("%d",&a);
printf("Enter second number:");
scanf("%d",&b);
sum= a+b;
printf("sum of %d+%d=%d\n",a,b,sum);
return 0;
}
