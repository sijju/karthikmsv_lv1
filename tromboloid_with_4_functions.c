//WAP to find the volume of a tromboloid using 4 functions.
#include<stdio.h>
float input(char a)
{
  float c;
  printf("Enter the value of %c",a);
  scanf("%f",&c);
  return b;
}
float volume(float h,float d,float b)
{
  volume = ((h*d*b)+(d/b))/3;
  return volume;
}
void display(float n)
{
 printf("The Volume is %.2f",n);
}
int main()
{
 float h,d,b,n;
 h=input(h);
 d=input(d);
 b=input(b);
 n=volume(h,d,b);
 display(n);
 return 0;
}
