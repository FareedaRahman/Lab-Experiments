#include<stdio.h>
#include<math.h>
void main() 
 {
  float a, b, c, d, r1, r2;
  printf("Enter a, b, c values:\n");
  scanf("%f%f%f",&a,&b,&c);
  d=pow(b, 2)-4*a*c;
  if (d>0) {
     r1=(-b+sqrt(d))/(2*a);
     r2=(-b-sqrt(d))/(2*a);
     printf("the roots are %f and %f",r1,r2);
     }
  else if(d==0) {
    r1=-b/(2*a);
    printf("roots are same and equal to : %f",r1);
     }
 else 
  printf("roots are imaginary");  

 }