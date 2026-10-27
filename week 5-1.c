#include<stdio.h>
void main() 
{
 int a, b, c, d, max, min;
 printf("Enter 4 values:\n");
 scanf("%d%d%d%d",&a,&b,&c,&d);
 max=min=a;
 if(b>max) 
  max=b;
 else if (b<min) 
  min=b;
  
 if(c>max) 
  max=c;
 else if (c<min) 
  min=c;
  
 if(d>max)
  max=d;
 else if(d<min)
  min=d;
  
    printf("max=%d",max);
    printf("\nmin=%d", min);
}    
    