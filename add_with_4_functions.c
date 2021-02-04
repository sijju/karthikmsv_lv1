//Write a program to add two user input numbers using 4 functions.
#include<stdio.h>
float input()
{
float num;
printf("enter number:");
scanf("%f", &num);
return num;
}
float addition(float num1,float num2)
{
return num1+num2;
}
void display(float num1,float num2,float sum)
{
printf("%.2f+%.2f = %.2f",num1,num2,sum);
}
int main()
{
 float number1,number2,result;
 number1=input();
 number2=input();
 result =addition(number1,number2);
 display(number1,number2,result);
 return 0;
}
