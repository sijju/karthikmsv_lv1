//WAP to find the volume of a tromboloid using 4 functions.
#include<stdio.h>
float input()
{
  float c;
  scanf("%f",&c);
  return c;
}
float volume(float h,float d,float b)
{
  float volume = ((h*d*b)+(d/b))/3;
  return volume;
}
void display(float n)
{
 printf("The Volume is %.2f",n);
}
int main()
{
 float h,d,b,n;
 printf("Enter the value of h:");
 h=input();
 printf("Enter the value of d:");
 d=input();
 printf("Enter the value of b:");
 b=input();
 n=volume(h,d,b);
 display(n);
 return 0;
}
