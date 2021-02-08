//WAP to find the distance between two point using 4 functions.
#include<stdio.h>
#include<math.h>
float input(char a,int b)
{
 float c;
 printf("Enter the value of %c%d=",a,b);
 scanf("%f",&c);
 return c;
 }
 float distance(float x1,float x2,float y1,float y2)
{
  float distance=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
  return distance;
}
void display(float n)
{
 printf("The distance is %.2f",n);
}
int main()
{
 float x1,x2,y1,y2,d;
 x1=input('x',1);
 x2=input('x',2);
 y1=input('y',1);
 y2=input('y',2);
d=distance(x1,x2,y1,y2);
display(d);
return 0;
}
