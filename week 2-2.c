#include<stdio.h>
void main() 
{
 float c, f;
 printf("Enter the temperature in celsius:\n");
 scanf("%f",&c);
 f=(c*9/5) +32;
 printf("Fahrenheit temperature is %f \n\n\n",f);
 printf("Enter temperature in Fahrenheit:\n");
 scanf("%f",&f);
 c=(f-32) *5/9;
 printf("celsius temperature is %f \n",c);
}