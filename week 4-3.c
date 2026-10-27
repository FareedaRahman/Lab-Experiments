#include<stdio.h>
void main() 
{
 int S1, S2, S3, S4, S5, tot;
 float Ave;
 printf("Enter 5 subject values:\n");
 scanf("%d%d%d%d%d",&S1,&S2,&S3,&S4,&S5);
 tot=S1+S2+S3+S4+S5;
 Ave=tot/5.0;
 printf("the total is : %d and average is : %f",tot,Ave);
} 