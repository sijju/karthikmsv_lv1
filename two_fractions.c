
#include<stdio.h>
typedef struct
    {
        int num;
        int deno;
     
    }Fraction;
 
    Fraction sum(Fraction,Fraction);
 
    Fraction input(int z)
    {
     Fraction f;
     printf("Enter fraction %d(numerator/denominator):",z);
     scanf("%d/%d",&f.num,&f.deno);
     return f;
   
    }
 int gcd(int x,int y)
 { 
     if (y!=0){
      return gcd(y,x%y);
     }
     else 
      return x;
 }
   Fraction sum(Fraction f1, Fraction f2) 
 { 
  Fraction add; 
  int gcd1=gcd(f1.deno,f2.deno);
  if (f1.deno == f2.deno) 
    { 
      add.num = (f1.num + f2.num); 
      add.deno = f1.deno; 
      return add; 
    } 
 
    else
    {
      add.num = (f1.num*f2.deno)+(f2.num*f1.deno); 
      add.deno = (f1.deno*f2.deno)/gcd1; 
      int final=gcd(add.num,add.deno);
      add.num=add.num/final;
      add.deno=add.deno/final;
      return add;  

    }
 }    
 
   void display(Fraction add)
   {
     printf("The addition of two fractions is %d/%d",add.num,add.deno);
   }
    int main()
    {
     Fraction f1 =input(1);
     Fraction f2 =input(2);
     Fraction result = sum(f1, f2);
     display(result);  
     return 0;
    }
