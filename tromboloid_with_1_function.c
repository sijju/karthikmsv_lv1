//Write a program to find the volume of a tromboloid using one function
#include<stdio.h>
int main()
{
    float h,d,b;
    printf("Enter values of h,d,b respectively:");
    scanf("%f%f%f",&h,&d,&b);
    float volume = ((h*d*b)+(d/b))/3;
    printf("The volume is %.2f",volume);
    return 0;
}
