//WAP to find the distance between two points using structures and 4 functions.
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
struct point{
 float x,y;
};
float input(char i,int j,char k)
{
 float c;
 printf("Enter the value of %c%d.%c: ",i,j,k);
 scanf("%f",&c);
 return c;
}
float distance(struct point p1,struct point p2)
{
 float a,b;
 a = p2.x - p1.x;
 b = p2.y - p1.y;
 float distance =sqrt ((a*a)+(b*b));
 return distance;
}
void display(float n)
{
 printf("The distance is %.2f",n);
}

int main(){
 struct point p1,p2;
 p1.x=input('p',1,'x');
 p1.y=input('p',1,'y');
 p2.x=input('p',2,'x');
 p2.y=input('p',2,'y');
 float d=distance(p1,p2);
 display(d);
 return 0;
}
