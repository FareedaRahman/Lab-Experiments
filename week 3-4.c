#include<stdio.h>
void main() 
{
 float s, t, d;
 printf("Enter speed in m/s and time in sec:\n");
 scanf("%f%f",&s,&t);
 d=s*t;
 printf("the distance travelled is %.2f",d);
}