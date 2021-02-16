//Write a program to find the sum of n different numbers using 4 functions
#include<stdio.h>
int range()
{
 int n;
 printf("Enter the no.of values you want to enter:");
 scanf("%d",&n);
 return n;
}
int input(int n,int a[n])
{
 for(int i=0;i<n;i++)
{
 printf("Enter the value of number %d:",i+1);
 scanf("%d",&a[i]);
}
}
int addition(int n,int a[n])
{
 int sum=0;
 for (int i=0;i<n;i++)
 {
  sum+=a[i];
 }
 return sum;
}
void display(int n,int sum)
{
 printf("The sum of %d numbers entered is %d",n,sum);
}
int main()
{
 int n,sum;
 n=range();
 int a[n];
 input(n,a);
 sum=addition(n,a);
 display(n,sum);
 return 0;
}
