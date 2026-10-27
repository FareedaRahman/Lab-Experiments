#include<stdio.h>
void main() 
{
int a, b, c, s;
float A;
printf("Enter 3 numbers:\n");
scanf("%d%d%d",&a,&b,&c);
s=a+b+c;
printf("sum of 3 numbers is %d \n",s);
A=s/3.0;
printf("the average of 3 numbers is %.2f",A);
}
