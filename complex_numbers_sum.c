//WAP to find the sum of n complex numbers using structures and 4 or more functions.
#include<stdio.h>
typedef struct{
    int real;
    int imag;
}complex;
int range()
{
    int n;
    printf("Enter the no.of complex numbers want to add:");
    scanf("%d",&n);
    return n;
}
int input(int n,complex a[n]){
    for(int i=0;i<n;i++){
     printf("Enter real part of %d number\n",i+1);
     scanf("%d",&a[i].real);
     printf("Enter imaginary part of %d number\n",i+1);
     scanf("%d",&a[i].imag);
    }
}
complex add(int n,complex a[n]){
    complex total;
    total.real=0,total.imag=0;
    for(int i=0;i<n;i++){
        total.real+=a[i].real;
    }
    for(int i=0;i<n;i++){
        total.imag+=a[i].imag;
    }
    complex add;
    add.real=total.real;
    add.imag=total.imag;
    return add;
}
void display(int n,complex add){
    printf("The sum of %d complex numbers is %d+%di",n,add.real,add.imag);
}
int main()
{
    int n;
    n=range();
    complex a[n];
    input(n,a);
    complex result=add(n,a);
    display(n,result);
    return 0;
    
}
