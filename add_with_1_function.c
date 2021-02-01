//Write a program to add two user input numbers using one function.
#include<stdio.h>
int main(){
float a,b,sum;
printf("Enter first number: ");
scanf("%.2f",&a);
printf("Enter second number:");
scanf("%.2f",&b);
sum= a+b;
printf("sum of %.2f+%.2f=%.2f\n",a,b,sum);
return 0;
}
