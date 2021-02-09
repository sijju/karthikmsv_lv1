//WAP to find the sum of two fractions.
#include<stdio.h>
typedef struct 
{
 int num,den;
/*Here num=numerator, den=denominator*/
}fraction;
int input(char a[],int b)
{
int c;
printf("Enter the %s of the fraction %d=",a,b);
scanf("%d",&c);
return c;
}
fraction sum(fraction f1,fraction f2)
{
fraction add={f1.num*f2.den + f2.num*f1.den, f1.den*f2.den};
int gcd=1;
for(int i=1;i<=add.num && i<=add.den;i++)
{
  if(add.num%i==0 && add.den%i==0)
{
   gcd=i;
}
}
add.num= add.num/gcd;
add.den= add.den/gcd;
return add;
}
void display(fraction add)
{
 printf("The Addition of two fractions is %d/%d ",add.num,add.den);
}
int main()
{
 int i,j,k,l;
 i=input("numerator",1);
 j=input("denominator",1);
 k=input("numerator",2);
 l=input("denominator",2);
 fraction f1={i,j};
 fraction f2={k,l};
 fraction add;
 add=sum(f1,f2);
 display(add);
 return 0;
}
