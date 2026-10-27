#include<stdio.h>
void main() 
{
 int A, B, C, D, E, F, G, J=0, i=1, r1, r2, r3, r4;
 printf("Enter A, B, C, D, E, F, G:\n");
 scanf("%d%d%d%d%d%d%d",&A,&B,&C,&D,&E,&F,&G);
 r1=A+B*C+(D*E)+F*G;
 printf("\n%d",r1);
 r2=A/B*C-B+A*D/3;
 printf("\n%d",r2);
 r3=A+++B---A;
 printf("\n%d",r3);
 r4=J=(i++) + (++i);
 printf("\n%d",r4);
} 