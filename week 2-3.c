#include<stdio.h>
void main() 
{
 float p, t, r, SI;
 printf("Enter principle amount, time period and rate of interest:\n");
 scanf("%f%f%f",&p,&t,&r);
 SI=p*t*r/100;
 printf("the simple intrest is %f",SI);
}