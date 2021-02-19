//WAP to find the sum of n fractions.
#include<stdio.h>
typedef struct
{
 int num;
 int den;
 /*here num=numerator den=denominator*/
}fraction;
int range()
{
 int n;
 printf("Enter the no.of fractions You want to add:");
 scanf("%d",&n);
 return n;
}
int input(int n,fraction a[n])
{
  for(int i=0;i<n;i++)
  {
    printf("Enter the fraction %d numerator and denominator :",i+1);
    scanf("%d%d",&a[i].num,&a[i].den);
   }
}

fraction sum(int n,fraction a[n])
{
int numerator=0,denominator=1;
for(int i=0;i<n;i++)
{
 denominator *= a[i].den;
}
for(int i=0;i<n;i++)
{
 numerator += (a[i].num)*(denominator/a[i].den);
}
fraction add = {numerator,denominator};
int gcd=1;
for(int i=1;i<=add.num && i<= add.den;i++)
{
  if(add.num%i==0&&add.den%i==0)
  {
    gcd=i;
  }
}
add.num=  add.num/gcd;
add.den= add.den/gcd;
return add;
}
void display(int n,fraction add)
{
 printf("The sum of %d fractions entered is %d/%d",n,add.num,add.den);
}
int main()
{
 int n;
 n=range();
 fraction a[n];
 input(n,a);
 fraction result=sum(n,a);
 display(n,result);
 return 0;
}
