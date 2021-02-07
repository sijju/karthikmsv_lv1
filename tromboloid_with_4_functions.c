//WAP to find the volume of a tromboloid using 4 functions.
#include<stdio.h>
float input()
{
  float c;
  printf("Enter the value of h,d,b respectively:");
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
  h=input();
 d=input();
  b=input();
 n=volume(h,d,b);
 display(n);
 return 0;
}
