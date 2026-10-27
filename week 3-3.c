#include<stdio.h>
#include<math.h>
void main() 
{
 float p, q, r, s, A;
 printf("Entre 3 sides of the triangle:\n");
 scanf("%f%f%f",&p,&q,&r);
 s=(p+q+r) /2;
 A=sqrt(s*(s-p) *(s-q) *(s-r)) ;
 printf("the area is %.2f",A);
}