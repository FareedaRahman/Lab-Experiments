#include<stdio.h>
void main() 
{
 int a, b, c, max;
 printf("Enter 3 values:\n");
 scanf("%d%d%d",&a,&b,&c);
 max=(a>b)?((a>c)?a:c):((b>c)?b:c);
 printf("the greatest number is : %d",max);
} 