#include<stdio.h>
#include<math.h>
void main() 
{
 float p, t, r, CI;
 printf("Enter principal amount, time period and rate of interest:\n");
 scanf("%f%f%f",&p,&t,&r);
 CI=p*pow(1+r/100, t)-p;
 printf("the compound interest is %f",CI);
}